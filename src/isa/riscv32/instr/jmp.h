def_EHelper(jal) {
  printf("op: jal. ddest = %u simm = %d\n", *ddest, id_src1->simm);
  rtl_jal(s, ddest, id_src1->simm);
}