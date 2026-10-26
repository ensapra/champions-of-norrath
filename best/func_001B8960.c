unsigned long long func_001B8960(unsigned long long n, unsigned long long d) { if (!d) return 0; unsigned long long q=0; do { if(n<d) break; n-=d; q++; } while(1); return q; }
