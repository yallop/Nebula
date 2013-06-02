#pragma once

namespace sim {

const std::array<std::pair<Word, Word>, 128> MONITOR_DEFAULT_FONT {{
        // NULL
        { 0, 0 },

        // SOH
        { B_( 00000001
              00000000 ),
          0 },

        // STX
        { B_( 00000011
              00000000 ),
          0 },

        // ETX
        { B_( 00000111
              00000000 ),
          0 },

        // EOT
        { B_( 00001111
              00000000 ),
          0 },

        // ENQ
        { B_( 00011111
              00000000 ),
          0 },

        // ACK
        { B_( 00111111
              00000000 ),
          0 },

        // BEL
        { B_( 01111111
              00000000 ),
          0 },

        // BS
        { B_( 11111111
              00000000 ),
          0 },

        // TAB
        { B_( 11111111
              00000001 ),
          0 },

        // LF
        { B_( 11111111
              00000011 ),
          0 },

        // VT
        { B_( 11111111
              00000111 ),
          0 },

        // FF
        { B_( 11111111
              00001111 ),
          0 },

        // CR
        { B_( 11111111
              00011111 ),
          0 },

        // SO
        { B_( 11111111
              00111111 ),
          0 },

        // SI
        { B_( 11111111
              01111111 ),
          0 },

        // DLE
        { 0xffff, 0 },

        // DC1
        { 0xffff,
          B_( 00000001
              00000000 ) },

        // DC2
        { 0xffff,
          B_( 00000011
              00000000 ) },

        // DC3
        { 0xffff,
          B_( 00000111
              00000000 ) },

        // DC4
        { 0xffff,
          B_( 00001111
              00000000 ) },

        // NAK
        { 0xffff,
          B_( 00011111
              00000000 ) },

        // SYN
        { 0xffff,
          B_( 00111111
              00000000 ) },

        // ETB
        { 0xffff,
          B_( 01111111
              00000000 ) },

        // CAN
        { 0xffff,
          B_( 11111111
              00000000 ) },

        // EM
        { 0xffff,
          B_( 11111111
              00000001 ) },

        // SUB
        { 0xffff,
          B_( 11111111
              00000011 ) },

        // ESC
        { 0xffff,
          B_( 11111111
              00000111 ) },

        // FS
        { 0xffff,
          B_( 11111111
              00001111 ) },

        // GS
        { 0xffff,
          B_( 11111111
              00011111 ) },

        // RS
        { 0xffff,
          B_( 11111111
              00111111 ) },

        // US
        { 0xffff,
          B_( 11111111
              01111111 ) },

        // Space
        { 0, 0 },

        // !
        { B_( 00000000
              10111111 ),
          B_( 00000000
              00000000 ) },

        // "
        { B_( 00000011
              00000000 ),
          B_( 00000011
              00000000 ) },

        // #
        { B_( 00111110
              00010100 ),
          B_( 00111110
              00000000 ) },

        // $
        { B_( 01001100
              11010110 ),
          B_( 01100100
              00000000 ) },

        // %
        { B_( 11000010
              00111000 ),
          B_( 10000110
              00000000 ) },

        // &
        { B_( 01101100
              01010010 ),
          B_( 11101100
              10100000 ) },

        // '
        { B_( 00000000
              00000010 ),
          B_( 00000001
              00000000 ) },

        // (
        { B_( 00111100
              01000010 ),
          B_( 10000001
              00000000 ) },

        // )
        { B_( 10000001
              01000010 ),
          B_( 00111100
              00000000 ) },

        // *
        { B_( 00001010
              00000100 ),
          B_( 00001010
              00000000 ) },

        // +
        { B_( 00001000
              00011100 ),
          B_( 00001000
              00000000 ) },

        // ,
        { B_( 00000000
              10000000 ),
          B_( 01000000
              00000000 ) },

        // -
        { B_( 00001000
              00001000 ),
          B_( 00001000
              00000000 ) },

        // .
        { B_( 00000000
              10000000 ),
          B_( 00000000
              00000000 ) },

        // /
        { B_( 11000000
              00111000 ),
          B_( 00000110
              00000000 ) },

        // 0
        { B_( 01111100
              10010010 ),
          B_( 01111100
              00000000 ) },

        // 1
        { B_( 10000010
              11111110 ),
          B_( 10000000
              00000000 ) },

        // 2
        { B_( 11000100
              10100010 ),
          B_( 10011100
              00000000 ) },

        // 3
        { B_( 10000010
              10010010 ),
          B_( 01101100
              00000000 ) },

        // 4
        { B_( 00011110
              00010000 ),
          B_( 11111110
              00000000 ) },

        // 5
        { B_( 10011110
              10010010 ),
          B_( 01100010
              00000000 ) },

        // 6
        { B_( 01111100
              10010010 ),
          B_( 01100100
              00000000 ) },

        // 7
        { B_( 11000010
              00110010 ),
          B_( 00001110
              00000000 ) },

        // 8
        { B_( 01101100
              10010010 ),
          B_( 01101100
              00000000 ) },

        // 9
        { B_( 01001100
              10010010 ),
          B_( 01111100
              00000000 ) },

        // :
        { B_( 00000000
              01001000 ),
          B_( 00000000
              00000000 ) },

        // ;
        { B_( 00000000
              10000000 ),
          B_( 01001000
              00000000 ) },

        // <
        { B_( 00010000
              00101000 ),
          B_( 01000100
              00000000 ) },

        // =
        { B_( 00100100
              00100100 ),
          B_( 00100100
              00000000 ) },

        // >
        { B_( 01000100
              00101000 ),
          B_( 00010000
              00000000 ) },

        // ?
        { B_( 00000010
              10110001 ),
          B_( 00001110
              00000000 ) },

        // @
        { B_( 01111100
              10110010 ),
          B_( 10111100
              00000000 ) },

        // A
        { B_( 11111100
              00010010 ),
          B_( 11111100
              00000000 ) },

        // B
        { B_( 11111110
              10010010 ),
          B_( 01101100
              00000000 ) },

        // C
        { B_( 01111100
              10000010 ),
          B_( 01000100
              00000000 ) },
} };


}