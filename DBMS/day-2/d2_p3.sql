//add if not added
create table dept(
deptno number(2,0),
dname varchar2(14),
loc varchar2(13),
constraint pk_dept primary key (deptno) );

create table emp(
empno number(4,0),
ename varchar2(10),
job varchar2(9),
mgr number(4,0),
hiredate date,
sal number(7,2),
comm number(7,2),
deptno number(2,0),
constraint pk_emp primary key (empno),
constraint fk_deptno foreign key (deptno) references dept (deptno) );

insert into dept values(10, 'ACCOUNTING', 'NEW YORK');
insert into dept values(20, 'RESEARCH', 'DALLAS');
insert into dept values(30, 'SALES', 'CHICAGO');
insert into dept values(40, 'OPERATIONS', 'BOSTON');

insert into emp values
( 7839, 'KING', 'PRESIDENT', null, '17-NOV-1981', 5000, null, 10 );
insert into emp values
( 7698, 'BLAKE', 'MANAGER', 7839, '1-MAY-1981', 2850, null, 30 );
insert into emp values
( 7782, 'CLARK', 'MANAGER', 7839, '9-JUN-1981', 2450, null, 10 );
insert into emp values
( 7566, 'JONES', 'MANAGER', 7839, '2-APR-1981', 2975, null, 20 );
insert into emp values
( 7788, 'SCOTT', 'ANALYST', 7566, '13-JUL-87', 3000, null, 20 );
insert into emp values
( 7902, 'FORD', 'ANALYST', 7566, '3-DEC-1981', 3000, null, 20 );
insert into emp values
( 7369, 'SMITH', 'CLERK', 7902, '17-DEC-1980', 800, null, 20 );
insert into emp values
( 7499, 'ALLEN', 'SALESMAN', 7698, '20-FEB-1981', 1600, 300, 30 );
insert into emp values
( 7521, 'WARD', 'SALESMAN', 7698, '22-FEB-1981', 1250, 500, 30 );
insert into emp values
( 7654, 'MARTIN', 'SALESMAN', 7698, '28-SEP-1981', 1250, 1400, 30 );
insert into emp values
( 7844, 'TURNER', 'SALESMAN', 7698, '8-SEP-1981', 1500, 0, 30 );
insert into emp values
( 7876, 'ADAMS', 'CLERK', 7788, '13-JUL-87', 1100, null, 20 );
insert into emp values
( 7900, 'JAMES', 'CLERK', 7698, '3-DEC-1981', 950, null, 30 );
insert into emp values
( 7934, 'MILLER', 'CLERK', 7782, '23-JAN-1982', 1300, null, 10 );


//Original Code
insert into emp values
( 7890, 'ARTHUR', 'OFFICER', 7782, '03-MAR-1981', 1000, NULL, NULL );
