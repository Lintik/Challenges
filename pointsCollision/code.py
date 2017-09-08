def pointsCollision(p, q, u, v):
  a, b, c, d = p[0] - q[0], p[1] - q[1], v[0] - u[0], v[1] - u[1]
  return c * c + d * d > 0 and a * d == b * c and a * c >= 0 <= b * d
