select e.ename, d.loc
from emp e
join dept d on e.deptno = d.deptno
where e.job = 'MANAGER';
