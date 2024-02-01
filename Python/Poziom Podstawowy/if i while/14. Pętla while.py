def printer_ctrl():
    x = pc_leftover()
    while x > 5:
        pc_cut()
        pc_position() 
        pc_print()
        x = pc_leftover()
    
    pc_pause()
