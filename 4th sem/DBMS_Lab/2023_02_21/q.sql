/*EMPLOYEE (EmployeeId, Lname, Fname, PositionId, Supervisor, HireDate, Salary, Commission, DeptId, QualId); POSITION (PositionId, PosDesc); DEPT(DeptId, DeptName, Location, EmployeeId); QUALIFICATION(QualId, QualDesc); EMPLEVEL (LevelNo, LowSalary, HighSalary); DEPENDENT(EmployeeId, DependentId, DepDOB, Relation). 
1. Display all employee names (last name and first name separated by a comma and a space) and salary with appropriate column aliases. 
2. Display all employees who do not get any commission. 
3. Display unique building names from LOCATION table. 
4. Display all managers located at Bhubaneswar. 
5. Display names of employee names start with S/s and end with A/a. 
6. Display employee details who have been hired in last five years.
*/

--creting tables
create table employee
(   employeeid number(4) primary key,
    lname varchar2(20),
    fname varchar2(20),
    positionid number(4),
    supervisor number(4),
    hiredate date,
    salary number(10,2),
    commission number(10,2),
    deptid number(4),
    qualid number(4)
);

create table position
(   positionid number(4) primary key,
    posdesc varchar2(20)
);

create table dept
(   deptid number(4) primary key,
    deptname varchar2(20),
    location varchar2(20),
    employeeid number(4)
);

create table qualification
(   qualid number(4) primary key,
    qualdesc varchar2(20)
);

create table emplevel
(   levelno number(4) primary key,
    lowsalary number(10,2),
    highsalary number(10,2)
);

create table dependent
(   employeeid number(4) primary key,
    dependentid number(4),
    depdob date,
    relation varchar2(20)
);

--q1
select lname||','||fname as "Employee Name",salary as "Salary" from employee;

--q2
select * from employee where commission is null;

--q3
select distinct location from dept;

--q4
select * from employee where positionid=2 and deptid=2;

--q5
select * from employee where lname like 's%' and lname like '%a';

--q6
select * from employee where hiredate between sysdate-1825 and sysdate;
