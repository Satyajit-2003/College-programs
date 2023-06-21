
-- 1. WAQ to cretate the follwing employee_04_25 table and insert at least 5 records
-- EMP_ID,EMP_FIRSTNAME,EMP_LASTNAME,AGE,SALARY,CITY,
-- AND DATE_OF_JOIN

-- 2. WAQ to display the details of all employees with their experience in years.

-- 3. WAQ to display the FIRST NAME in uppercase, Lastname in lowercase for the following employees
-- a) highest paid employee
-- b) lowest paid employees
-- c) Senior most emplyee as per DOJ. 
-- d) Junior most employee as per age.

-- 4. WAQ to display the employee details whose city name starts with M and ends with I.

-- 5. WAPLSQL prog to display the sum of max and min values among 3 numbers.

--q1
drop table employee_04_25;
create table employee_04_25( 
    emp_id int,
    emp_firstname varchar2(20),
    emp_lastname varchar2(20),
    age number(3),
    salary number(10,2),
    city varchar2(20),
    date_of_join date
);

insert into employee_04_25 values(1,'sachin','tendulkar',40,100000,'mumbai','1-jan-2000');
insert into employee_04_25 values(2,'sourav','ganguly',45,200000,'kolkata','1-jan-2005');
insert into employee_04_25 values(3,'rahul','dravid',50,300000,'bangalore','1-jan-2010');
insert into employee_04_25 values(4,'virendra','sehwag',35,400000,'delhi','1-jan-2015');
insert into employee_04_25 values(5,'virat','kohli',30,500000,'mumbai','1-jan-2018');

--q2
select emp_firstname, emp_lastname, age, ROUND((SYSDATE - TO_DATE(date_of_join))/365, 1) AS experience 
from employee_04_25;

--q3
select upper(emp_firstname), lower(emp_lastname) from employee_04_25 where salary = (select max(salary) from employee_04_25);
select upper(emp_firstname), lower(emp_lastname) from employee_04_25 where salary = (select min(salary) from employee_04_25);
select upper(emp_firstname), lower(emp_lastname) from employee_04_25 where date_of_join = (select max(date_of_join) from employee_04_25);
select upper(emp_firstname), lower(emp_lastname) from employee_04_25 where age = (select max(age) from employee_04_25);

--q4
select * from employee_04_25 where city like 'm%I';

--q5

DECLARE
    a int := &a;
    b int := &b;
    c int := &c;
    max1 int;
    min1 int;
    sum1 int;
BEGIN
    IF a > b THEN
        max1 := a;
        min1 := b;
    ELSE
        max1 := b;
        
        min1 := a;
    END IF;

    IF c > max1 THEN
        max1 := c;
    END IF;
    IF c < min1 THEN
        min1 := c;
    END IF;

    sum1 := (max1 + min1);
    dbms_output.put_line('Sum is: '|| sum1);
END;