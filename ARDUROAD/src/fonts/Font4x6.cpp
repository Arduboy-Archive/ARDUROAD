#include <Arduino.h>
#include <Sprites.h>
#include <Print.h>
#include "Font4x6.h"
#include "Fonts.h"

#define FONT4x6_WIDTH 4
#define FONT4x6_WIDTH_NARROW 3
#define FONT4x6_HEIGHT 7

#define CHAR_EXCLAMATION 33
#define CHAR_MINUS 45
#define CHAR_PERIOD 46
#define CHAR_QUESTION_MARK 63
#define CHAR_LETTER_A 65
#define CHAR_LETTER_Z 90
#define CHAR_LETTER_A_LOWER 97
#define CHAR_LETTER_Z_LOWER 122
#define CHAR_NUMBER_0 48
#define CHAR_NUMBER_9 57

#define FONT_EXCLAMATION_INDEX 62
#define FONT_PERIOD_INDEX 63
#define FONT_QUESTION_INDEX 64
#define FONT_MINUS_INDEX 65
#define FONT_NUMBER_INDEX 52




Font4x6::Font4x6(uint8_t lineSpacing) {

  _lineHeight = lineSpacing;
  _letterSpacing = 1;

  _cursorX = _cursorY = _baseX = 0;
  _textColor = 1;

}

size_t Font4x6::write(uint8_t c) {

  if (c == '\n')      { _cursorX = _baseX; _cursorY += _lineHeight; }
  else if (c == '~')  { _cursorX += FONT4x6_WIDTH_NARROW; }
  else {

    printChar(c, _cursorX, _cursorY);
    _cursorX += FONT4x6_WIDTH + _letterSpacing;

  }

  return 1;

}

void Font4x6::printChar(const char c, const int8_t x, int8_t y) {

  int8_t idx = -1;

  ++y;
  switch (c) {
    
    case CHAR_LETTER_A ... CHAR_LETTER_Z:
      idx = c - CHAR_LETTER_A;
      break;

    case CHAR_LETTER_A_LOWER ... CHAR_LETTER_Z_LOWER:
      idx = c - CHAR_LETTER_A_LOWER + 26;
      break;

    case CHAR_NUMBER_0 ... CHAR_NUMBER_9:
      idx = c - CHAR_NUMBER_0 + FONT_NUMBER_INDEX;
      break;
      
    case CHAR_EXCLAMATION:
      idx = FONT_EXCLAMATION_INDEX;
      break;
      
    case CHAR_PERIOD:
      idx = FONT_PERIOD_INDEX;
      break;
      
    case CHAR_QUESTION_MARK:
      idx = FONT_QUESTION_INDEX;
      break;
      
    case CHAR_MINUS:
      idx = FONT_MINUS_INDEX;
      break;

  }

  if (idx > -1) {
    
    if (_textColor == WHITE) {
      Sprites::drawSelfMasked(x, y, font_images, idx);
    }
    else {
      Sprites::drawErase(x, y, font_images, idx);
    }

  }

}

void Font4x6::setCursor(const int8_t x, const int8_t y) {
  _cursorX = _baseX = x;
  _cursorY = y;
}

void Font4x6::setTextColor(const uint8_t color){
  _textColor = color;
}

void Font4x6::setHeight(const uint8_t color){
  _lineHeight = color;
}
