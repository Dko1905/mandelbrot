#pragma once

#include <stdio.h>

void print_license(){
	printf("Copyright (c) 2020, Daniel Florescu \nAll rights reserved. \n\nRedistribution and use in source and binary forms, with or without \nmodification, are permitted provided that the following conditions are met: \n\n * Redistributions of source code must retain the above copyright notice, \n   this list of conditions and the following disclaimer. \n * Redistributions in binary form must reproduce the above copyright \n   notice, this list of conditions and the following disclaimer in the \n   documentation and/or other materials provided with the distribution. \n\nTHIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS\'\' AND ANY \nEXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED \nWARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE \nDISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE FOR ANY \nDIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES \n(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR \nSERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER \nCAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT \nLIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY \nOUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH \nDAMAGE. \n");
}

void print_usage(){
	printf("Usage:\n");
	printf("./mandelbrot <option> <args>\n");
	printf("options:\n");
	printf("gpng <filename> <WIDTHxHEIGHT> <x_offset> <y_offset> <scale (400 for HD)> <iterations> <color mode 0-1>\n");
	printf("gterm <WIDTHxHEIGHT> <x_offset> <y_offset> <scale (400 for HD)> <iterations>\n");
}