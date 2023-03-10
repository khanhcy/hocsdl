#pragma once

#include<iostream>
#include <SDL.h>
#include <SDL_image.h>
#include<string>
#include<vector>
#include <fstream> 
#include<sstream>


static SDL_Window* window = NULL;
static SDL_Renderer* renderer = NULL;
static SDL_Surface* surface = NULL;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

typedef struct Input {
	int left;
	int right;
	int up;
	int down;
	int jump;
};




