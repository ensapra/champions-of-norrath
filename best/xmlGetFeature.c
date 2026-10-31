/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 strcmp(s32, M2C_UNK *);                         /* extern */
extern M2C_UNK D_011D6048;
extern M2C_UNK D_011D6068;
extern M2C_UNK D_011D6080;
extern M2C_UNK D_011D60A0;
extern M2C_UNK D_011D60B8;
extern M2C_UNK D_011D60D0;
extern M2C_UNK D_011D60E8;
extern M2C_UNK D_011D6100;
extern M2C_UNK D_011D6128;
extern M2C_UNK D_011D6150;
extern M2C_UNK D_011D6168;
extern M2C_UNK D_011D6180;
extern M2C_UNK D_011D6198;
extern M2C_UNK D_011D61B8;
extern M2C_UNK D_011D61D8;
extern M2C_UNK D_011D61F8;
extern M2C_UNK D_011D6218;
extern M2C_UNK D_011D6238;
extern M2C_UNK D_011D6258;
extern M2C_UNK D_011D6278;
extern M2C_UNK D_011D6298;
extern M2C_UNK D_011D62B0;
extern M2C_UNK D_011D62C8;
extern M2C_UNK D_011D62E8;
extern M2C_UNK D_011D6308;
extern M2C_UNK D_011D6328;
extern M2C_UNK D_011D6348;
extern M2C_UNK D_011D6368;
extern M2C_UNK D_011D6378;
extern M2C_UNK D_011D6388;
extern M2C_UNK D_011D6398;
extern M2C_UNK D_011D63B8;
extern M2C_UNK D_011D63C8;
extern M2C_UNK D_011D63D0;
extern M2C_UNK D_011D63E0;
extern M2C_UNK D_011D63F8;
extern M2C_UNK D_011D6410;
extern M2C_UNK D_011D6428;
extern M2C_UNK D_011D6438;
extern M2C_UNK D_011D6458;

s32 xmlGetFeature(void *arg0, s32 arg1, void **arg2) {
    s32 var_2;

    if (arg0 != NULL) {
        var_2 = -1;
        if ((arg1 != 0) && (arg2 != NULL)) {
            if (strcmp(arg1, &D_011D6458) != 0) {
                if (strcmp(arg1, &D_011D6438) != 0) {
                    if (strcmp(arg1, &D_011D6428) != 0) {
                        if (strcmp(arg1, &D_011D6410) != 0) {
                            if (strcmp(arg1, &D_011D63F8) != 0) {
                                if (strcmp(arg1, &D_011D63E0) != 0) {
                                    if (strcmp(arg1, &D_011D63D0) != 0) {
                                        if (strcmp(arg1, &D_011D63C8) != 0) {
                                            if (strcmp(arg1, &D_011D63B8) != 0) {
                                                if (strcmp(arg1, &D_011D6398) != 0) {
                                                    if (strcmp(arg1, &D_011D6388) != 0) {
                                                        if (strcmp(arg1, &D_011D6378) != 0) {
                                                            if (strcmp(arg1, &D_011D6368) != 0) {
                                                                if (strcmp(arg1, &D_011D6348) != 0) {
                                                                    if (strcmp(arg1, &D_011D6328) != 0) {
                                                                        if (strcmp(arg1, &D_011D6308) != 0) {
                                                                            if (strcmp(arg1, &D_011D62E8) != 0) {
                                                                                if (strcmp(arg1, &D_011D62C8) != 0) {
                                                                                    if (strcmp(arg1, &D_011D62B0) != 0) {
                                                                                        if (strcmp(arg1, &D_011D6298) != 0) {
                                                                                            if (strcmp(arg1, &D_011D6278) != 0) {
                                                                                                if (strcmp(arg1, &D_011D6258) != 0) {
                                                                                                    if (strcmp(arg1, &D_011D6238) != 0) {
                                                                                                        if (strcmp(arg1, &D_011D6218) != 0) {
                                                                                                            if (strcmp(arg1, &D_011D61F8) != 0) {
                                                                                                                if (strcmp(arg1, &D_011D61D8) != 0) {
                                                                                                                    if (strcmp(arg1, &D_011D61B8) != 0) {
                                                                                                                        if (strcmp(arg1, &D_011D6198) != 0) {
                                                                                                                            if (strcmp(arg1, &D_011D6180) != 0) {
                                                                                                                                if (strcmp(arg1, &D_011D6168) != 0) {
                                                                                                                                    if (strcmp(arg1, &D_011D6150) != 0) {
                                                                                                                                        if (strcmp(arg1, &D_011D6128) != 0) {
                                                                                                                                            if (strcmp(arg1, &D_011D6100) != 0) {
                                                                                                                                                if (strcmp(arg1, &D_011D60E8) != 0) {
                                                                                                                                                    if (strcmp(arg1, &D_011D60D0) != 0) {
                                                                                                                                                        if (strcmp(arg1, &D_011D60B8) != 0) {
                                                                                                                                                            if (strcmp(arg1, &D_011D60A0) != 0) {
                                                                                                                                                                if (strcmp(arg1, &D_011D6080) != 0) {
                                                                                                                                                                    if (strcmp(arg1, &D_011D6068) != 0) {
                                                                                                                                                                        var_2 = -1;
                                                                                                                                                                        if (strcmp(arg1, &D_011D6048) == 0) {
                                                                                                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x68);
                                                                                                                                                                            goto block_190;
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x64);
                                                                                                                                                                        goto block_190;
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x60);
                                                                                                                                                                    goto block_190;
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x5C);
                                                                                                                                                                goto block_190;
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x58);
                                                                                                                                                            goto block_190;
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x54);
                                                                                                                                                        goto block_190;
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x50);
                                                                                                                                                    goto block_190;
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x4C);
                                                                                                                                                goto block_190;
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x48);
                                                                                                                                            goto block_190;
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x44);
                                                                                                                                        goto block_190;
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x40);
                                                                                                                                    goto block_190;
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x3C);
                                                                                                                                goto block_190;
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x38);
                                                                                                                            goto block_190;
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x34);
                                                                                                                        goto block_190;
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x30);
                                                                                                                    goto block_190;
                                                                                                                }
                                                                                                            } else {
                                                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x2C);
                                                                                                                goto block_190;
                                                                                                            }
                                                                                                        } else {
                                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x28);
                                                                                                            goto block_190;
                                                                                                        }
                                                                                                    } else {
                                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x24);
                                                                                                        goto block_190;
                                                                                                    }
                                                                                                } else {
                                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x20);
                                                                                                    goto block_190;
                                                                                                }
                                                                                            } else {
                                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x1C);
                                                                                                goto block_190;
                                                                                            }
                                                                                        } else {
                                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x18);
                                                                                            goto block_190;
                                                                                        }
                                                                                    } else {
                                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x14);
                                                                                        goto block_190;
                                                                                    }
                                                                                } else {
                                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x10);
                                                                                    goto block_190;
                                                                                }
                                                                            } else {
                                                                                *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0xC);
                                                                                goto block_190;
                                                                            }
                                                                        } else {
                                                                            *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8);
                                                                            goto block_190;
                                                                        }
                                                                    } else {
                                                                        *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
                                                                        goto block_190;
                                                                    }
                                                                } else {
                                                                    *arg2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0);
                                                                    goto block_190;
                                                                }
                                                            } else {
                                                                *arg2 = M2C_FIELD(arg0, void **, 0);
                                                                goto block_190;
                                                            }
                                                        } else {
                                                            *arg2 = M2C_FIELD(arg0, void **, 0x70);
                                                            goto block_190;
                                                        }
                                                    } else {
                                                        *arg2 = M2C_FIELD(arg0, void **, 0xC);
                                                        goto block_190;
                                                    }
                                                } else {
                                                    *arg2 = M2C_FIELD(arg0, void **, 8);
                                                    goto block_190;
                                                }
                                            } else {
                                                *arg2 = M2C_FIELD(arg0, void **, 0x1C);
                                                goto block_190;
                                            }
                                        } else {
                                            *arg2 = M2C_FIELD(arg0, void **, 0x20);
                                            goto block_190;
                                        }
                                    } else {
                                        *arg2 = M2C_FIELD(arg0, void **, 4);
                                        goto block_190;
                                    }
                                } else {
                                    *arg2 = M2C_FIELD(arg0, void **, 0x44);
                                    goto block_190;
                                }
                            } else {
                                *arg2 = M2C_FIELD(arg0, void **, 0x10);
                                goto block_190;
                            }
                        } else {
                            *arg2 = M2C_FIELD(arg0, void **, 0x114);
                            goto block_190;
                        }
                    } else {
                        *arg2 = M2C_FIELD(arg0, void **, 0xD4);
                        goto block_190;
                    }
                } else {
                    *arg2 = M2C_FIELD(arg0, void **, 0xD0);
                    goto block_190;
                }
            } else {
                *arg2 = M2C_FIELD(arg0, void **, 0x74);
block_190:
                var_2 = 0;
            }
        }
        return var_2;
    }
    return -1;
}
