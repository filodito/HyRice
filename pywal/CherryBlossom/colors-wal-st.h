const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#110b07", /* black   */
  [1] = "#B6A48A", /* red     */
  [2] = "#D4B495", /* green   */
  [3] = "#D8CDAD", /* yellow  */
  [4] = "#E0CFAC", /* blue    */
  [5] = "#E7D5B6", /* magenta */
  [6] = "#E9DDC3", /* cyan    */
  [7] = "#c3c2c1", /* white   */

  /* 8 bright colors */
  [8]  = "#6a5f56",  /* black   */
  [9]  = "#B6A48A",  /* red     */
  [10] = "#D4B495", /* green   */
  [11] = "#D8CDAD", /* yellow  */
  [12] = "#E0CFAC", /* blue    */
  [13] = "#E7D5B6", /* magenta */
  [14] = "#E9DDC3", /* cyan    */
  [15] = "#c3c2c1", /* white   */

  /* special colors */
  [256] = "#110b07", /* background */
  [257] = "#c3c2c1", /* foreground */
  [258] = "#c3c2c1",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
