select e.ename, d.dname
from emp e
left join dept d on e.deptno = d.deptno;
