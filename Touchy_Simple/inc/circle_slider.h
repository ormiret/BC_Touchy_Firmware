/////////////////////////////////////////////////////////////////////////////
// circle_slider.h
/////////////////////////////////////////////////////////////////////////////

#ifndef CIRCLE_SLIDER_H_
#define CIRCLE_SLIDER_H_

/////////////////////////////////////////////////////////////////////////////
// Defines
/////////////////////////////////////////////////////////////////////////////

#define MAIN_FRAME_RATE 50
#define MIN_SUM_TOUCH   30

/////////////////////////////////////////////////////////////////////////////
// Macros
/////////////////////////////////////////////////////////////////////////////

// Return true if object a intersects object b (overlaps by at least 1 px)
#define OBJ_OVERLAPS_OBJ(a, a_len, b, b_len)    (a + a_len > b && a < b + b_len)

// Return true if line a intersects object b
#define LINE_OVERLAPS_OBJ(a, b, b_len)          OBJ_OVERLAPS_OBJ(a, 1, b, b_len)

/////////////////////////////////////////////////////////////////////////////
// Prototypes
/////////////////////////////////////////////////////////////////////////////

void circle_slider_main();

#endif /* CIRCLE_SLIDER_H_ */
