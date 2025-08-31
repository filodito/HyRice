const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#121314", /* black   */
  [1] = "#8F8B75", /* red     */
  [2] = "#A0997E", /* green   */
  [3] = "#A09B83", /* yellow  */
  [4] = "#B3AB8E", /* blue    */
  [5] = "#C6BB9A", /* magenta */
  [6] = "#D5C8A4", /* cyan    */
  [7] = "#c3c4c4", /* white   */

  /* 8 bright colors */
  [8]  = "#5a646f",  /* black   */
  [9]  = "#8F8B75",  /* red     */
  [10] = "#A0997E", /* green   */
  [11] = "#A09B83", /* yellow  */
  [12] = "#B3AB8E", /* blue    */
  [13] = "#C6BB9A", /* magenta */
  [14] = "#D5C8A4", /* cyan    */
  [15] = "#c3c4c4", /* white   */

  /* special colors */
  [256] = "#121314", /* background */
  [257] = "#c3c4c4", /* foreground */
  [258] = "#c3c4c4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
