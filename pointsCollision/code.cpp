bool pointsCollision(std::vector<int> p, std::vector<int> q, std::vector<int> u, std::vector<int> v) {
  u[0]-=v[0];
  u[1]-=v[1];
  p[0]-=q[0];
  p[1]-=q[1];
  double r=sqrt(u[0]*u[0]+u[1]*u[1])*sqrt(p[0]*p[0]+p[1]*p[1])+u[0]*p[0]+u[1]*p[1];
  return fabs(r)<1e-6 && (u[0] || u[1]);
}
