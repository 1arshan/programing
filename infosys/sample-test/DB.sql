    
create table student(
  student_id INT PRIMARY KEY,
  name VARCHAR(20) NOT NULL,
  major VARCHAR(20)
);
ALTER TABLE student ADD gpa DECIMAL;
ALTER TABLE student DROP COLUMN gpa;

DESCRIBE student;

INSERT INTO student VALUES(1,'JACK','BIOLOGY');
INSERT INTO student VALUES(2,'KATE','SOCIOLOGY');
INSERT INTO student(student_id,name) VALUES(3,'CLAIRE');

 
INSERT INTO student VALUES(4,'JACK','BIOLOGY');


UPDATE student SET major ='BIO' WHERE major ='BIOLOGY';
UPDATE student SET major ='CS' WHERE student_id =3;
UPDATE student SET major ='PHYSICS' ,name ='JERRY' WHERE student_id =2;

SELECT name FROM student;
SELECT name,major FROM student ORDER BY major;



CREATE TABLE employee (
  emp_id INT PRIMARY KEY,
  first_name VARCHAR(40),
  last_name VARCHAR(40),
  birth_day DATE,
  sex VARCHAR(1),
  salary INT,
  super_id INT,
  branch_id INT
);


create table instructor (instructorid varchar(100), name varchar(100), subject varchar(100), university varchar(100), salary integer);
		insert into instructor (instructorid , name , subject , university , salary) values ("l201", 'alex', 'java', 'harvard', 75000);
		insert into instructor (instructorid , name , subject , university , salary) values ("l202", 'sam', 'ruby', 'oxfard', 75000);
		insert into instructor (instructorid , name , subject , university , salary) values ("l201", 'alex', 'rdbms', 'harvard', 60000);
        insert into instructor (instructorid , name , subject , university , salary) values ("l203", 'mitchel', 'networking', 'cambridge', 50000);
        insert into instructor (instructorid , name , subject , university , salary) values ("l202", 'sam', 'rdbms', 'harvard', 40000);
        insert into instructor (instructorid , name , subject , university , salary) values ("l203", 'mitchel', '.net', 'oxfard', 50000);
		



create table gift (giftid varchar(100), giftname varchar(100), price integer, discount integer, availability integer);
		insert into gift (giftid , giftname , price , discount , availability) values ("g101", 'alex', 500, 9, 10);
		insert into gift (giftid , giftname , price , discount , availability) values ("g102", 'sam', 3550, 5, 15);
		insert into gift (giftid , giftname , price , discount , availability) values ("g103", 'alex', 2000, 20, 18);
        insert into gift (giftid , giftname , price , discount , availability) values ("g104", 'mitchel', 1500, 15, 15);
        insert into gift (giftid , giftname , price , discount , availability) values ("g105", 'sam', 3000, 7, 10);
        insert into gift (giftid , giftname , price , discount , availability) values ("g106", 'mitchel',1300, 30, 30);
		
select g1.giftid,g1.giftname from gift g1 join gift g2 on g1.availability =g2.availability and g1.discount <>g2.discount where g1.discount>7 


create table customer (customerno varchar(100), customername varchar(100), address varchar(100));
		insert into customer (customerno , customername , address ) values ("c501", 'rayan',"london");
		insert into customer (customerno , customername , address ) values ("c502", 'scott', "new york");
		insert into customer (customerno , customername , address ) values ("c503", 'steven', "paris");
    insert into customer (customerno , customername , address ) values ("c504", 'paul',"sydney");


create table account (customerno varchar(100), accounttype varchar(100));
		insert into account (customerno ,  accounttype ) values ("c501", 'saving');
		insert into account (customerno ,  accounttype ) values ("c501", 'saving');
		insert into account (customerno ,  accounttype ) values ("c503", 'credit');
        insert into account (customerno ,  accounttype ) values ("c504", 'recurrent deposit');
        insert into account (customerno ,  accounttype ) values ("c503", 'saving');
        insert into account (customerno ,  accounttype ) values ("c502", 'credit');

select customername from customer c inner join account a on c.customerno=a.customerno 
where accounttype in (select accounttype from account group by accounttype 
having count(accounttype) <> ( select max (count (accounttype)) from account group by accounttype)) 
and length (customername)<6;        

create table allocation (empid varchar(100), empname varchar(100),projectid varchar(100));
		insert into allocation (empid , empname ,projectid) values ("e300", 'olivia','infy101');
    insert into allocation (empid , empname ,projectid) values ("e301", 'hussey','infy102');
		insert into allocation (empid , empname ,projectid) values ("e302", 'mike','infy103');
		insert into allocation (empid , empname ) values ("e303", 'jack');
    insert into allocation (empid , empname ) values ("e304", 'smith');

select city,length(city) from station 
order by length(city) DESC,city limit 1;

select distinct city from station where city REGEXP "^[aeiou].*";


select distinct city from station where city in (select distinct city from station where city REGEXP "^[^aeiou].*") 
OR city in (select distinct city from station where city REGEXP "[^aeiou]$");

SELECT CEILING(CAST(AVG(Salary) AS FLOAT) - AVG(CAST(REPLACE(Salary,'0','') AS FLOAT))) FROM EMPLOYEES;

select name,
case 
when occupation ="Doctor" then "(D)"
when occupation ="Actor" then "(A)"
when occupation ="Singer" then "(S)"
when occupation ="Professor" then "(P)"
end As "occ"
from occupations;

select concat(name,'(',substring(occupation,1,1),')')
from occupations
order by name;