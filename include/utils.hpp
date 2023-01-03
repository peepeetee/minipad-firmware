#include <Arduino.h>

class Utils
{
public:
  static char *getArgumentAt(char *input, char delimiter, uint8_t index);
  static void toLower(char *input);

private:
  static char *substring(char *input, int offset, int length);
};