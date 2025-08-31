const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#201e1e", /* black   */
  [1] = "#5F938E", /* red     */
  [2] = "#84A697", /* green   */
  [3] = "#ADB091", /* yellow  */
  [4] = "#BCBD95", /* blue    */
  [5] = "#DFD0AB", /* magenta */
  [6] = "#EADAB2", /* cyan    */
  [7] = "#c7c6c6", /* white   */

  /* 8 bright colors */
  [8]  = "#776262",  /* black   */
  [9]  = "#5F938E",  /* red     */
  [10] = "#84A697", /* green   */
  [11] = "#ADB091", /* yellow  */
  [12] = "#BCBD95", /* blue    */
  [13] = "#DFD0AB", /* magenta */
  [14] = "#EADAB2", /* cyan    */
  [15] = "#c7c6c6", /* white   */

  /* special colors */
  [256] = "#201e1e", /* background */
  [257] = "#c7c6c6", /* foreground */
  [258] = "#c7c6c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
