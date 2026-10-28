typedef struct { f32 x, y, z; } V3;
void func_00155FC0(V3 *a, V3 *b, V3 *c, V3 *d, V3 *out, f32 t) {
  V3 v0, v1, v2, v3;
  f32 t2 = t * t;
  f32 t3 = t2 * t;
  f32 w;
  f32 x, y, z;
  w = (t3 + t3) - t2 * 3.0f + 1.0f;
  v0.x = a->x * w; v0.y = a->y * w; v0.z = a->z * w;
  w = t3 * -2.0f + t2 * 3.0f;
  v1.x = b->x * w; v1.y = b->y * w; v1.z = b->z * w;
  w = t3 - (t2 + t2) + t;
  v2.x = c->x * w; v2.y = c->y * w; v2.z = c->z * w;
  w = t3 - t2;
  v3.x = d->x * w; v3.y = d->y * w; v3.z = d->z * w;
  x = v0.x + v1.x; y = v0.y + v1.y; z = v0.z + v1.z;
  x += v2.x; y += v2.y; z += v2.z;
  x += v3.x; y += v3.y; z += v3.z;
  out->x = x; out->y = y; out->z = z;
}
