select ename
from emp
where job = 'CLERK'
and hiredate < (
    select min(hiredate)
    from emp
    where job = 'SALESMAN'
);
