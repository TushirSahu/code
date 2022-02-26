import pygame,sys
import numpy as np
pygame.init()

WIDTH,HEIGHT=600,600
RED=(255,0,0)
BG_COLOR=(28,170,156)
LINE_COLOR=(23,145,135)
LINE_WIDTH=12
BORDER_ROWS=3
BORDER_COL=3

screen=pygame.display.set_mode((WIDTH,HEIGHT))
pygame.display.set_caption("TIC TAC TOE")
screen.fill(BG_COLOR)


pygame.draw.line(screen,RED,(10,10),(600,600),10)

board=np.zeros((BORDER_ROWS,BORDER_COL))
def draw_lines():
    pygame.draw.line(screen,LINE_COLOR,(0,200),(600,200),LINE_WIDTH)
    pygame.draw.line(screen,LINE_COLOR,(0,400),(600,400),LINE_WIDTH)
    pygame.draw.line(screen,LINE_COLOR,(200,0),(200,600),LINE_WIDTH)
    pygame.draw.line(screen,LINE_COLOR,(400,0),(400,600),LINE_WIDTH)





while True:
    draw_lines()
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            sys.exit()
    pygame.display.update()