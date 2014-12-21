#include <iostream>

int main()
{
  std::cout << "Hello world" << std::endl;

  //  Traditional Chinese
  //  U+4f60  Han Character 'you, second person pronoun'
  //  U+597D  Han Character 'good, excellent, fine; well'
  //  U+4E16  Han Character 'generation; world; era'
  //  U+754C  Han Character 'boundary, limit; domain; society; the world'
  //
  //  Output as UTF-8:
  std::cout << "\xE4\xBD\xA0" "\xE5\xA5\xBD" "\xE4\xB8\x96" "\xE7\x95\x8C" << std::endl;

  //  Test cases above the BMP
  //  U+1F60A SMILING FACE WITH SMILING EYES
  //  U+1F60E SMILING FACE WITH SUNGLASSES
  //
  //  Output as UTF-8
  std::cout << "\xF0\x9F\x98\x8A" "\xF0\x9F\x98\x8E" << std::endl;
}


