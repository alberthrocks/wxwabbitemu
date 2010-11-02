#ifndef GUILCD_WX_H
#define GUILCD_WX_H

#include <wx/image.h>
#include <wx/frame.h>
#include <wx/wx.h>
#include <wx/palette.h>
#include "lcd.h"

void SaveStateDialog(int slot);
#define MAX_SHADES 255
class MyLCD: public wxWindow
{
public:
    MyLCD();
	wxWindow *frameLCD;
	void OnPaint(wxPaintEvent& event);
	void PaintNow();
protected:
	
private:
	void PaintLCD(wxWindow *, wxPaintDC *);
};

#endif