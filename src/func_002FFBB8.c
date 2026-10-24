typedef struct R { char pad[0x38]; int sdid; } R;
typedef struct F {
  char p0[0xC]; short flags; char p1[2]; int base; char p2[8]; int cookie; char p3[0xC];
  int (*closefn)(int); int ub; char p4[0x10]; int lb; char p6[0xC]; R *data;
} F;
extern R *D_00448480[];
int func_002FFDE8(F *);
void func_003001A8(R *);
void func_00300608(R *, int);
int func_002FFBB8(F *fp)
{
  int r;
  if (fp == 0) return 0;
  if (fp->data == 0) fp->data = D_00448480[0];
  if (fp->data->sdid == 0) func_003001A8(fp->data);
  if (fp->flags == 0) return 0;
  r = 0;
  if (fp->flags & 8) r = func_002FFDE8(fp);
  if (fp->closefn) { if (fp->closefn(fp->cookie) < 0) r = -1; }
  if (fp->flags & 0x80) func_00300608(fp->data, fp->base);
  if (fp->ub) {
    if (fp->ub != (int)fp + 0x40) func_00300608(fp->data, fp->ub);
    fp->ub = 0;
  }
  if (fp->lb) { func_00300608(fp->data, fp->lb); fp->lb = 0; }
  fp->flags = 0;
  return r;
}
