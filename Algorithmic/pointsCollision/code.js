function pointsCollision(p, q, u, v) {
  y = q[1] - p[1]
  r = q[0] - p[0] || y
  o = u[1] - v[1]
  i = u[0] - v[0] || o
  t = i ? r / i : -r
  return t >= 0 && o * t == y
}
