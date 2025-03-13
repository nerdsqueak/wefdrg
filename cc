import pygame
from pygame.locals import *
import random

pygame.init()

clock = pygame.time.Clock()
fps = 60

screen_width = 864
screen_height = 936

screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption('Flappy bird')

#define font
font = pygame.font.SysFont('Bauhaus 93', 60)

#efine color
white = (255, 255, 255)

#define game
ground_scroll = 0
scroll_speed = 4
flying = False
game_over = False
pipe_gap = 150
pipe_frequency = 1500 #milliseconds
last_pipe = pygae.time.get_ticks() - pipe_frequency
score = 0
pass_pipe = False

# load images
bg = pygame.image.load('img/ground.png')
button_img = pygame.image.load('img/restart.png')

#function for outpuuting the text on screen
def draw_text( font, text_col, x, y)
    img = font.render(text, True, text_col)
    screen.blit(img, (x, y))
