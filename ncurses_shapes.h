#include <ncurses.h>
class Shape {
	private:
		int width, height, radius;
	public:	
		void draw_rect(int y, int x, int height, int width);
		void draw_rect(int y, int x);
		void draw_circle();
		void draw_line();
		void draw_triangle();
		void set_height(int h);
		void set_width(int w);
		int get_height();
		int get_width();
};

void Shape::set_height(int h){
	height = h;
}
void Shape::set_width(int w){
	width = w;
}

int Shape::get_height(){
	return height;
}
int Shape::get_width(){
	return width;
}


void Shape::draw_rect(int y, int x, int h, int w){
	for(int i = 0; i < w; i++){ 
                mvprintw( y, x + i, "-" );       
               	mvprintw( y + h, x + i, "-" );              
       	} 
       	for(int i = 1; i < h; i++){ 
		mvprintw(y + i, x, "|"); 
		mvprintw(y + i, x + w - 1, "|"); 
       	} 
}

void Shape::draw_rect(int y, int x){
	
	
	for(int i = 0; i < width; i++){ 
                mvprintw( y, x + i, "-" );       
               	mvprintw( y + height, x + i, "-" );              
       	} 
       	for(int i = 1; i < height; i++){ 
		mvprintw(y + i, x, "|"); 
		mvprintw(y + i, x + width - 1, "|"); 
       	} 
	
		
}
