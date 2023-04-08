/*1. List the emps who are Senior to ‘BLAKE’ working at CHICAGO & BOSTON.
2. List the emps whose jobs same as Allen or smith
3. Write a Query to display the details of emps whose Sal is same as of a) Employee Sal of Emp1
table. b) ¾ Sal of any Mgr of Emp2 table. c) The Sal of any sales person with exp of 5 yrs belongs
to the sales dept of emp3 table. d) Any Grade 2 employees of Emp4 table. e) Any Grade 2&3
employee working for SALES dept or OPERATIONS dept joined in 89.
4. List the jobs of Deptno 10 those are not found in dept 20.
5. List the emps of Emp1 who are not found in deptno 20
6. Find the details of highest paid employee
7. List the most recently hired emp of grade 3 belongs to the Loc CHICAGO
8. List the emps who joined in 81 with job same as the most senior person of year 81
9. List the most senior emp working under KING and Grade is more than 3.
10. List the details of the dept where the max no of emps are working
11. Display the emps whose Mgr name is Jones.
12. List the name, job, dname, Manager, salary, Grade dept wise.
13. List the names of emps who are getting the highest salary dept wise
14. List the emps whose salary is equal to average of maximum and minimum.
15. List the name, sal, comm. For those emps whose net pay is > or = any other employee salary of
the company.*/

CREATE TABLE employees_04_04 (
  empno NUMBER(4) PRIMARY KEY,
  ename VARCHAR2(10),
  job VARCHAR2(9),
  mgr NUMBER(4),
  hiredate DATE,
  sal NUMBER(7,2),
  comm NUMBER(7,2),
  deptno NUMBER(2),
  grade NUMBER(1),
  loc VARCHAR2(13),
  experience NUMBER(2)
);


INSERT INTO employees_04_04 VALUES (7369, 'SMITH', 'CLERK', 7902, TO_DATE('17-DEC-1980', 'DD-MON-YYYY'), 800, NULL, 20, 1, 'CHICAGO', 2);
INSERT INTO employees_04_04 VALUES (7499, 'ALLEN', 'SALESMAN', 7698, TO_DATE('20-FEB-1981', 'DD-MON-YYYY'), 1600, 300, 30, 2, 'BOSTON', 5);
INSERT INTO employees_04_04 VALUES (7521, 'WARD', 'SALESMAN', 7698, TO_DATE('22-FEB-1981', 'DD-MON-YYYY'), 1250, 500, 30, 2, 'BOSTON', 3);
INSERT INTO employees_04_04 VALUES (7566, 'JONES', 'MANAGER', 7839, TO_DATE('02-APR-1981', 'DD-MON-YYYY'), 2975, NULL, 20, 3, 'CHICAGO', 10);
INSERT INTO employees_04_04 VALUES (7654, 'MARTIN', 'SALESMAN', 7698, TO_DATE('28-SEP-1981', 'DD-MON-YYYY'), 1250, 1400, 30, 2, 'BOSTON', 8);
INSERT INTO employees_04_04 VALUES (7698, 'BLAKE', 'MANAGER', 7839, TO_DATE('01-MAY-1981', 'DD-MON-YYYY'), 2850, NULL, 30, 3, 'BOSTON', 12);
INSERT INTO employees_04_04 VALUES (7782, 'CLARK', 'MANAGER', 7839, TO_DATE('09-JUN-1981', 'DD-MON-YYYY'), 2450, NULL, 10, 4, 'CHICAGO', 15);
INSERT INTO employees_04_04 VALUES (7788, 'SCOTT', 'ANALYST', 7566, TO_DATE('19-APR-1987', 'DD-MON-YYYY'), 3000, NULL, 20, 4, 'DALLAS', 6);
INSERT INTO employees_04_04 VALUES (7839, 'KING', 'PRESIDENT', NULL, TO_DATE('17-NOV-1981', 'DD-MON-YYYY'), 5000, NULL, 10, 5, 'NEW YORK', 20);
INSERT INTO employees_04_04 VALUES (7844, 'TURNER', 'SALESMAN', 7698, TO_DATE('08-SEP-1981', 'DD-MON-YYYY'), 1500, 0, 30, 3, 'BOSTON', 4);
INSERT INTO employees_04_04 VALUES (7876, 'ADAMS', 'CLERK', 7788, TO_DATE('23-MAY-1987', 'DD-MON-YYYY'), 1100, NULL, 20, 2, 'DALLAS', 1);
INSERT INTO employees_04_04 VALUES (7900, 'JAMES', 'CLERK', 7698, TO_DATE('03-DEC-1981', 'DD-MON-YYYY'), 950, NULL, 30, 2, 'BOSTON', 3);
INSERT INTO employees_04_04 VALUES (7902, 'FORD', 'ANALYST', 7566, TO_DATE('03-DEC-1981', 'DD-MON-YYYY'), 3000, NULL, 20, 4, 'DALLAS', 6);
INSERT INTO employees_04_04 VALUES (7934, 'MILLER', 'CLERK', 7782, TO_DATE('23-JAN-1982', 'DD-MON-YYYY'), 1300, NULL, 10, 2, 'CHICAGO', 2);


--q1
SELECT ename from employees_04_04 where 
hiredate < (select hiredate from employees_04_04 where ename = 'BLAKE') and (loc = 'CHICAGO' or loc = 'BOSTON');

--q2
select ename from employees_04_04 
where job = (select job from employees_04_04 where ename = 'ALLEN') or job = (select job from employees_04_04 where ename = 'SMITH');

--q3
select ename from employees_04_04 
where sal = (select sal from employees_04_04 where empno = 7369);

--q4
select job from employees_04_04 
where deptno = 10 and job not in (select job from employees_04_04 where deptno = 20);

--q5
select ename from employees_04_04 
where deptno = 20 and ename not in (select ename from employees_04_04);

--q6
select * from employees_04_04 
where sal = (select max(sal) from employees_04_04);

--q7
select * from employees_04_04 
where hiredate = (select max(hiredate) from employees_04_04 where grade = 3 and loc = 'CHICAGO');

--q8
select * from employees_04_04 
where hiredate = (select max(hiredate) from employees_04_04 where job = (select job from employees_04_04 where hiredate = (select min(hiredate) from employees_04_04 where year(hiredate) = 1981)));

 --q9
select * from employees_04_04 
where mgr = (select mgr from employees_04_04 where ename = 'KING') and grade > 3;

--q10
SELECT ename,deptno FROM EMPLOYEES_04_04 
WHERE deptno = (SELECT deptno FROM (
    SELECT deptno, COUNT(*) as emp_count
    FROM EMPLOYEES_04_04 
    GROUP BY deptno 
    ORDER BY emp_count DESC
  )
  WHERE ROWNUM = 1
);

--q11
SELECT ename, mgr FROM EMPLOYEES_04_04 
WHERE mgr = (SELECT empno FROM EMPLOYEES_04_04 WHERE ename = 'JONES');

--q12

--q13
