select e.ename, d.dname
from emp e
right join dept d on e.deptno = d.deptno;
