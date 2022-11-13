def_EHelper(lw) {
  printf("op: lw\n");
  rtl_lm(s, ddest, dsrc1, id_src2->imm, 4);
}

def_EHelper(sw) {
  printf("op: sw\n");
  rtl_sm(s, ddest, dsrc1, id_src2->imm, 4);
}