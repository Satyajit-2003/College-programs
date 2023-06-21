-- 1. Create a view to include all employee information, but hide salary and commission.
-- 2. Create a view to include department name and average salary by department.
-- 3. Create an index to search students faster based on their major ID.
-- 4. Create a sequence to add room IDs and then insert a new room into LOCATION table using the newly created sequence. What is the CURRVAL after the new row is inserted?
-- 5. Create a view that will display name, department number, and total income (salary + commission) of each employee in department 10. Prevent change of department through the view.
-- 6. Create a view that will display department names and sum of all employee income by department.
-- 7. Create a sequence deptid_seq to generate department Id (in dept table) and another sequence empid_seq to generate employee Id (in the employee table). Use deptid_seq to add a new department in the dept table. Now, add yourself as a new employee with empid_seq in the department you just added.
-- 8. . CREATE A SEQUENCE ON STARTING FROM 10 INCREMENTED BY 3



--q1
CREATE VIEW emp_info AS
SELECT emp_id, emp_name, emp_address, emp_phone, emp_email
FROM employee;

--q2
CREATE TABLE avg_sal AS
SELECT dept_name, avg(salary) FROM employee
GROUP BY deptid;

--q3
CREATE INDEX major_idx ON student(major_id);

--q4
CREATE SEQUENCE room_seq;
INSERT INTO location VALUES (room_seq.NEXTVAL, 'room 1', 'building 1', 'city 1', 'state 1', 'country 1');

--q5
CREATE VIEW emp_info AS
SELECT emp_id, emp_name, emp_address, emp_phone, emp_email
FROM employee;

--q6
CREATE VIEW emp_info AS
SELECT emp_id, sum(salary + commission)
FROM employee
GROUP BY deptid;

--q7
CREATE SEQUENCE deptid_seq;
CREATE SEQUENCE empid_seq;
INSERT INTO dept VALUES (deptid_seq.NEXTVAL, 'dept 1');
INSERT INTO employee VALUES (empid_seq.NEXTVAL, 'emp 1', 'address 1', 'phone 1', 'email 1', 1000, 100, deptid_seq.CURRVAL);

--q8
CREATE SEQUENCE seq1 START WITH 10 INCREMENT BY 3;


