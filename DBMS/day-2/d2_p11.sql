select ename, sal
from emp
where sal > any (
    select sal
    from emp
    where job = 'ANALYST'
);
