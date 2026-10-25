typedef struct 
{
  char c[0x40];
} Blob;
typedef struct 
{
  s32 pad0;
  s32 slot;
  s32 pad1;
  s32 pad2;
  Blob data;
} Arg;
extern s32 D_00780280[];
extern Blob D_00780300[];
s32 func_001872C0(Arg *arg0)
{
  s32 i = 0;
  if (D_00780280[0] != (-1))
  {
    do
    {
      i++;
      if (i >= 0x20)
      {
        break;
      }
    }
    while (D_00780280[i] != (-1));
  }
  if (i == 0x20)
  {
    return 0;
  }
  D_00780280[i] = 1;
  D_00780300[i] = arg0->data;
  arg0->slot = i;
  return 1;
}
