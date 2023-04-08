/*
1.	Create the following table and insert specified records.
Student table
Roll_no	Name	Address
101	Sushil	Bbsr
102	Amrit	Ctc
103	Vikas	Bbsr
104	Rahul	Delhi
105	Jiten	Mumbai
106	Ajay	ctc
2.	Create the following table and insert specified records.
Book table
Book_no	Book_name	Roll_no
11	Java	102
22	C	105
33	Oracle	102
44	C++	
55	Os	103
66	cn	
3.	Write a query to display the student names and book names for whom the books has been issued.
4.	Write a query to display all the student names along with the only book names that has been issued to the students.
5.	Write  a query to display only the student names who issued the books along with all the available book names in the library.
6.	Create the following table and insert specified records.
Product table
PID	PNAME	PRICE
111	SOAP	25
222	RICE	32
333	OIL	21
444	MILK	35
555	DAL	42
666	PASTE	33
7.	Write a query to display each product id and name along with the price which is less than that of the displayed product name.
8.	Write a query to display the 36 records by cross joining the student and book table.


*/

--Q1
CREATE TABLE std_03_18(
    roll_no int primary KEY,
    name varchar(20),
    address varchar(10)
);

INSERT INTO std_03_18 values(101,'Sushil','Bbsr');
INSERT INTO std_03_18 VALUES(102,'Amrit','Ctc');
INSERT INTO std_03_18 VALUES(103,'Vikas','Bbsr');
INSERT INTO std_03_18 VALUES(104,'Rahul','Delhi');
INSERT INTO std_03_18 VALUES(105,'Jiten','Mumbai');
INSERT INTO std_03_18 VALUES(106,'Ajay','ctc');


--Q2
Create table book_03_18(
    book_id int primary key,
    book_name varchar(20),
    roll_no int references std_03_18(roll_no)
);

insert into book_03_18 values(11,'Java',102);
INSERT INTO book_03_18 VALUES(22,'C',105);
INSERT INTO book_03_18 VALUES(33,'Oracle',102);
INSERT INTO book_03_18 VALUES(44,'C++',NULL);
INSERT INTO book_03_18 VALUES(55,'Os',103);
INSERT INTO book_03_18 VALUES(66,'cn',NULL);

--Q3
select name, book_name from std_03_18 s, book_03_18 b 
where s.roll_no=b.roll_no;	

--Q4
select name, book_name from std_03_18 s left outer join book_03_18 b using (roll_no);

--Q5
select name, book_name from std_03_18 s right outer join book_03_18 using (roll_no);

--Q6
create table prod_03_18(
    prod_id int primary key,
    prod_name varchar(20),
    price int
);

insert into prod_03_18 values(111,'SOAP',25);
insert into prod_03_18 values(222,'RICE',32);
insert into prod_03_18 values(333,'OIL',21);
insert into prod_03_18 values(444,'MILK',35);
insert into prod_03_18 values(555,'DAL',42);
insert into prod_03_18 values(666,'PASTE',33);

--Q7
select p1.prod_id, p1.prod_name, p2.price from prod_03_18 p1, prod_03_18 p2
where p1.price>p2.price;

--Q8
select * from std_03_18 ,book_03_18;

