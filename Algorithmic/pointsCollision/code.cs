bool pointsCollision(int[] p, int[] q, int[] u, int[] v) {
    int a = p[0] - q[0];
    int b = p[1] - q[1];
    int c = v[0] - u[0];
    int d = v[1] - u[1];
    return (c * c + d * d > 0) && (a * d == b * c) && (a * c >= 0) && (0 <= b * d);
}