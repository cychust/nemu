def_EHelper(lui) { 
  printf("op: lui\n");
  rtl_li(s, ddest, id_src1->imm); }

def_EHelper(ai) {
  printf("op: ai. dest = %u src1 = %u imm = %d\n", *ddest, *dsrc1, id_src2->imm);
  rtl_addi(s, ddest, dsrc1, id_src2->imm);
}

def_EHelper(auipc) { 
  printf("op: auipc: ddest = %u, imm = %d\n", *ddest, id_src1->imm);
  rtl_auipc(s, ddest, id_src1->imm); }
