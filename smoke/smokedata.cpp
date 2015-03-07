#include <qcustomplot.h>

#include <smoke.h>
#include <qcustomplot_smoke.h>

namespace __smokeqcustomplot {

static void *cast(void *xptr, Smoke::Index from, Smoke::Index to) {
  switch(from) {
    case 1:   //QActionEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QActionEvent*)xptr;
        case 1: return (void*)(QActionEvent*)xptr;
        default: return xptr;
      }
    case 2:   //QBool
      switch(to) {
        case 2: return (void*)(QBool*)xptr;
        default: return xptr;
      }
    case 3:   //QBrush
      switch(to) {
        case 3: return (void*)(QBrush*)xptr;
        default: return xptr;
      }
    case 4:   //QCPAbstractItem
      switch(to) {
        case 37: return (void*)(QCPLayerable*)(QCPAbstractItem*)xptr;
        case 75: return (void*)(QObject*)(QCPAbstractItem*)xptr;
        case 4: return (void*)(QCPAbstractItem*)xptr;
        case 27: return (void*)(QCPItemCurve*)(QCPAbstractItem*)xptr;
        case 28: return (void*)(QCPItemEllipse*)(QCPAbstractItem*)xptr;
        case 33: return (void*)(QCPItemStraightLine*)(QCPAbstractItem*)xptr;
        case 32: return (void*)(QCPItemRect*)(QCPAbstractItem*)xptr;
        case 30: return (void*)(QCPItemPixmap*)(QCPAbstractItem*)xptr;
        case 35: return (void*)(QCPItemTracer*)(QCPAbstractItem*)xptr;
        case 29: return (void*)(QCPItemLine*)(QCPAbstractItem*)xptr;
        case 26: return (void*)(QCPItemBracket*)(QCPAbstractItem*)xptr;
        case 34: return (void*)(QCPItemText*)(QCPAbstractItem*)xptr;
        default: return xptr;
      }
    case 5:   //QCPAbstractLegendItem
      switch(to) {
        case 39: return (void*)(QCPLayoutElement*)(QCPAbstractLegendItem*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPAbstractLegendItem*)xptr;
        case 75: return (void*)(QObject*)(QCPAbstractLegendItem*)xptr;
        case 5: return (void*)(QCPAbstractLegendItem*)xptr;
        case 47: return (void*)(QCPPlottableLegendItem*)(QCPAbstractLegendItem*)xptr;
        default: return xptr;
      }
    case 6:   //QCPAbstractPlottable
      switch(to) {
        case 37: return (void*)(QCPLayerable*)(QCPAbstractPlottable*)xptr;
        case 75: return (void*)(QObject*)(QCPAbstractPlottable*)xptr;
        case 6: return (void*)(QCPAbstractPlottable*)xptr;
        case 50: return (void*)(QCPStatisticalBox*)(QCPAbstractPlottable*)xptr;
        case 23: return (void*)(QCPGraph*)(QCPAbstractPlottable*)xptr;
        case 21: return (void*)(QCPFinancial*)(QCPAbstractPlottable*)xptr;
        case 11: return (void*)(QCPBars*)(QCPAbstractPlottable*)xptr;
        case 14: return (void*)(QCPColorMap*)(QCPAbstractPlottable*)xptr;
        case 18: return (void*)(QCPCurve*)(QCPAbstractPlottable*)xptr;
        default: return xptr;
      }
    case 7:   //QCPAxis
      switch(to) {
        case 37: return (void*)(QCPLayerable*)(QCPAxis*)xptr;
        case 75: return (void*)(QObject*)(QCPAxis*)xptr;
        case 7: return (void*)(QCPAxis*)xptr;
        default: return xptr;
      }
    case 8:   //QCPAxisPainterPrivate
      switch(to) {
        case 8: return (void*)(QCPAxisPainterPrivate*)xptr;
        default: return xptr;
      }
    case 9:   //QCPAxisRect
      switch(to) {
        case 39: return (void*)(QCPLayoutElement*)(QCPAxisRect*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPAxisRect*)xptr;
        case 75: return (void*)(QObject*)(QCPAxisRect*)xptr;
        case 9: return (void*)(QCPAxisRect*)xptr;
        default: return xptr;
      }
    case 10:   //QCPBarData
      switch(to) {
        case 10: return (void*)(QCPBarData*)xptr;
        default: return xptr;
      }
    case 11:   //QCPBars
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPBars*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPBars*)xptr;
        case 75: return (void*)(QObject*)(QCPBars*)xptr;
        case 11: return (void*)(QCPBars*)xptr;
        default: return xptr;
      }
    case 12:   //QCPBarsGroup
      switch(to) {
        case 75: return (void*)(QObject*)(QCPBarsGroup*)xptr;
        case 12: return (void*)(QCPBarsGroup*)xptr;
        default: return xptr;
      }
    case 13:   //QCPColorGradient
      switch(to) {
        case 13: return (void*)(QCPColorGradient*)xptr;
        default: return xptr;
      }
    case 14:   //QCPColorMap
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPColorMap*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPColorMap*)xptr;
        case 75: return (void*)(QObject*)(QCPColorMap*)xptr;
        case 14: return (void*)(QCPColorMap*)xptr;
        default: return xptr;
      }
    case 15:   //QCPColorMapData
      switch(to) {
        case 15: return (void*)(QCPColorMapData*)xptr;
        default: return xptr;
      }
    case 16:   //QCPColorScale
      switch(to) {
        case 39: return (void*)(QCPLayoutElement*)(QCPColorScale*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPColorScale*)xptr;
        case 75: return (void*)(QObject*)(QCPColorScale*)xptr;
        case 16: return (void*)(QCPColorScale*)xptr;
        default: return xptr;
      }
    case 17:   //QCPColorScaleAxisRectPrivate
      switch(to) {
        case 9: return (void*)(QCPAxisRect*)(QCPColorScaleAxisRectPrivate*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPColorScaleAxisRectPrivate*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPColorScaleAxisRectPrivate*)xptr;
        case 75: return (void*)(QObject*)(QCPColorScaleAxisRectPrivate*)xptr;
        case 17: return (void*)(QCPColorScaleAxisRectPrivate*)xptr;
        default: return xptr;
      }
    case 18:   //QCPCurve
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPCurve*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPCurve*)xptr;
        case 75: return (void*)(QObject*)(QCPCurve*)xptr;
        case 18: return (void*)(QCPCurve*)xptr;
        default: return xptr;
      }
    case 19:   //QCPCurveData
      switch(to) {
        case 19: return (void*)(QCPCurveData*)xptr;
        default: return xptr;
      }
    case 20:   //QCPData
      switch(to) {
        case 20: return (void*)(QCPData*)xptr;
        default: return xptr;
      }
    case 21:   //QCPFinancial
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPFinancial*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPFinancial*)xptr;
        case 75: return (void*)(QObject*)(QCPFinancial*)xptr;
        case 21: return (void*)(QCPFinancial*)xptr;
        default: return xptr;
      }
    case 22:   //QCPFinancialData
      switch(to) {
        case 22: return (void*)(QCPFinancialData*)xptr;
        default: return xptr;
      }
    case 23:   //QCPGraph
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPGraph*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPGraph*)xptr;
        case 75: return (void*)(QObject*)(QCPGraph*)xptr;
        case 23: return (void*)(QCPGraph*)xptr;
        default: return xptr;
      }
    case 24:   //QCPGrid
      switch(to) {
        case 37: return (void*)(QCPLayerable*)(QCPGrid*)xptr;
        case 75: return (void*)(QObject*)(QCPGrid*)xptr;
        case 24: return (void*)(QCPGrid*)xptr;
        default: return xptr;
      }
    case 25:   //QCPItemAnchor
      switch(to) {
        case 25: return (void*)(QCPItemAnchor*)xptr;
        case 31: return (void*)(QCPItemPosition*)(QCPItemAnchor*)xptr;
        default: return xptr;
      }
    case 26:   //QCPItemBracket
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemBracket*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemBracket*)xptr;
        case 75: return (void*)(QObject*)(QCPItemBracket*)xptr;
        case 26: return (void*)(QCPItemBracket*)xptr;
        default: return xptr;
      }
    case 27:   //QCPItemCurve
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemCurve*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemCurve*)xptr;
        case 75: return (void*)(QObject*)(QCPItemCurve*)xptr;
        case 27: return (void*)(QCPItemCurve*)xptr;
        default: return xptr;
      }
    case 28:   //QCPItemEllipse
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemEllipse*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemEllipse*)xptr;
        case 75: return (void*)(QObject*)(QCPItemEllipse*)xptr;
        case 28: return (void*)(QCPItemEllipse*)xptr;
        default: return xptr;
      }
    case 29:   //QCPItemLine
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemLine*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemLine*)xptr;
        case 75: return (void*)(QObject*)(QCPItemLine*)xptr;
        case 29: return (void*)(QCPItemLine*)xptr;
        default: return xptr;
      }
    case 30:   //QCPItemPixmap
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemPixmap*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemPixmap*)xptr;
        case 75: return (void*)(QObject*)(QCPItemPixmap*)xptr;
        case 30: return (void*)(QCPItemPixmap*)xptr;
        default: return xptr;
      }
    case 31:   //QCPItemPosition
      switch(to) {
        case 25: return (void*)(QCPItemAnchor*)(QCPItemPosition*)xptr;
        case 31: return (void*)(QCPItemPosition*)xptr;
        default: return xptr;
      }
    case 32:   //QCPItemRect
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemRect*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemRect*)xptr;
        case 75: return (void*)(QObject*)(QCPItemRect*)xptr;
        case 32: return (void*)(QCPItemRect*)xptr;
        default: return xptr;
      }
    case 33:   //QCPItemStraightLine
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemStraightLine*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemStraightLine*)xptr;
        case 75: return (void*)(QObject*)(QCPItemStraightLine*)xptr;
        case 33: return (void*)(QCPItemStraightLine*)xptr;
        default: return xptr;
      }
    case 34:   //QCPItemText
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemText*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemText*)xptr;
        case 75: return (void*)(QObject*)(QCPItemText*)xptr;
        case 34: return (void*)(QCPItemText*)xptr;
        default: return xptr;
      }
    case 35:   //QCPItemTracer
      switch(to) {
        case 4: return (void*)(QCPAbstractItem*)(QCPItemTracer*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPItemTracer*)xptr;
        case 75: return (void*)(QObject*)(QCPItemTracer*)xptr;
        case 35: return (void*)(QCPItemTracer*)xptr;
        default: return xptr;
      }
    case 36:   //QCPLayer
      switch(to) {
        case 75: return (void*)(QObject*)(QCPLayer*)xptr;
        case 36: return (void*)(QCPLayer*)xptr;
        default: return xptr;
      }
    case 37:   //QCPLayerable
      switch(to) {
        case 75: return (void*)(QObject*)(QCPLayerable*)xptr;
        case 37: return (void*)(QCPLayerable*)xptr;
        case 50: return (void*)(QCPStatisticalBox*)(QCPLayerable*)xptr;
        case 9: return (void*)(QCPAxisRect*)(QCPLayerable*)xptr;
        case 24: return (void*)(QCPGrid*)(QCPLayerable*)xptr;
        case 6: return (void*)(QCPAbstractPlottable*)(QCPLayerable*)xptr;
        case 38: return (void*)(QCPLayout*)(QCPLayerable*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPLayerable*)xptr;
        case 16: return (void*)(QCPColorScale*)(QCPLayerable*)xptr;
        case 42: return (void*)(QCPLegend*)(QCPLayerable*)xptr;
        case 27: return (void*)(QCPItemCurve*)(QCPLayerable*)xptr;
        case 41: return (void*)(QCPLayoutInset*)(QCPLayerable*)xptr;
        case 23: return (void*)(QCPGraph*)(QCPLayerable*)xptr;
        case 28: return (void*)(QCPItemEllipse*)(QCPLayerable*)xptr;
        case 33: return (void*)(QCPItemStraightLine*)(QCPLayerable*)xptr;
        case 7: return (void*)(QCPAxis*)(QCPLayerable*)xptr;
        case 21: return (void*)(QCPFinancial*)(QCPLayerable*)xptr;
        case 46: return (void*)(QCPPlotTitle*)(QCPLayerable*)xptr;
        case 32: return (void*)(QCPItemRect*)(QCPLayerable*)xptr;
        case 5: return (void*)(QCPAbstractLegendItem*)(QCPLayerable*)xptr;
        case 30: return (void*)(QCPItemPixmap*)(QCPLayerable*)xptr;
        case 35: return (void*)(QCPItemTracer*)(QCPLayerable*)xptr;
        case 11: return (void*)(QCPBars*)(QCPLayerable*)xptr;
        case 29: return (void*)(QCPItemLine*)(QCPLayerable*)xptr;
        case 4: return (void*)(QCPAbstractItem*)(QCPLayerable*)xptr;
        case 26: return (void*)(QCPItemBracket*)(QCPLayerable*)xptr;
        case 47: return (void*)(QCPPlottableLegendItem*)(QCPLayerable*)xptr;
        case 14: return (void*)(QCPColorMap*)(QCPLayerable*)xptr;
        case 34: return (void*)(QCPItemText*)(QCPLayerable*)xptr;
        case 40: return (void*)(QCPLayoutGrid*)(QCPLayerable*)xptr;
        case 18: return (void*)(QCPCurve*)(QCPLayerable*)xptr;
        default: return xptr;
      }
    case 38:   //QCPLayout
      switch(to) {
        case 39: return (void*)(QCPLayoutElement*)(QCPLayout*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPLayout*)xptr;
        case 75: return (void*)(QObject*)(QCPLayout*)xptr;
        case 38: return (void*)(QCPLayout*)xptr;
        case 42: return (void*)(QCPLegend*)(QCPLayout*)xptr;
        case 41: return (void*)(QCPLayoutInset*)(QCPLayout*)xptr;
        case 40: return (void*)(QCPLayoutGrid*)(QCPLayout*)xptr;
        default: return xptr;
      }
    case 39:   //QCPLayoutElement
      switch(to) {
        case 37: return (void*)(QCPLayerable*)(QCPLayoutElement*)xptr;
        case 75: return (void*)(QObject*)(QCPLayoutElement*)xptr;
        case 39: return (void*)(QCPLayoutElement*)xptr;
        case 9: return (void*)(QCPAxisRect*)(QCPLayoutElement*)xptr;
        case 38: return (void*)(QCPLayout*)(QCPLayoutElement*)xptr;
        case 16: return (void*)(QCPColorScale*)(QCPLayoutElement*)xptr;
        case 42: return (void*)(QCPLegend*)(QCPLayoutElement*)xptr;
        case 41: return (void*)(QCPLayoutInset*)(QCPLayoutElement*)xptr;
        case 46: return (void*)(QCPPlotTitle*)(QCPLayoutElement*)xptr;
        case 5: return (void*)(QCPAbstractLegendItem*)(QCPLayoutElement*)xptr;
        case 47: return (void*)(QCPPlottableLegendItem*)(QCPLayoutElement*)xptr;
        case 40: return (void*)(QCPLayoutGrid*)(QCPLayoutElement*)xptr;
        default: return xptr;
      }
    case 40:   //QCPLayoutGrid
      switch(to) {
        case 38: return (void*)(QCPLayout*)(QCPLayoutGrid*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPLayoutGrid*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPLayoutGrid*)xptr;
        case 75: return (void*)(QObject*)(QCPLayoutGrid*)xptr;
        case 40: return (void*)(QCPLayoutGrid*)xptr;
        case 42: return (void*)(QCPLegend*)(QCPLayoutGrid*)xptr;
        default: return xptr;
      }
    case 41:   //QCPLayoutInset
      switch(to) {
        case 38: return (void*)(QCPLayout*)(QCPLayoutInset*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPLayoutInset*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPLayoutInset*)xptr;
        case 75: return (void*)(QObject*)(QCPLayoutInset*)xptr;
        case 41: return (void*)(QCPLayoutInset*)xptr;
        default: return xptr;
      }
    case 42:   //QCPLegend
      switch(to) {
        case 40: return (void*)(QCPLayoutGrid*)(QCPLegend*)xptr;
        case 38: return (void*)(QCPLayout*)(QCPLegend*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPLegend*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPLegend*)xptr;
        case 75: return (void*)(QObject*)(QCPLegend*)xptr;
        case 42: return (void*)(QCPLegend*)xptr;
        default: return xptr;
      }
    case 43:   //QCPLineEnding
      switch(to) {
        case 43: return (void*)(QCPLineEnding*)xptr;
        default: return xptr;
      }
    case 44:   //QCPMarginGroup
      switch(to) {
        case 75: return (void*)(QObject*)(QCPMarginGroup*)xptr;
        case 44: return (void*)(QCPMarginGroup*)xptr;
        default: return xptr;
      }
    case 45:   //QCPPainter
      switch(to) {
        case 79: return (void*)(QPainter*)(QCPPainter*)xptr;
        case 45: return (void*)(QCPPainter*)xptr;
        default: return xptr;
      }
    case 46:   //QCPPlotTitle
      switch(to) {
        case 39: return (void*)(QCPLayoutElement*)(QCPPlotTitle*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPPlotTitle*)xptr;
        case 75: return (void*)(QObject*)(QCPPlotTitle*)xptr;
        case 46: return (void*)(QCPPlotTitle*)xptr;
        default: return xptr;
      }
    case 47:   //QCPPlottableLegendItem
      switch(to) {
        case 5: return (void*)(QCPAbstractLegendItem*)(QCPPlottableLegendItem*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QCPPlottableLegendItem*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPPlottableLegendItem*)xptr;
        case 75: return (void*)(QObject*)(QCPPlottableLegendItem*)xptr;
        case 47: return (void*)(QCPPlottableLegendItem*)xptr;
        default: return xptr;
      }
    case 48:   //QCPRange
      switch(to) {
        case 48: return (void*)(QCPRange*)xptr;
        default: return xptr;
      }
    case 49:   //QCPScatterStyle
      switch(to) {
        case 49: return (void*)(QCPScatterStyle*)xptr;
        default: return xptr;
      }
    case 50:   //QCPStatisticalBox
      switch(to) {
        case 6: return (void*)(QCPAbstractPlottable*)(QCPStatisticalBox*)xptr;
        case 37: return (void*)(QCPLayerable*)(QCPStatisticalBox*)xptr;
        case 75: return (void*)(QObject*)(QCPStatisticalBox*)xptr;
        case 50: return (void*)(QCPStatisticalBox*)xptr;
        default: return xptr;
      }
    case 51:   //QChildEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QChildEvent*)xptr;
        case 51: return (void*)(QChildEvent*)xptr;
        default: return xptr;
      }
    case 52:   //QCloseEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QCloseEvent*)xptr;
        case 52: return (void*)(QCloseEvent*)xptr;
        default: return xptr;
      }
    case 53:   //QColor
      switch(to) {
        case 53: return (void*)(QColor*)xptr;
        default: return xptr;
      }
    case 54:   //QContextMenuEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QContextMenuEvent*)xptr;
        case 54: return (void*)(QContextMenuEvent*)xptr;
        default: return xptr;
      }
    case 55:   //QCustomPlot
      switch(to) {
        case 100: return (void*)(QWidget*)(QCustomPlot*)xptr;
        case 75: return (void*)(QObject*)(QCustomPlot*)xptr;
        case 76: return (void*)(QPaintDevice*)(QCustomPlot*)xptr;
        case 55: return (void*)(QCustomPlot*)xptr;
        default: return xptr;
      }
    case 56:   //QDragEnterEvent
      switch(to) {
        case 58: return (void*)(QDragMoveEvent*)(QDragEnterEvent*)xptr;
        case 59: return (void*)(QDropEvent*)(QDragEnterEvent*)xptr;
        case 60: return (void*)(QEvent*)(QDragEnterEvent*)xptr;
        case 56: return (void*)(QDragEnterEvent*)xptr;
        default: return xptr;
      }
    case 57:   //QDragLeaveEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QDragLeaveEvent*)xptr;
        case 57: return (void*)(QDragLeaveEvent*)xptr;
        default: return xptr;
      }
    case 58:   //QDragMoveEvent
      switch(to) {
        case 59: return (void*)(QDropEvent*)(QDragMoveEvent*)xptr;
        case 60: return (void*)(QEvent*)(QDragMoveEvent*)xptr;
        case 58: return (void*)(QDragMoveEvent*)xptr;
        default: return xptr;
      }
    case 59:   //QDropEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QDropEvent*)xptr;
        case 59: return (void*)(QDropEvent*)xptr;
        default: return xptr;
      }
    case 60:   //QEvent
      switch(to) {
        case 60: return (void*)(QEvent*)xptr;
        default: return xptr;
      }
    case 61:   //QFocusEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QFocusEvent*)xptr;
        case 61: return (void*)(QFocusEvent*)xptr;
        default: return xptr;
      }
    case 62:   //QFont
      switch(to) {
        case 62: return (void*)(QFont*)xptr;
        default: return xptr;
      }
    case 64:   //QHideEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QHideEvent*)xptr;
        case 64: return (void*)(QHideEvent*)xptr;
        default: return xptr;
      }
    case 65:   //QImage
      switch(to) {
        case 76: return (void*)(QPaintDevice*)(QImage*)xptr;
        case 65: return (void*)(QImage*)xptr;
        default: return xptr;
      }
    case 66:   //QIncompatibleFlag
      switch(to) {
        case 66: return (void*)(QIncompatibleFlag*)xptr;
        default: return xptr;
      }
    case 67:   //QInputMethodEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QInputMethodEvent*)xptr;
        case 67: return (void*)(QInputMethodEvent*)xptr;
        default: return xptr;
      }
    case 68:   //QKeyEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QKeyEvent*)xptr;
        case 68: return (void*)(QKeyEvent*)xptr;
        default: return xptr;
      }
    case 69:   //QLatin1Char
      switch(to) {
        case 69: return (void*)(QLatin1Char*)xptr;
        default: return xptr;
      }
    case 70:   //QLineF
      switch(to) {
        case 70: return (void*)(QLineF*)xptr;
        default: return xptr;
      }
    case 71:   //QMargins
      switch(to) {
        case 71: return (void*)(QMargins*)xptr;
        default: return xptr;
      }
    case 72:   //QMetaObject
      switch(to) {
        case 72: return (void*)(QMetaObject*)xptr;
        default: return xptr;
      }
    case 73:   //QMouseEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QMouseEvent*)xptr;
        case 73: return (void*)(QMouseEvent*)xptr;
        default: return xptr;
      }
    case 74:   //QMoveEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QMoveEvent*)xptr;
        case 74: return (void*)(QMoveEvent*)xptr;
        default: return xptr;
      }
    case 75:   //QObject
      switch(to) {
        case 75: return (void*)(QObject*)xptr;
        case 50: return (void*)(QCPStatisticalBox*)(QObject*)xptr;
        case 9: return (void*)(QCPAxisRect*)(QObject*)xptr;
        case 24: return (void*)(QCPGrid*)(QObject*)xptr;
        case 6: return (void*)(QCPAbstractPlottable*)(QObject*)xptr;
        case 12: return (void*)(QCPBarsGroup*)(QObject*)xptr;
        case 55: return (void*)(QCustomPlot*)(QObject*)xptr;
        case 38: return (void*)(QCPLayout*)(QObject*)xptr;
        case 39: return (void*)(QCPLayoutElement*)(QObject*)xptr;
        case 16: return (void*)(QCPColorScale*)(QObject*)xptr;
        case 42: return (void*)(QCPLegend*)(QObject*)xptr;
        case 27: return (void*)(QCPItemCurve*)(QObject*)xptr;
        case 41: return (void*)(QCPLayoutInset*)(QObject*)xptr;
        case 23: return (void*)(QCPGraph*)(QObject*)xptr;
        case 28: return (void*)(QCPItemEllipse*)(QObject*)xptr;
        case 33: return (void*)(QCPItemStraightLine*)(QObject*)xptr;
        case 7: return (void*)(QCPAxis*)(QObject*)xptr;
        case 21: return (void*)(QCPFinancial*)(QObject*)xptr;
        case 46: return (void*)(QCPPlotTitle*)(QObject*)xptr;
        case 32: return (void*)(QCPItemRect*)(QObject*)xptr;
        case 37: return (void*)(QCPLayerable*)(QObject*)xptr;
        case 5: return (void*)(QCPAbstractLegendItem*)(QObject*)xptr;
        case 30: return (void*)(QCPItemPixmap*)(QObject*)xptr;
        case 35: return (void*)(QCPItemTracer*)(QObject*)xptr;
        case 11: return (void*)(QCPBars*)(QObject*)xptr;
        case 29: return (void*)(QCPItemLine*)(QObject*)xptr;
        case 4: return (void*)(QCPAbstractItem*)(QObject*)xptr;
        case 26: return (void*)(QCPItemBracket*)(QObject*)xptr;
        case 47: return (void*)(QCPPlottableLegendItem*)(QObject*)xptr;
        case 36: return (void*)(QCPLayer*)(QObject*)xptr;
        case 14: return (void*)(QCPColorMap*)(QObject*)xptr;
        case 44: return (void*)(QCPMarginGroup*)(QObject*)xptr;
        case 34: return (void*)(QCPItemText*)(QObject*)xptr;
        case 40: return (void*)(QCPLayoutGrid*)(QObject*)xptr;
        case 18: return (void*)(QCPCurve*)(QObject*)xptr;
        default: return xptr;
      }
    case 76:   //QPaintDevice
      switch(to) {
        case 76: return (void*)(QPaintDevice*)xptr;
        case 55: return (void*)(QCustomPlot*)(QPaintDevice*)xptr;
        default: return xptr;
      }
    case 77:   //QPaintEngine
      switch(to) {
        case 77: return (void*)(QPaintEngine*)xptr;
        default: return xptr;
      }
    case 78:   //QPaintEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QPaintEvent*)xptr;
        case 78: return (void*)(QPaintEvent*)xptr;
        default: return xptr;
      }
    case 79:   //QPainter
      switch(to) {
        case 79: return (void*)(QPainter*)xptr;
        case 45: return (void*)(QCPPainter*)(QPainter*)xptr;
        default: return xptr;
      }
    case 80:   //QPainterPath
      switch(to) {
        case 80: return (void*)(QPainterPath*)xptr;
        default: return xptr;
      }
    case 81:   //QPalette
      switch(to) {
        case 81: return (void*)(QPalette*)xptr;
        default: return xptr;
      }
    case 82:   //QPen
      switch(to) {
        case 82: return (void*)(QPen*)xptr;
        default: return xptr;
      }
    case 83:   //QPixmap
      switch(to) {
        case 76: return (void*)(QPaintDevice*)(QPixmap*)xptr;
        case 83: return (void*)(QPixmap*)xptr;
        default: return xptr;
      }
    case 84:   //QPoint
      switch(to) {
        case 84: return (void*)(QPoint*)xptr;
        default: return xptr;
      }
    case 85:   //QPointF
      switch(to) {
        case 85: return (void*)(QPointF*)xptr;
        default: return xptr;
      }
    case 86:   //QPolygonF
      switch(to) {
        case 86: return (void*)(QPolygonF*)xptr;
        default: return xptr;
      }
    case 87:   //QRect
      switch(to) {
        case 87: return (void*)(QRect*)xptr;
        default: return xptr;
      }
    case 88:   //QRectF
      switch(to) {
        case 88: return (void*)(QRectF*)xptr;
        default: return xptr;
      }
    case 89:   //QRegExp
      switch(to) {
        case 89: return (void*)(QRegExp*)xptr;
        default: return xptr;
      }
    case 90:   //QResizeEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QResizeEvent*)xptr;
        case 90: return (void*)(QResizeEvent*)xptr;
        default: return xptr;
      }
    case 91:   //QShowEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QShowEvent*)xptr;
        case 91: return (void*)(QShowEvent*)xptr;
        default: return xptr;
      }
    case 92:   //QSize
      switch(to) {
        case 92: return (void*)(QSize*)xptr;
        default: return xptr;
      }
    case 93:   //QStyle
      switch(to) {
        case 93: return (void*)(QStyle*)xptr;
        default: return xptr;
      }
    case 94:   //QTabletEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QTabletEvent*)xptr;
        case 94: return (void*)(QTabletEvent*)xptr;
        default: return xptr;
      }
    case 95:   //QTextStream
      switch(to) {
        case 95: return (void*)(QTextStream*)xptr;
        default: return xptr;
      }
    case 96:   //QTimerEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QTimerEvent*)xptr;
        case 96: return (void*)(QTimerEvent*)xptr;
        default: return xptr;
      }
    case 97:   //QVariant
      switch(to) {
        case 97: return (void*)(QVariant*)xptr;
        default: return xptr;
      }
    case 98:   //QVector2D
      switch(to) {
        case 98: return (void*)(QVector2D*)xptr;
        default: return xptr;
      }
    case 99:   //QWheelEvent
      switch(to) {
        case 60: return (void*)(QEvent*)(QWheelEvent*)xptr;
        case 99: return (void*)(QWheelEvent*)xptr;
        default: return xptr;
      }
    case 100:   //QWidget
      switch(to) {
        case 75: return (void*)(QObject*)(QWidget*)xptr;
        case 76: return (void*)(QPaintDevice*)(QWidget*)xptr;
        case 100: return (void*)(QWidget*)xptr;
        case 55: return (void*)(QCustomPlot*)(QWidget*)xptr;
        default: return xptr;
      }
    default: return xptr;
  }
}

// Group of Indexes (0 separated) used as super class lists.
// Classes with super classes have an index into this array.
static Smoke::Index inheritanceList[] = {
    0,	// 0: (no super class)
    37, 0,	// 1: QCPLayerable
    39, 0,	// 3: QCPLayoutElement
    6, 0,	// 5: QCPAbstractPlottable
    75, 0,	// 7: QObject
    4, 0,	// 9: QCPAbstractItem
    25, 0,	// 11: QCPItemAnchor
    38, 0,	// 13: QCPLayout
    40, 0,	// 15: QCPLayoutGrid
    79, 0,	// 17: QPainter
    5, 0,	// 19: QCPAbstractLegendItem
    100, 0,	// 21: QWidget
};

// These are the xenum functions for manipulating enum pointers
void xenum_QCPAxis(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPCurve(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemText(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPColorGradient(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemPosition(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPGraph(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemPixmap(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPPainter(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemBracket(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCustomPlot(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPAbstractPlottable(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPBarsGroup(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPLineEnding(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPLegend(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemTracer(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemEllipse(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPScatterStyle(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPItemRect(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPFinancial(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPBars(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPLayoutElement(Smoke::EnumOperation, Smoke::Index, void*&, long&);
void xenum_QCPLayoutInset(Smoke::EnumOperation, Smoke::Index, void*&, long&);

// Those are the xcall functions defined in each x_*.cpp file, for dispatching method calls
void xcall_QCPAbstractItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPAbstractLegendItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPAbstractPlottable(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPAxis(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPAxisRect(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPBarData(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPBars(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPBarsGroup(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPColorGradient(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPColorMap(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPColorMapData(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPColorScale(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPCurve(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPCurveData(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPData(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPFinancial(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPFinancialData(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPGraph(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPGrid(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemAnchor(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemBracket(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemCurve(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemEllipse(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemLine(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemPixmap(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemPosition(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemRect(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemStraightLine(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemText(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPItemTracer(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayer(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayerable(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayout(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayoutElement(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayoutGrid(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLayoutInset(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLegend(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPLineEnding(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPMarginGroup(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPPainter(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPPlotTitle(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPPlottableLegendItem(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPRange(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPScatterStyle(Smoke::Index, void*, Smoke::Stack);
void xcall_QCPStatisticalBox(Smoke::Index, void*, Smoke::Stack);
void xcall_QCustomPlot(Smoke::Index, void*, Smoke::Stack);
void xcall_QGlobalSpace(Smoke::Index, void*, Smoke::Stack);

// List of all classes
// Name, external, index into inheritanceList, method dispatcher, enum dispatcher, class flags, size
static Smoke::Class classes[] = {
    { 0L, false, 0, 0, 0, 0, 0 },	// 0 (no class)
    { "QActionEvent", true, 0, 0, 0, 0, 0 },	//1
    { "QBool", true, 0, 0, 0, 0, 0 },	//2
    { "QBrush", true, 0, 0, 0, 0, 0 },	//3
    { "QCPAbstractItem", false, 1, xcall_QCPAbstractItem, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPAbstractItem) },	//4
    { "QCPAbstractLegendItem", false, 3, xcall_QCPAbstractLegendItem, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPAbstractLegendItem) },	//5
    { "QCPAbstractPlottable", false, 1, xcall_QCPAbstractPlottable, xenum_QCPAbstractPlottable, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPAbstractPlottable) },	//6
    { "QCPAxis", false, 1, xcall_QCPAxis, xenum_QCPAxis, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPAxis) },	//7
    { "QCPAxisPainterPrivate", true, 0, 0, 0, 0, 0 },	//8
    { "QCPAxisRect", false, 3, xcall_QCPAxisRect, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPAxisRect) },	//9
    { "QCPBarData", false, 0, xcall_QCPBarData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPBarData) },	//10
    { "QCPBars", false, 5, xcall_QCPBars, xenum_QCPBars, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPBars) },	//11
    { "QCPBarsGroup", false, 7, xcall_QCPBarsGroup, xenum_QCPBarsGroup, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPBarsGroup) },	//12
    { "QCPColorGradient", false, 0, xcall_QCPColorGradient, xenum_QCPColorGradient, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPColorGradient) },	//13
    { "QCPColorMap", false, 5, xcall_QCPColorMap, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPColorMap) },	//14
    { "QCPColorMapData", false, 0, xcall_QCPColorMapData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPColorMapData) },	//15
    { "QCPColorScale", false, 3, xcall_QCPColorScale, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPColorScale) },	//16
    { "QCPColorScaleAxisRectPrivate", true, 0, 0, 0, 0, 0 },	//17
    { "QCPCurve", false, 5, xcall_QCPCurve, xenum_QCPCurve, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPCurve) },	//18
    { "QCPCurveData", false, 0, xcall_QCPCurveData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPCurveData) },	//19
    { "QCPData", false, 0, xcall_QCPData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPData) },	//20
    { "QCPFinancial", false, 5, xcall_QCPFinancial, xenum_QCPFinancial, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPFinancial) },	//21
    { "QCPFinancialData", false, 0, xcall_QCPFinancialData, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPFinancialData) },	//22
    { "QCPGraph", false, 5, xcall_QCPGraph, xenum_QCPGraph, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPGraph) },	//23
    { "QCPGrid", false, 1, xcall_QCPGrid, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPGrid) },	//24
    { "QCPItemAnchor", false, 0, xcall_QCPItemAnchor, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemAnchor) },	//25
    { "QCPItemBracket", false, 9, xcall_QCPItemBracket, xenum_QCPItemBracket, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemBracket) },	//26
    { "QCPItemCurve", false, 9, xcall_QCPItemCurve, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemCurve) },	//27
    { "QCPItemEllipse", false, 9, xcall_QCPItemEllipse, xenum_QCPItemEllipse, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemEllipse) },	//28
    { "QCPItemLine", false, 9, xcall_QCPItemLine, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemLine) },	//29
    { "QCPItemPixmap", false, 9, xcall_QCPItemPixmap, xenum_QCPItemPixmap, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemPixmap) },	//30
    { "QCPItemPosition", false, 11, xcall_QCPItemPosition, xenum_QCPItemPosition, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemPosition) },	//31
    { "QCPItemRect", false, 9, xcall_QCPItemRect, xenum_QCPItemRect, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemRect) },	//32
    { "QCPItemStraightLine", false, 9, xcall_QCPItemStraightLine, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemStraightLine) },	//33
    { "QCPItemText", false, 9, xcall_QCPItemText, xenum_QCPItemText, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemText) },	//34
    { "QCPItemTracer", false, 9, xcall_QCPItemTracer, xenum_QCPItemTracer, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPItemTracer) },	//35
    { "QCPLayer", false, 7, xcall_QCPLayer, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayer) },	//36
    { "QCPLayerable", false, 7, xcall_QCPLayerable, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayerable) },	//37
    { "QCPLayout", false, 3, xcall_QCPLayout, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayout) },	//38
    { "QCPLayoutElement", false, 1, xcall_QCPLayoutElement, xenum_QCPLayoutElement, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayoutElement) },	//39
    { "QCPLayoutGrid", false, 13, xcall_QCPLayoutGrid, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayoutGrid) },	//40
    { "QCPLayoutInset", false, 13, xcall_QCPLayoutInset, xenum_QCPLayoutInset, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLayoutInset) },	//41
    { "QCPLegend", false, 15, xcall_QCPLegend, xenum_QCPLegend, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPLegend) },	//42
    { "QCPLineEnding", false, 0, xcall_QCPLineEnding, xenum_QCPLineEnding, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPLineEnding) },	//43
    { "QCPMarginGroup", false, 7, xcall_QCPMarginGroup, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPMarginGroup) },	//44
    { "QCPPainter", false, 17, xcall_QCPPainter, xenum_QCPPainter, Smoke::cf_constructor, sizeof(QCPPainter) },	//45
    { "QCPPlotTitle", false, 3, xcall_QCPPlotTitle, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPPlotTitle) },	//46
    { "QCPPlottableLegendItem", false, 19, xcall_QCPPlottableLegendItem, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPPlottableLegendItem) },	//47
    { "QCPRange", false, 0, xcall_QCPRange, 0, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPRange) },	//48
    { "QCPScatterStyle", false, 0, xcall_QCPScatterStyle, xenum_QCPScatterStyle, Smoke::cf_constructor|Smoke::cf_deepcopy, sizeof(QCPScatterStyle) },	//49
    { "QCPStatisticalBox", false, 5, xcall_QCPStatisticalBox, 0, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCPStatisticalBox) },	//50
    { "QChildEvent", true, 0, 0, 0, 0, 0 },	//51
    { "QCloseEvent", true, 0, 0, 0, 0, 0 },	//52
    { "QColor", true, 0, 0, 0, 0, 0 },	//53
    { "QContextMenuEvent", true, 0, 0, 0, 0, 0 },	//54
    { "QCustomPlot", false, 21, xcall_QCustomPlot, xenum_QCustomPlot, Smoke::cf_constructor|Smoke::cf_virtual, sizeof(QCustomPlot) },	//55
    { "QDragEnterEvent", true, 0, 0, 0, 0, 0 },	//56
    { "QDragLeaveEvent", true, 0, 0, 0, 0, 0 },	//57
    { "QDragMoveEvent", true, 0, 0, 0, 0, 0 },	//58
    { "QDropEvent", true, 0, 0, 0, 0, 0 },	//59
    { "QEvent", true, 0, 0, 0, 0, 0 },	//60
    { "QFocusEvent", true, 0, 0, 0, 0, 0 },	//61
    { "QFont", true, 0, 0, 0, 0, 0 },	//62
    { "QGlobalSpace", false, 0, xcall_QGlobalSpace, 0, Smoke::cf_namespace, 0 },	//63
    { "QHideEvent", true, 0, 0, 0, 0, 0 },	//64
    { "QImage", true, 0, 0, 0, 0, 0 },	//65
    { "QIncompatibleFlag", true, 0, 0, 0, 0, 0 },	//66
    { "QInputMethodEvent", true, 0, 0, 0, 0, 0 },	//67
    { "QKeyEvent", true, 0, 0, 0, 0, 0 },	//68
    { "QLatin1Char", true, 0, 0, 0, 0, 0 },	//69
    { "QLineF", true, 0, 0, 0, 0, 0 },	//70
    { "QMargins", true, 0, 0, 0, 0, 0 },	//71
    { "QMetaObject", true, 0, 0, 0, 0, 0 },	//72
    { "QMouseEvent", true, 0, 0, 0, 0, 0 },	//73
    { "QMoveEvent", true, 0, 0, 0, 0, 0 },	//74
    { "QObject", true, 0, 0, 0, 0, 0 },	//75
    { "QPaintDevice", true, 0, 0, 0, 0, 0 },	//76
    { "QPaintEngine", true, 0, 0, 0, 0, 0 },	//77
    { "QPaintEvent", true, 0, 0, 0, 0, 0 },	//78
    { "QPainter", true, 0, 0, 0, 0, 0 },	//79
    { "QPainterPath", true, 0, 0, 0, 0, 0 },	//80
    { "QPalette", true, 0, 0, 0, 0, 0 },	//81
    { "QPen", true, 0, 0, 0, 0, 0 },	//82
    { "QPixmap", true, 0, 0, 0, 0, 0 },	//83
    { "QPoint", true, 0, 0, 0, 0, 0 },	//84
    { "QPointF", true, 0, 0, 0, 0, 0 },	//85
    { "QPolygonF", true, 0, 0, 0, 0, 0 },	//86
    { "QRect", true, 0, 0, 0, 0, 0 },	//87
    { "QRectF", true, 0, 0, 0, 0, 0 },	//88
    { "QRegExp", true, 0, 0, 0, 0, 0 },	//89
    { "QResizeEvent", true, 0, 0, 0, 0, 0 },	//90
    { "QShowEvent", true, 0, 0, 0, 0, 0 },	//91
    { "QSize", true, 0, 0, 0, 0, 0 },	//92
    { "QStyle", true, 0, 0, 0, 0, 0 },	//93
    { "QTabletEvent", true, 0, 0, 0, 0, 0 },	//94
    { "QTextStream", true, 0, 0, 0, 0, 0 },	//95
    { "QTimerEvent", true, 0, 0, 0, 0, 0 },	//96
    { "QVariant", true, 0, 0, 0, 0, 0 },	//97
    { "QVector2D", true, 0, 0, 0, 0, 0 },	//98
    { "QWheelEvent", true, 0, 0, 0, 0, 0 },	//99
    { "QWidget", true, 0, 0, 0, 0, 0 },	//100
};

// List of all types needed by the methods (arguments and return values)
// Name, class ID if arg is a class, and TypeId
static Smoke::Type types[] = {
    { 0, 0, 0 },	//0 (no type)
    { "QActionEvent*", 1, Smoke::t_class|Smoke::tf_ptr },	//1
    { "QBool", 2, Smoke::t_class|Smoke::tf_stack },	//2
    { "QBrush", 3, Smoke::t_class|Smoke::tf_stack },	//3
    { "QBrush&", 3, Smoke::t_class|Smoke::tf_ref },	//4
    { "QCP::AntialiasedElement", 0, Smoke::t_enum|Smoke::tf_stack },	//5
    { "QCP::Interaction", 0, Smoke::t_enum|Smoke::tf_stack },	//6
    { "QCP::MarginSide", 0, Smoke::t_enum|Smoke::tf_stack },	//7
    { "QCP::PlottingHint", 0, Smoke::t_enum|Smoke::tf_stack },	//8
    { "QCPAbstractItem*", 4, Smoke::t_class|Smoke::tf_ptr },	//9
    { "QCPAbstractLegendItem*", 5, Smoke::t_class|Smoke::tf_ptr },	//10
    { "QCPAbstractPlottable*", 6, Smoke::t_class|Smoke::tf_ptr },	//11
    { "QCPAbstractPlottable::SignDomain", 6, Smoke::t_enum|Smoke::tf_stack },	//12
    { "QCPAxis", 7, Smoke::t_class|Smoke::tf_stack },	//13
    { "QCPAxis*", 7, Smoke::t_class|Smoke::tf_ptr },	//14
    { "QCPAxis::AxisType", 7, Smoke::t_enum|Smoke::tf_stack },	//15
    { "QCPAxis::LabelSide", 7, Smoke::t_enum|Smoke::tf_stack },	//16
    { "QCPAxis::LabelType", 7, Smoke::t_enum|Smoke::tf_stack },	//17
    { "QCPAxis::ScaleType", 7, Smoke::t_enum|Smoke::tf_stack },	//18
    { "QCPAxis::SelectablePart", 7, Smoke::t_enum|Smoke::tf_stack },	//19
    { "QCPAxis::SelectableParts", 0, Smoke::t_uint|Smoke::tf_stack },	//20
    { "QCPAxisPainterPrivate*", 8, Smoke::t_class|Smoke::tf_ptr },	//21
    { "QCPAxisRect", 9, Smoke::t_class|Smoke::tf_stack },	//22
    { "QCPAxisRect*", 9, Smoke::t_class|Smoke::tf_ptr },	//23
    { "QCPBarData", 10, Smoke::t_class|Smoke::tf_stack },	//24
    { "QCPBarData*", 10, Smoke::t_class|Smoke::tf_ptr },	//25
    { "QCPBarDataMap::const_iterator&", 0, Smoke::t_voidp|Smoke::tf_ref },	//26
    { "QCPBars", 11, Smoke::t_class|Smoke::tf_stack },	//27
    { "QCPBars*", 11, Smoke::t_class|Smoke::tf_ptr },	//28
    { "QCPBars::WidthType", 11, Smoke::t_enum|Smoke::tf_stack },	//29
    { "QCPBarsGroup*", 12, Smoke::t_class|Smoke::tf_ptr },	//30
    { "QCPBarsGroup::SpacingType", 12, Smoke::t_enum|Smoke::tf_stack },	//31
    { "QCPColorGradient", 13, Smoke::t_class|Smoke::tf_stack },	//32
    { "QCPColorGradient&", 13, Smoke::t_class|Smoke::tf_ref },	//33
    { "QCPColorGradient*", 13, Smoke::t_class|Smoke::tf_ptr },	//34
    { "QCPColorGradient::ColorInterpolation", 13, Smoke::t_enum|Smoke::tf_stack },	//35
    { "QCPColorGradient::GradientPreset", 13, Smoke::t_enum|Smoke::tf_stack },	//36
    { "QCPColorMap*", 14, Smoke::t_class|Smoke::tf_ptr },	//37
    { "QCPColorMapData&", 15, Smoke::t_class|Smoke::tf_ref },	//38
    { "QCPColorMapData*", 15, Smoke::t_class|Smoke::tf_ptr },	//39
    { "QCPColorScale", 16, Smoke::t_class|Smoke::tf_stack },	//40
    { "QCPColorScale*", 16, Smoke::t_class|Smoke::tf_ptr },	//41
    { "QCPColorScaleAxisRectPrivate", 17, Smoke::t_class|Smoke::tf_stack },	//42
    { "QCPCurve*", 18, Smoke::t_class|Smoke::tf_ptr },	//43
    { "QCPCurve::LineStyle", 18, Smoke::t_enum|Smoke::tf_stack },	//44
    { "QCPCurveData", 19, Smoke::t_class|Smoke::tf_stack },	//45
    { "QCPCurveData*", 19, Smoke::t_class|Smoke::tf_ptr },	//46
    { "QCPData", 20, Smoke::t_class|Smoke::tf_stack },	//47
    { "QCPData*", 20, Smoke::t_class|Smoke::tf_ptr },	//48
    { "QCPDataMap::const_iterator&", 0, Smoke::t_voidp|Smoke::tf_ref },	//49
    { "QCPFinancial*", 21, Smoke::t_class|Smoke::tf_ptr },	//50
    { "QCPFinancial::ChartStyle", 21, Smoke::t_enum|Smoke::tf_stack },	//51
    { "QCPFinancialData", 22, Smoke::t_class|Smoke::tf_stack },	//52
    { "QCPFinancialData*", 22, Smoke::t_class|Smoke::tf_ptr },	//53
    { "QCPFinancialDataMap::const_iterator&", 0, Smoke::t_voidp|Smoke::tf_ref },	//54
    { "QCPGraph", 23, Smoke::t_class|Smoke::tf_stack },	//55
    { "QCPGraph*", 23, Smoke::t_class|Smoke::tf_ptr },	//56
    { "QCPGraph::ErrorType", 23, Smoke::t_enum|Smoke::tf_stack },	//57
    { "QCPGraph::LineStyle", 23, Smoke::t_enum|Smoke::tf_stack },	//58
    { "QCPGrid*", 24, Smoke::t_class|Smoke::tf_ptr },	//59
    { "QCPItemAnchor*", 25, Smoke::t_class|Smoke::tf_ptr },	//60
    { "QCPItemBracket*", 26, Smoke::t_class|Smoke::tf_ptr },	//61
    { "QCPItemBracket::AnchorIndex", 26, Smoke::t_enum|Smoke::tf_stack },	//62
    { "QCPItemBracket::BracketStyle", 26, Smoke::t_enum|Smoke::tf_stack },	//63
    { "QCPItemCurve*", 27, Smoke::t_class|Smoke::tf_ptr },	//64
    { "QCPItemEllipse*", 28, Smoke::t_class|Smoke::tf_ptr },	//65
    { "QCPItemEllipse::AnchorIndex", 28, Smoke::t_enum|Smoke::tf_stack },	//66
    { "QCPItemLine*", 29, Smoke::t_class|Smoke::tf_ptr },	//67
    { "QCPItemPixmap*", 30, Smoke::t_class|Smoke::tf_ptr },	//68
    { "QCPItemPixmap::AnchorIndex", 30, Smoke::t_enum|Smoke::tf_stack },	//69
    { "QCPItemPosition*", 31, Smoke::t_class|Smoke::tf_ptr },	//70
    { "QCPItemPosition::PositionType", 31, Smoke::t_enum|Smoke::tf_stack },	//71
    { "QCPItemRect*", 32, Smoke::t_class|Smoke::tf_ptr },	//72
    { "QCPItemRect::AnchorIndex", 32, Smoke::t_enum|Smoke::tf_stack },	//73
    { "QCPItemStraightLine*", 33, Smoke::t_class|Smoke::tf_ptr },	//74
    { "QCPItemText*", 34, Smoke::t_class|Smoke::tf_ptr },	//75
    { "QCPItemText::AnchorIndex", 34, Smoke::t_enum|Smoke::tf_stack },	//76
    { "QCPItemTracer*", 35, Smoke::t_class|Smoke::tf_ptr },	//77
    { "QCPItemTracer::TracerStyle", 35, Smoke::t_enum|Smoke::tf_stack },	//78
    { "QCPLayer*", 36, Smoke::t_class|Smoke::tf_ptr },	//79
    { "QCPLayerable", 37, Smoke::t_class|Smoke::tf_stack },	//80
    { "QCPLayerable*", 37, Smoke::t_class|Smoke::tf_ptr },	//81
    { "QCPLayout*", 38, Smoke::t_class|Smoke::tf_ptr },	//82
    { "QCPLayoutElement", 39, Smoke::t_class|Smoke::tf_stack },	//83
    { "QCPLayoutElement*", 39, Smoke::t_class|Smoke::tf_ptr },	//84
    { "QCPLayoutElement::UpdatePhase", 39, Smoke::t_enum|Smoke::tf_stack },	//85
    { "QCPLayoutGrid*", 40, Smoke::t_class|Smoke::tf_ptr },	//86
    { "QCPLayoutInset*", 41, Smoke::t_class|Smoke::tf_ptr },	//87
    { "QCPLayoutInset::InsetPlacement", 41, Smoke::t_enum|Smoke::tf_stack },	//88
    { "QCPLegend*", 42, Smoke::t_class|Smoke::tf_ptr },	//89
    { "QCPLegend::SelectablePart", 42, Smoke::t_enum|Smoke::tf_stack },	//90
    { "QCPLegend::SelectableParts", 0, Smoke::t_uint|Smoke::tf_stack },	//91
    { "QCPLineEnding", 43, Smoke::t_class|Smoke::tf_stack },	//92
    { "QCPLineEnding&", 43, Smoke::t_class|Smoke::tf_ref },	//93
    { "QCPLineEnding*", 43, Smoke::t_class|Smoke::tf_ptr },	//94
    { "QCPLineEnding::EndingStyle", 43, Smoke::t_enum|Smoke::tf_stack },	//95
    { "QCPMarginGroup*", 44, Smoke::t_class|Smoke::tf_ptr },	//96
    { "QCPPainter*", 45, Smoke::t_class|Smoke::tf_ptr },	//97
    { "QCPPainter::PainterMode", 45, Smoke::t_enum|Smoke::tf_stack },	//98
    { "QCPPlotTitle*", 46, Smoke::t_class|Smoke::tf_ptr },	//99
    { "QCPPlottableLegendItem*", 47, Smoke::t_class|Smoke::tf_ptr },	//100
    { "QCPRange", 48, Smoke::t_class|Smoke::tf_stack },	//101
    { "QCPRange&", 48, Smoke::t_class|Smoke::tf_ref },	//102
    { "QCPRange*", 48, Smoke::t_class|Smoke::tf_ptr },	//103
    { "QCPScatterStyle", 49, Smoke::t_class|Smoke::tf_stack },	//104
    { "QCPScatterStyle&", 49, Smoke::t_class|Smoke::tf_ref },	//105
    { "QCPScatterStyle*", 49, Smoke::t_class|Smoke::tf_ptr },	//106
    { "QCPScatterStyle::ScatterShape", 49, Smoke::t_enum|Smoke::tf_stack },	//107
    { "QCPStatisticalBox*", 50, Smoke::t_class|Smoke::tf_ptr },	//108
    { "QChildEvent*", 51, Smoke::t_class|Smoke::tf_ptr },	//109
    { "QCloseEvent*", 52, Smoke::t_class|Smoke::tf_ptr },	//110
    { "QColor", 53, Smoke::t_class|Smoke::tf_stack },	//111
    { "QColor&", 53, Smoke::t_class|Smoke::tf_ref },	//112
    { "QContextMenuEvent*", 54, Smoke::t_class|Smoke::tf_ptr },	//113
    { "QCustomPlot*", 55, Smoke::t_class|Smoke::tf_ptr },	//114
    { "QCustomPlot::LayerInsertMode", 55, Smoke::t_enum|Smoke::tf_stack },	//115
    { "QCustomPlot::RefreshPriority", 55, Smoke::t_enum|Smoke::tf_stack },	//116
    { "QDragEnterEvent*", 56, Smoke::t_class|Smoke::tf_ptr },	//117
    { "QDragLeaveEvent*", 57, Smoke::t_class|Smoke::tf_ptr },	//118
    { "QDragMoveEvent*", 58, Smoke::t_class|Smoke::tf_ptr },	//119
    { "QDrawBorderPixmap::DrawingHint", 0, Smoke::t_enum|Smoke::tf_stack },	//120
    { "QDropEvent*", 59, Smoke::t_class|Smoke::tf_ptr },	//121
    { "QEvent*", 60, Smoke::t_class|Smoke::tf_ptr },	//122
    { "QFlags<QCP::AntialiasedElement>", 0, Smoke::t_uint|Smoke::tf_stack },	//123
    { "QFlags<QCP::Interaction>", 0, Smoke::t_uint|Smoke::tf_stack },	//124
    { "QFlags<QCP::MarginSide>", 0, Smoke::t_uint|Smoke::tf_stack },	//125
    { "QFlags<QCP::PlottingHint>", 0, Smoke::t_uint|Smoke::tf_stack },	//126
    { "QFlags<QCPAxis::AxisType>", 0, Smoke::t_uint|Smoke::tf_stack },	//127
    { "QFlags<QCPAxis::SelectablePart>", 0, Smoke::t_uint|Smoke::tf_stack },	//128
    { "QFlags<QCPLegend::SelectablePart>", 0, Smoke::t_uint|Smoke::tf_stack },	//129
    { "QFlags<QCPPainter::PainterMode>", 0, Smoke::t_uint|Smoke::tf_stack },	//130
    { "QFlags<Qt::AlignmentFlag>", 0, Smoke::t_uint|Smoke::tf_stack },	//131
    { "QFlags<Qt::Orientation>", 0, Smoke::t_uint|Smoke::tf_stack },	//132
    { "QFocusEvent*", 61, Smoke::t_class|Smoke::tf_ptr },	//133
    { "QFont", 62, Smoke::t_class|Smoke::tf_stack },	//134
    { "QFont&", 62, Smoke::t_class|Smoke::tf_ref },	//135
    { "QHash<QCP::MarginSide,QCPMarginGroup*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//136
    { "QHash<QCP::MarginSide,QCPMarginGroup*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//137
    { "QHash<QCP::MarginSide,QList<QCPLayoutElement*> >&", 0, Smoke::t_voidp|Smoke::tf_ref },	//138
    { "QHash<QCPAxis::AxisType,QList<QCPAxis*> >&", 0, Smoke::t_voidp|Smoke::tf_ref },	//139
    { "QHideEvent*", 64, Smoke::t_class|Smoke::tf_ptr },	//140
    { "QImage&", 65, Smoke::t_class|Smoke::tf_ref },	//141
    { "QIncompatibleFlag", 66, Smoke::t_class|Smoke::tf_stack },	//142
    { "QInputMethodEvent*", 67, Smoke::t_class|Smoke::tf_ptr },	//143
    { "QKeyEvent*", 68, Smoke::t_class|Smoke::tf_ptr },	//144
    { "QLatin1Char&", 69, Smoke::t_class|Smoke::tf_ref },	//145
    { "QLineF", 70, Smoke::t_class|Smoke::tf_stack },	//146
    { "QList<QCPAbstractItem*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//147
    { "QList<QCPAbstractItem*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//148
    { "QList<QCPAbstractLegendItem*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//149
    { "QList<QCPAbstractPlottable*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//150
    { "QList<QCPAbstractPlottable*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//151
    { "QList<QCPAxis*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//152
    { "QList<QCPAxisRect*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//153
    { "QList<QCPBars*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//154
    { "QList<QCPBars*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//155
    { "QList<QCPColorMap*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//156
    { "QList<QCPGraph*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//157
    { "QList<QCPGraph*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//158
    { "QList<QCPItemAnchor*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//159
    { "QList<QCPItemAnchor*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//160
    { "QList<QCPItemPosition*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//161
    { "QList<QCPItemPosition*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//162
    { "QList<QCPLayer*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//163
    { "QList<QCPLayerable*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//164
    { "QList<QCPLayerable*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//165
    { "QList<QCPLayoutElement*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//166
    { "QList<QCPLayoutElement*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//167
    { "QList<QCPLayoutInset::InsetPlacement>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//168
    { "QList<QCPLegend*>", 0, Smoke::t_voidp|Smoke::tf_stack },	//169
    { "QList<QFlags<Qt::AlignmentFlag> >&", 0, Smoke::t_voidp|Smoke::tf_ref },	//170
    { "QList<QList<QCPLayoutElement*> >&", 0, Smoke::t_voidp|Smoke::tf_ref },	//171
    { "QList<QRectF>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//172
    { "QList<double>", 0, Smoke::t_voidp|Smoke::tf_stack },	//173
    { "QList<double>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//174
    { "QMap<double,QCPBarData>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//175
    { "QMap<double,QCPCurveData>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//176
    { "QMap<double,QCPData>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//177
    { "QMap<double,QCPFinancialData>", 0, Smoke::t_voidp|Smoke::tf_stack },	//178
    { "QMap<double,QCPFinancialData>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//179
    { "QMap<double,QColor>", 0, Smoke::t_voidp|Smoke::tf_stack },	//180
    { "QMap<double,QColor>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//181
    { "QMargins", 71, Smoke::t_class|Smoke::tf_stack },	//182
    { "QMargins&", 71, Smoke::t_class|Smoke::tf_ref },	//183
    { "QMetaObject::Call", 72, Smoke::t_enum|Smoke::tf_stack },	//184
    { "QMouseEvent*", 73, Smoke::t_class|Smoke::tf_ptr },	//185
    { "QMoveEvent*", 74, Smoke::t_class|Smoke::tf_ptr },	//186
    { "QObject*", 75, Smoke::t_class|Smoke::tf_ptr },	//187
    { "QPaintDevice*", 76, Smoke::t_class|Smoke::tf_ptr },	//188
    { "QPaintDevice::PaintDeviceMetric", 76, Smoke::t_enum|Smoke::tf_stack },	//189
    { "QPaintEngine*", 77, Smoke::t_class|Smoke::tf_ptr },	//190
    { "QPaintEvent*", 78, Smoke::t_class|Smoke::tf_ptr },	//191
    { "QPainterPath", 80, Smoke::t_class|Smoke::tf_stack },	//192
    { "QPainterPath&", 80, Smoke::t_class|Smoke::tf_ref },	//193
    { "QPen", 82, Smoke::t_class|Smoke::tf_stack },	//194
    { "QPen&", 82, Smoke::t_class|Smoke::tf_ref },	//195
    { "QPixmap", 83, Smoke::t_class|Smoke::tf_stack },	//196
    { "QPixmap&", 83, Smoke::t_class|Smoke::tf_ref },	//197
    { "QPoint", 84, Smoke::t_class|Smoke::tf_stack },	//198
    { "QPoint&", 84, Smoke::t_class|Smoke::tf_ref },	//199
    { "QPointF", 85, Smoke::t_class|Smoke::tf_stack },	//200
    { "QPointF&", 85, Smoke::t_class|Smoke::tf_ref },	//201
    { "QPointer<QCPAxis>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//202
    { "QPointer<QCPAxisRect>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//203
    { "QPointer<QCPBars>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//204
    { "QPointer<QCPColorScale>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//205
    { "QPointer<QCPColorScaleAxisRectPrivate>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//206
    { "QPointer<QCPGraph>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//207
    { "QPointer<QCPLayerable>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//208
    { "QPointer<QCPLayoutElement>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//209
    { "QPolygonF", 86, Smoke::t_class|Smoke::tf_stack },	//210
    { "QRect", 87, Smoke::t_class|Smoke::tf_stack },	//211
    { "QRect&", 87, Smoke::t_class|Smoke::tf_ref },	//212
    { "QRectF", 88, Smoke::t_class|Smoke::tf_stack },	//213
    { "QRectF*", 88, Smoke::t_class|Smoke::tf_ptr },	//214
    { "QRegExp&", 89, Smoke::t_class|Smoke::tf_ref },	//215
    { "QResizeEvent*", 90, Smoke::t_class|Smoke::tf_ptr },	//216
    { "QSet<QCPItemPosition*>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//217
    { "QShowEvent*", 91, Smoke::t_class|Smoke::tf_ptr },	//218
    { "QSize", 92, Smoke::t_class|Smoke::tf_stack },	//219
    { "QSize&", 92, Smoke::t_class|Smoke::tf_ref },	//220
    { "QStack<bool>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//221
    { "QString", 0, Smoke::t_voidp|Smoke::tf_stack },	//222
    { "QString&", 0, Smoke::t_voidp|Smoke::tf_ref },	//223
    { "QStringList", 0, Smoke::t_voidp|Smoke::tf_stack },	//224
    { "QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//225
    { "QStyle&", 93, Smoke::t_class|Smoke::tf_ref },	//226
    { "QTabletEvent*", 94, Smoke::t_class|Smoke::tf_ptr },	//227
    { "QTextStream&", 95, Smoke::t_class|Smoke::tf_ref },	//228
    { "QTimerEvent*", 96, Smoke::t_class|Smoke::tf_ptr },	//229
    { "QVariant", 97, Smoke::t_class|Smoke::tf_stack },	//230
    { "QVariant*", 97, Smoke::t_class|Smoke::tf_ptr },	//231
    { "QVector<QCPData>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//232
    { "QVector<QPointF>", 0, Smoke::t_voidp|Smoke::tf_stack },	//233
    { "QVector<QPointF>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//234
    { "QVector<QPointF>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//235
    { "QVector<QString>", 0, Smoke::t_voidp|Smoke::tf_stack },	//236
    { "QVector<QString>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//237
    { "QVector<double>", 0, Smoke::t_voidp|Smoke::tf_stack },	//238
    { "QVector<double>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//239
    { "QVector<int>", 0, Smoke::t_voidp|Smoke::tf_stack },	//240
    { "QVector<int>*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//241
    { "QVector<unsigned int>&", 0, Smoke::t_voidp|Smoke::tf_ref },	//242
    { "QWheelEvent*", 99, Smoke::t_class|Smoke::tf_ptr },	//243
    { "QWidget*", 100, Smoke::t_class|Smoke::tf_ptr },	//244
    { "Qt::AlignmentFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//245
    { "Qt::AnchorAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//246
    { "Qt::AnchorPoint", 0, Smoke::t_enum|Smoke::tf_stack },	//247
    { "Qt::ApplicationAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//248
    { "Qt::ArrowType", 0, Smoke::t_enum|Smoke::tf_stack },	//249
    { "Qt::AspectRatioMode", 0, Smoke::t_enum|Smoke::tf_stack },	//250
    { "Qt::Axis", 0, Smoke::t_enum|Smoke::tf_stack },	//251
    { "Qt::BGMode", 0, Smoke::t_enum|Smoke::tf_stack },	//252
    { "Qt::BrushStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//253
    { "Qt::CaseSensitivity", 0, Smoke::t_enum|Smoke::tf_stack },	//254
    { "Qt::CheckState", 0, Smoke::t_enum|Smoke::tf_stack },	//255
    { "Qt::ClipOperation", 0, Smoke::t_enum|Smoke::tf_stack },	//256
    { "Qt::ConnectionType", 0, Smoke::t_enum|Smoke::tf_stack },	//257
    { "Qt::ContextMenuPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//258
    { "Qt::CoordinateSystem", 0, Smoke::t_enum|Smoke::tf_stack },	//259
    { "Qt::Corner", 0, Smoke::t_enum|Smoke::tf_stack },	//260
    { "Qt::CursorMoveStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//261
    { "Qt::CursorShape", 0, Smoke::t_enum|Smoke::tf_stack },	//262
    { "Qt::DateFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//263
    { "Qt::DayOfWeek", 0, Smoke::t_enum|Smoke::tf_stack },	//264
    { "Qt::DockWidgetArea", 0, Smoke::t_enum|Smoke::tf_stack },	//265
    { "Qt::DockWidgetAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//266
    { "Qt::DropAction", 0, Smoke::t_enum|Smoke::tf_stack },	//267
    { "Qt::EventPriority", 0, Smoke::t_enum|Smoke::tf_stack },	//268
    { "Qt::FillRule", 0, Smoke::t_enum|Smoke::tf_stack },	//269
    { "Qt::FocusPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//270
    { "Qt::FocusReason", 0, Smoke::t_enum|Smoke::tf_stack },	//271
    { "Qt::GestureFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//272
    { "Qt::GestureState", 0, Smoke::t_enum|Smoke::tf_stack },	//273
    { "Qt::GestureType", 0, Smoke::t_enum|Smoke::tf_stack },	//274
    { "Qt::GlobalColor", 0, Smoke::t_enum|Smoke::tf_stack },	//275
    { "Qt::ImageConversionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//276
    { "Qt::Initialization", 0, Smoke::t_enum|Smoke::tf_stack },	//277
    { "Qt::InputMethodHint", 0, Smoke::t_enum|Smoke::tf_stack },	//278
    { "Qt::InputMethodQuery", 0, Smoke::t_enum|Smoke::tf_stack },	//279
    { "Qt::ItemDataRole", 0, Smoke::t_enum|Smoke::tf_stack },	//280
    { "Qt::ItemFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//281
    { "Qt::ItemSelectionMode", 0, Smoke::t_enum|Smoke::tf_stack },	//282
    { "Qt::Key", 0, Smoke::t_enum|Smoke::tf_stack },	//283
    { "Qt::KeyboardModifier", 0, Smoke::t_enum|Smoke::tf_stack },	//284
    { "Qt::LayoutDirection", 0, Smoke::t_enum|Smoke::tf_stack },	//285
    { "Qt::MaskMode", 0, Smoke::t_enum|Smoke::tf_stack },	//286
    { "Qt::MatchFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//287
    { "Qt::Modifier", 0, Smoke::t_enum|Smoke::tf_stack },	//288
    { "Qt::MouseButton", 0, Smoke::t_enum|Smoke::tf_stack },	//289
    { "Qt::NavigationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//290
    { "Qt::Orientation", 0, Smoke::t_enum|Smoke::tf_stack },	//291
    { "Qt::PenCapStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//292
    { "Qt::PenJoinStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//293
    { "Qt::PenStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//294
    { "Qt::ScrollBarPolicy", 0, Smoke::t_enum|Smoke::tf_stack },	//295
    { "Qt::ShortcutContext", 0, Smoke::t_enum|Smoke::tf_stack },	//296
    { "Qt::SizeHint", 0, Smoke::t_enum|Smoke::tf_stack },	//297
    { "Qt::SizeMode", 0, Smoke::t_enum|Smoke::tf_stack },	//298
    { "Qt::SortOrder", 0, Smoke::t_enum|Smoke::tf_stack },	//299
    { "Qt::TextElideMode", 0, Smoke::t_enum|Smoke::tf_stack },	//300
    { "Qt::TextFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//301
    { "Qt::TextFormat", 0, Smoke::t_enum|Smoke::tf_stack },	//302
    { "Qt::TextInteractionFlag", 0, Smoke::t_enum|Smoke::tf_stack },	//303
    { "Qt::TileRule", 0, Smoke::t_enum|Smoke::tf_stack },	//304
    { "Qt::TimeSpec", 0, Smoke::t_enum|Smoke::tf_stack },	//305
    { "Qt::ToolBarArea", 0, Smoke::t_enum|Smoke::tf_stack },	//306
    { "Qt::ToolBarAreaSizes", 0, Smoke::t_enum|Smoke::tf_stack },	//307
    { "Qt::ToolButtonStyle", 0, Smoke::t_enum|Smoke::tf_stack },	//308
    { "Qt::TouchPointState", 0, Smoke::t_enum|Smoke::tf_stack },	//309
    { "Qt::TransformationMode", 0, Smoke::t_enum|Smoke::tf_stack },	//310
    { "Qt::UIEffect", 0, Smoke::t_enum|Smoke::tf_stack },	//311
    { "Qt::WidgetAttribute", 0, Smoke::t_enum|Smoke::tf_stack },	//312
    { "Qt::WindowFrameSection", 0, Smoke::t_enum|Smoke::tf_stack },	//313
    { "Qt::WindowModality", 0, Smoke::t_enum|Smoke::tf_stack },	//314
    { "Qt::WindowState", 0, Smoke::t_enum|Smoke::tf_stack },	//315
    { "Qt::WindowType", 0, Smoke::t_enum|Smoke::tf_stack },	//316
    { "_XEvent*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//317
    { "bool", 0, Smoke::t_bool|Smoke::tf_stack },	//318
    { "bool&", 0, Smoke::t_voidp|Smoke::tf_ref },	//319
    { "bool*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//320
    { "char*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//321
    { "char**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//322
    { "const QBrush&", 3, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//323
    { "const QCP::Interaction&", 0, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//324
    { "const QCPAbstractPlottable*", 6, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//325
    { "const QCPAxis*", 7, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//326
    { "const QCPAxis::SelectableParts&", 0, Smoke::t_uint|Smoke::tf_stack },	//327
    { "const QCPBarData&", 10, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//328
    { "const QCPBars*", 11, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//329
    { "const QCPColorGradient&", 13, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//330
    { "const QCPColorMapData&", 15, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//331
    { "const QCPCurveData&", 19, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//332
    { "const QCPData&", 20, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//333
    { "const QCPDataMap::const_iterator&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//334
    { "const QCPFinancialData&", 22, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//335
    { "const QCPFinancialDataMap::const_iterator&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//336
    { "const QCPLineEnding&", 43, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//337
    { "const QCPRange", 48, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//338
    { "const QCPRange&", 48, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//339
    { "const QCPScatterStyle&", 49, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//340
    { "const QColor&", 53, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//341
    { "const QFlags<QCP::AntialiasedElement>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//342
    { "const QFlags<QCP::Interaction>", 0, Smoke::t_uint|Smoke::tf_stack|Smoke::tf_const },	//343
    { "const QFlags<QCP::Interaction>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//344
    { "const QFlags<QCP::PlottingHint>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//345
    { "const QFlags<QCPAxis::SelectablePart>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//346
    { "const QFlags<QCPLegend::SelectablePart>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//347
    { "const QFont&", 62, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//348
    { "const QHash<QCP::MarginSide,QCPMarginGroup*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//349
    { "const QHash<QCP::MarginSide,QList<QCPLayoutElement*> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//350
    { "const QHash<QCPAxis::AxisType,QList<QCPAxis*> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//351
    { "const QImage&", 65, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//352
    { "const QLatin1Char&", 69, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//353
    { "const QLineF&", 70, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//354
    { "const QList<QCPAbstractItem*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//355
    { "const QList<QCPAbstractPlottable*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//356
    { "const QList<QCPBars*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//357
    { "const QList<QCPGraph*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//358
    { "const QList<QCPItemAnchor*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//359
    { "const QList<QCPItemPosition*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//360
    { "const QList<QCPLayer*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//361
    { "const QList<QCPLayerable*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//362
    { "const QList<QCPLayoutElement*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//363
    { "const QList<QCPLayoutInset::InsetPlacement>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//364
    { "const QList<QFlags<Qt::AlignmentFlag> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//365
    { "const QList<QList<QCPLayoutElement*> >&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//366
    { "const QList<QRectF>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//367
    { "const QList<double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//368
    { "const QMap<double,QCPBarData>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//369
    { "const QMap<double,QCPCurveData>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//370
    { "const QMap<double,QCPData>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//371
    { "const QMap<double,QCPFinancialData>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//372
    { "const QMap<double,QColor>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//373
    { "const QMargins&", 71, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//374
    { "const QMetaObject&", 72, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//375
    { "const QMetaObject*", 72, Smoke::t_class|Smoke::tf_ptr|Smoke::tf_const },	//376
    { "const QPainterPath&", 80, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//377
    { "const QPalette&", 81, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//378
    { "const QPen&", 82, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//379
    { "const QPixmap&", 83, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//380
    { "const QPoint&", 84, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//381
    { "const QPointF", 85, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//382
    { "const QPointF&", 85, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//383
    { "const QPointer<QCPAxis>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//384
    { "const QPointer<QCPAxisRect>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//385
    { "const QPointer<QCPBars>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//386
    { "const QPointer<QCPColorScale>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//387
    { "const QPointer<QCPColorScaleAxisRectPrivate>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//388
    { "const QPointer<QCPGraph>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//389
    { "const QPointer<QCPLayerable>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//390
    { "const QPointer<QCPLayoutElement>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//391
    { "const QPolygonF", 86, Smoke::t_class|Smoke::tf_stack|Smoke::tf_const },	//392
    { "const QRect&", 87, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//393
    { "const QRectF&", 88, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//394
    { "const QRegExp&", 89, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//395
    { "const QSet<QCPItemPosition*>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//396
    { "const QSize&", 92, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//397
    { "const QStack<bool>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//398
    { "const QString", 0, Smoke::t_voidp|Smoke::tf_stack|Smoke::tf_const },	//399
    { "const QString&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//400
    { "const QStringList*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//401
    { "const QVariant&", 97, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//402
    { "const QVector2D&", 98, Smoke::t_class|Smoke::tf_ref|Smoke::tf_const },	//403
    { "const QVector<QPointF>*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//404
    { "const QVector<QString>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//405
    { "const QVector<double>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//406
    { "const QVector<unsigned int>&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//407
    { "const Qt::TimeSpec&", 0, Smoke::t_enum|Smoke::tf_ref|Smoke::tf_const },	//408
    { "const char*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//409
    { "const double", 0, Smoke::t_double|Smoke::tf_stack|Smoke::tf_const },	//410
    { "const double&", 0, Smoke::t_voidp|Smoke::tf_ref|Smoke::tf_const },	//411
    { "const double*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//412
    { "const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//413
    { "double", 0, Smoke::t_double|Smoke::tf_stack },	//414
    { "double&", 0, Smoke::t_voidp|Smoke::tf_ref },	//415
    { "double*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//416
    { "int", 0, Smoke::t_int|Smoke::tf_stack },	//417
    { "int&", 0, Smoke::t_voidp|Smoke::tf_ref },	//418
    { "int*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//419
    { "size_t", 0, Smoke::t_ulong|Smoke::tf_stack },	//420
    { "unsigned int", 0, Smoke::t_uint|Smoke::tf_stack },	//421
    { "unsigned int*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//422
    { "void*", 0, Smoke::t_voidp|Smoke::tf_ptr },	//423
    { "void**", 0, Smoke::t_voidp|Smoke::tf_ptr },	//424
    { "volatile const void*", 0, Smoke::t_voidp|Smoke::tf_ptr|Smoke::tf_const },	//425
};

static Smoke::Index argumentList[] = {
    0,	//0  (void)
    409, 0,	//1  const char*
    409, 409, 0,	//3  const char*, const char*
    409, 409, 417, 0,	//6  const char*, const char*, int
    184, 417, 424, 0,	//10  QMetaObject::Call, int, void**
    114, 0,	//14  QCustomPlot*
    318, 0,	//16  bool
    23, 0,	//18  QCPAxisRect*
    383, 318, 231, 0,	//20  const QPointF&, bool, QVariant*
    400, 0,	//24  const QString&
    97, 0,	//26  QCPPainter*
    185, 318, 402, 320, 0,	//28  QMouseEvent*, bool, const QVariant&, bool*
    320, 0,	//33  bool*
    417, 0,	//35  int
    383, 383, 383, 0,	//37  const QPointF&, const QPointF&, const QPointF&
    394, 383, 318, 0,	//41  const QRectF&, const QPointF&, bool
    400, 417, 0,	//45  const QString&, int
    383, 318, 0,	//48  const QPointF&, bool
    385, 0,	//51  const QPointer<QCPAxisRect>&
    360, 0,	//53  const QList<QCPItemPosition*>&
    359, 0,	//55  const QList<QCPItemAnchor*>&
    89, 0,	//57  QCPLegend*
    348, 0,	//59  const QFont&
    341, 0,	//61  const QColor&
    14, 14, 0,	//63  QCPAxis*, QCPAxis*
    379, 0,	//66  const QPen&
    323, 0,	//68  const QBrush&
    14, 0,	//70  QCPAxis*
    97, 394, 0,	//72  QCPPainter*, const QRectF&
    319, 12, 0,	//75  bool&, QCPAbstractPlottable::SignDomain
    414, 414, 415, 415, 0,	//78  double, double, double&, double&
    414, 414, 0,	//83  double, double
    383, 415, 415, 0,	//86  const QPointF&, double&, double&
    319, 0,	//90  bool&
    384, 0,	//92  const QPointer<QCPAxis>&
    23, 15, 0,	//94  QCPAxisRect*, QCPAxis::AxisType
    18, 0,	//97  QCPAxis::ScaleType
    414, 0,	//99  double
    339, 0,	//101  const QCPRange&
    414, 414, 245, 0,	//103  double, double, Qt::AlignmentFlag
    17, 0,	//107  QCPAxis::LabelType
    16, 0,	//109  QCPAxis::LabelSide
    408, 0,	//111  const Qt::TimeSpec&
    406, 0,	//113  const QVector<double>&
    405, 0,	//115  const QVector<QString>&
    417, 417, 0,	//117  int, int
    346, 0,	//120  const QFlags<QCPAxis::SelectablePart>&
    337, 0,	//122  const QCPLineEnding&
    326, 414, 0,	//124  const QCPAxis*, double
    383, 0,	//127  const QPointF&
    7, 0,	//129  QCP::MarginSide
    15, 0,	//131  QCPAxis::AxisType
    339, 339, 0,	//133  const QCPRange&, const QCPRange&
    327, 0,	//136  const QCPAxis::SelectableParts&
    418, 418, 0,	//138  int&, int&
    326, 0,	//141  const QCPAxis*
    291, 0,	//143  Qt::Orientation
    128, 0,	//145  QFlags<QCPAxis::SelectablePart>
    305, 0,	//147  Qt::TimeSpec
    353, 0,	//149  const QLatin1Char&
    59, 0,	//151  QCPGrid*
    21, 0,	//153  QCPAxisPainterPrivate*
    114, 318, 0,	//155  QCustomPlot*, bool
    380, 0,	//158  const QPixmap&
    380, 318, 250, 0,	//160  const QPixmap&, bool, Qt::AspectRatioMode
    250, 0,	//164  Qt::AspectRatioMode
    132, 0,	//166  QFlags<Qt::Orientation>
    15, 417, 0,	//168  QCPAxis::AxisType, int
    127, 0,	//171  QFlags<QCPAxis::AxisType>
    15, 14, 0,	//173  QCPAxis::AxisType, QCPAxis*
    85, 0,	//176  QCPLayoutElement::UpdatePhase
    185, 0,	//178  QMouseEvent*
    243, 0,	//180  QWheelEvent*
    380, 318, 0,	//182  const QPixmap&, bool
    87, 0,	//185  QCPLayoutInset*
    123, 0,	//187  QFlags<QCP::AntialiasedElement>
    381, 0,	//189  const QPoint&
    351, 0,	//191  const QHash<QCPAxis::AxisType,QList<QCPAxis*> >&
    328, 0,	//193  const QCPBarData&
    29, 0,	//195  QCPBars::WidthType
    30, 0,	//197  QCPBarsGroup*
    175, 318, 0,	//199  QMap<double,QCPBarData>*, bool
    406, 406, 0,	//202  const QVector<double>&, const QVector<double>&
    28, 0,	//205  QCPBars*
    369, 0,	//207  const QMap<double,QCPBarData>&
    26, 26, 0,	//209  QCPBarDataMap::const_iterator&, QCPBarDataMap::const_iterator&
    414, 415, 415, 0,	//212  double, double&, double&
    414, 318, 0,	//216  double, bool
    28, 28, 0,	//219  QCPBars*, QCPBars*
    175, 0,	//222  QMap<double,QCPBarData>*
    386, 0,	//224  const QPointer<QCPBars>&
    31, 0,	//226  QCPBarsGroup::SpacingType
    417, 28, 0,	//228  int, QCPBars*
    329, 414, 0,	//231  const QCPBars*, double
    357, 0,	//234  const QList<QCPBars*>&
    36, 0,	//236  QCPColorGradient::GradientPreset
    330, 0,	//238  const QCPColorGradient&
    373, 0,	//240  const QMap<double,QColor>&
    414, 341, 0,	//242  double, const QColor&
    35, 0,	//245  QCPColorGradient::ColorInterpolation
    412, 339, 422, 417, 417, 318, 0,	//247  const double*, const QCPRange&, unsigned int*, int, int, bool
    414, 339, 318, 0,	//254  double, const QCPRange&, bool
    412, 339, 422, 417, 0,	//258  const double*, const QCPRange&, unsigned int*, int
    412, 339, 422, 417, 417, 0,	//263  const double*, const QCPRange&, unsigned int*, int, int
    414, 339, 0,	//269  double, const QCPRange&
    407, 0,	//272  const QVector<unsigned int>&
    39, 318, 0,	//274  QCPColorMapData*, bool
    41, 0,	//277  QCPColorScale*
    310, 397, 0,	//279  Qt::TransformationMode, const QSize&
    101, 0,	//282  QCPRange
    32, 0,	//284  QCPColorGradient
    39, 0,	//286  QCPColorMapData*
    310, 0,	//288  Qt::TransformationMode
    387, 0,	//290  const QPointer<QCPColorScale>&
    352, 0,	//292  const QImage&
    417, 417, 339, 339, 0,	//294  int, int, const QCPRange&, const QCPRange&
    331, 0,	//299  const QCPColorMapData&
    414, 414, 414, 0,	//301  double, double, double
    417, 417, 414, 0,	//305  int, int, double
    414, 414, 419, 419, 0,	//309  double, double, int*, int*
    417, 417, 416, 416, 0,	//314  int, int, double*, double*
    416, 0,	//319  double*
    388, 0,	//321  const QPointer<QCPColorScaleAxisRectPrivate>&
    176, 318, 0,	//323  QMap<double,QCPCurveData>*, bool
    406, 406, 406, 0,	//326  const QVector<double>&, const QVector<double>&, const QVector<double>&
    340, 0,	//330  const QCPScatterStyle&
    44, 0,	//332  QCPCurve::LineStyle
    370, 0,	//334  const QMap<double,QCPCurveData>&
    332, 0,	//336  const QCPCurveData&
    97, 404, 0,	//338  QCPPainter*, const QVector<QPointF>*
    235, 0,	//341  QVector<QPointF>*
    414, 414, 414, 414, 414, 414, 0,	//343  double, double, double, double, double, double
    417, 414, 414, 414, 414, 414, 414, 414, 414, 0,	//350  int, double, double, double, double, double, double, double, double
    417, 417, 414, 414, 414, 414, 414, 414, 414, 414, 0,	//360  int, int, double, double, double, double, double, double, double, double
    414, 414, 414, 414, 414, 414, 414, 414, 201, 201, 0,	//371  double, double, double, double, double, double, double, double, QPointF&, QPointF&
    417, 417, 414, 414, 414, 414, 234, 234, 0,	//382  int, int, double, double, double, double, QVector<QPointF>&, QVector<QPointF>&
    176, 0,	//391  QMap<double,QCPCurveData>*
    333, 0,	//393  const QCPData&
    179, 318, 0,	//395  QMap<double,QCPFinancialData>*, bool
    406, 406, 406, 406, 406, 0,	//398  const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&
    51, 0,	//404  QCPFinancial::ChartStyle
    372, 0,	//406  const QMap<double,QCPFinancialData>&
    335, 0,	//408  const QCPFinancialData&
    414, 414, 414, 414, 414, 0,	//410  double, double, double, double, double
    406, 406, 414, 414, 0,	//416  const QVector<double>&, const QVector<double>&, double, double
    97, 336, 336, 0,	//421  QCPPainter*, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&
    383, 336, 336, 0,	//425  const QPointF&, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&
    54, 54, 0,	//429  QCPFinancialDataMap::const_iterator&, QCPFinancialDataMap::const_iterator&
    179, 0,	//432  QMap<double,QCPFinancialData>*
    406, 406, 414, 0,	//434  const QVector<double>&, const QVector<double>&, double
    177, 318, 0,	//438  QMap<double,QCPData>*, bool
    406, 406, 406, 406, 0,	//441  const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&
    406, 406, 406, 406, 406, 406, 0,	//446  const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&
    58, 0,	//453  QCPGraph::LineStyle
    57, 0,	//455  QCPGraph::ErrorType
    56, 0,	//457  QCPGraph*
    371, 0,	//459  const QMap<double,QCPData>&
    318, 318, 0,	//461  bool, bool
    319, 12, 318, 0,	//464  bool&, QCPAbstractPlottable::SignDomain, bool
    97, 235, 0,	//468  QCPPainter*, QVector<QPointF>*
    97, 232, 0,	//471  QCPPainter*, QVector<QCPData>*
    232, 232, 0,	//474  QVector<QCPData>*, QVector<QCPData>*
    235, 232, 0,	//477  QVector<QPointF>*, QVector<QCPData>*
    232, 0,	//480  QVector<QCPData>*
    97, 414, 414, 333, 0,	//482  QCPPainter*, double, double, const QCPData&
    49, 49, 0,	//487  QCPDataMap::const_iterator&, QCPDataMap::const_iterator&
    334, 334, 417, 0,	//490  const QCPDataMap::const_iterator&, const QCPDataMap::const_iterator&, int
    404, 0,	//494  const QVector<QPointF>*
    404, 414, 0,	//496  const QVector<QPointF>*, double
    177, 0,	//499  QMap<double,QCPData>*
    389, 0,	//501  const QPointer<QCPGraph>&
    114, 9, 399, 417, 0,	//503  QCustomPlot*, QCPAbstractItem*, const QString, int
    70, 0,	//508  QCPItemPosition*
    114, 9, 399, 0,	//510  QCustomPlot*, QCPAbstractItem*, const QString
    9, 0,	//514  QCPAbstractItem*
    396, 0,	//516  const QSet<QCPItemPosition*>&
    63, 0,	//518  QCPItemBracket::BracketStyle
    403, 403, 393, 0,	//520  const QVector2D&, const QVector2D&, const QRect&
    318, 250, 310, 0,	//524  bool, Qt::AspectRatioMode, Qt::TransformationMode
    211, 318, 318, 0,	//528  QRect, bool, bool
    320, 320, 0,	//532  bool*, bool*
    318, 250, 0,	//535  bool, Qt::AspectRatioMode
    211, 0,	//538  QRect
    211, 318, 0,	//540  QRect, bool
    71, 0,	//543  QCPItemPosition::PositionType
    60, 318, 0,	//545  QCPItemAnchor*, bool
    60, 0,	//548  QCPItemAnchor*
    403, 403, 403, 0,	//550  const QVector2D&, const QVector2D&, const QVector2D&
    131, 0,	//554  QFlags<Qt::AlignmentFlag>
    374, 0,	//556  const QMargins&
    383, 394, 131, 0,	//558  const QPointF&, const QRectF&, QFlags<Qt::AlignmentFlag>
    78, 0,	//562  QCPItemTracer::TracerStyle
    114, 400, 0,	//564  QCustomPlot*, const QString&
    81, 318, 0,	//567  QCPLayerable*, bool
    81, 0,	//570  QCPLayerable*
    362, 0,	//572  const QList<QCPLayerable*>&
    114, 222, 81, 0,	//574  QCustomPlot*, QString, QCPLayerable*
    79, 0,	//578  QCPLayer*
    79, 318, 0,	//580  QCPLayer*, bool
    97, 318, 5, 0,	//583  QCPPainter*, bool, QCP::AntialiasedElement
    114, 222, 0,	//587  QCustomPlot*, QString
    390, 0,	//590  const QPointer<QCPLayerable>&
    84, 0,	//592  QCPLayoutElement*
    240, 240, 238, 417, 0,	//594  QVector<int>, QVector<int>, QVector<double>, int
    393, 0,	//599  const QRect&
    125, 0,	//601  QFlags<QCP::MarginSide>
    397, 0,	//603  const QSize&
    125, 96, 0,	//605  QFlags<QCP::MarginSide>, QCPMarginGroup*
    82, 0,	//608  QCPLayout*
    349, 0,	//610  const QHash<QCP::MarginSide,QCPMarginGroup*>&
    417, 414, 0,	//612  int, double
    368, 0,	//615  const QList<double>&
    417, 417, 84, 0,	//617  int, int, QCPLayoutElement*
    241, 241, 0,	//621  QVector<int>*, QVector<int>*
    366, 0,	//624  const QList<QList<QCPLayoutElement*> >&
    417, 88, 0,	//626  int, QCPLayoutInset::InsetPlacement
    417, 131, 0,	//629  int, QFlags<Qt::AlignmentFlag>
    417, 394, 0,	//632  int, const QRectF&
    84, 131, 0,	//635  QCPLayoutElement*, QFlags<Qt::AlignmentFlag>
    84, 394, 0,	//638  QCPLayoutElement*, const QRectF&
    363, 0,	//641  const QList<QCPLayoutElement*>&
    364, 0,	//643  const QList<QCPLayoutInset::InsetPlacement>&
    365, 0,	//645  const QList<QFlags<Qt::AlignmentFlag> >&
    367, 0,	//647  const QList<QRectF>&
    347, 0,	//649  const QFlags<QCPLegend::SelectablePart>&
    325, 0,	//651  const QCPAbstractPlottable*
    10, 0,	//653  QCPAbstractLegendItem*
    91, 0,	//655  QCPLegend::SelectableParts
    129, 0,	//657  QFlags<QCPLegend::SelectablePart>
    95, 414, 414, 318, 0,	//659  QCPLineEnding::EndingStyle, double, double, bool
    95, 0,	//664  QCPLineEnding::EndingStyle
    97, 403, 403, 0,	//666  QCPPainter*, const QVector2D&, const QVector2D&
    97, 403, 414, 0,	//670  QCPPainter*, const QVector2D&, double
    95, 414, 0,	//674  QCPLineEnding::EndingStyle, double
    95, 414, 414, 0,	//677  QCPLineEnding::EndingStyle, double, double
    7, 84, 0,	//681  QCP::MarginSide, QCPLayoutElement*
    350, 0,	//684  const QHash<QCP::MarginSide,QList<QCPLayoutElement*> >&
    188, 0,	//686  QPaintDevice*
    98, 318, 0,	//688  QCPPainter::PainterMode, bool
    130, 0,	//691  QFlags<QCPPainter::PainterMode>
    294, 0,	//693  Qt::PenStyle
    354, 0,	//695  const QLineF&
    383, 383, 0,	//697  const QPointF&, const QPointF&
    98, 0,	//700  QCPPainter::PainterMode
    398, 0,	//702  const QStack<bool>&
    89, 11, 0,	//704  QCPLegend*, QCPAbstractPlottable*
    11, 0,	//707  QCPAbstractPlottable*
    411, 0,	//709  const double&
    107, 414, 0,	//711  QCPScatterStyle::ScatterShape, double
    107, 341, 414, 0,	//714  QCPScatterStyle::ScatterShape, const QColor&, double
    107, 341, 341, 414, 0,	//718  QCPScatterStyle::ScatterShape, const QColor&, const QColor&, double
    107, 379, 323, 414, 0,	//723  QCPScatterStyle::ScatterShape, const QPen&, const QBrush&, double
    377, 379, 323, 414, 0,	//728  const QPainterPath&, const QPen&, const QBrush&, double
    107, 0,	//733  QCPScatterStyle::ScatterShape
    377, 0,	//735  const QPainterPath&
    97, 379, 0,	//737  QCPPainter*, const QPen&
    97, 200, 0,	//740  QCPPainter*, QPointF
    97, 414, 414, 0,	//743  QCPPainter*, double, double
    377, 379, 0,	//747  const QPainterPath&, const QPen&
    377, 379, 323, 0,	//750  const QPainterPath&, const QPen&, const QBrush&
    97, 214, 0,	//754  QCPPainter*, QRectF*
    244, 0,	//757  QWidget*
    342, 0,	//759  const QFlags<QCP::AntialiasedElement>&
    5, 318, 0,	//761  QCP::AntialiasedElement, bool
    344, 0,	//764  const QFlags<QCP::Interaction>&
    324, 318, 0,	//766  const QCP::Interaction&, bool
    345, 0,	//769  const QFlags<QCP::PlottingHint>&
    8, 318, 0,	//771  QCP::PlottingHint, bool
    284, 0,	//774  Qt::KeyboardModifier
    400, 79, 115, 0,	//776  const QString&, QCPLayer*, QCustomPlot::LayerInsertMode
    79, 79, 115, 0,	//780  QCPLayer*, QCPLayer*, QCustomPlot::LayerInsertMode
    400, 318, 417, 417, 400, 400, 0,	//784  const QString&, bool, int, int, const QString&, const QString&
    400, 417, 417, 414, 417, 0,	//791  const QString&, int, int, double, int
    400, 417, 417, 414, 0,	//797  const QString&, int, int, double
    400, 417, 417, 414, 409, 417, 0,	//802  const QString&, int, int, double, const char*, int
    97, 417, 417, 0,	//809  QCPPainter*, int, int
    116, 0,	//813  QCustomPlot::RefreshPriority
    11, 185, 0,	//815  QCPAbstractPlottable*, QMouseEvent*
    9, 185, 0,	//818  QCPAbstractItem*, QMouseEvent*
    14, 19, 185, 0,	//821  QCPAxis*, QCPAxis::SelectablePart, QMouseEvent*
    89, 10, 185, 0,	//825  QCPLegend*, QCPAbstractLegendItem*, QMouseEvent*
    185, 99, 0,	//829  QMouseEvent*, QCPPlotTitle*
    191, 0,	//832  QPaintEvent*
    216, 0,	//834  QResizeEvent*
    5, 0,	//836  QCP::AntialiasedElement
    324, 0,	//838  const QCP::Interaction&
    8, 0,	//840  QCP::PlottingHint
    400, 79, 0,	//842  const QString&, QCPLayer*
    79, 79, 0,	//845  QCPLayer*, QCPLayer*
    400, 318, 0,	//848  const QString&, bool
    400, 318, 417, 0,	//851  const QString&, bool, int
    400, 318, 417, 417, 0,	//855  const QString&, bool, int, int
    400, 318, 417, 417, 400, 0,	//860  const QString&, bool, int, int, const QString&
    400, 417, 417, 0,	//866  const QString&, int, int
    400, 417, 417, 414, 409, 0,	//870  const QString&, int, int, double, const char*
    97, 417, 0,	//876  QCPPainter*, int
    86, 0,	//879  QCPLayoutGrid*
    356, 0,	//881  const QList<QCPAbstractPlottable*>&
    358, 0,	//883  const QList<QCPGraph*>&
    355, 0,	//885  const QList<QCPAbstractItem*>&
    361, 0,	//887  const QList<QCPLayer*>&
    124, 0,	//889  QFlags<QCP::Interaction>
    126, 0,	//891  QFlags<QCP::PlottingHint>
    391, 0,	//893  const QPointer<QCPLayoutElement>&
    409, 409, 420, 0,	//895  const char*, const char*, size_t
    228, 0,	//899  QTextStream&
    19, 417, 0,	//901  QCPAxis::SelectablePart, int
    6, 417, 0,	//904  QCP::Interaction, int
    413, 413, 420, 0,	//907  const void*, const void*, size_t
    321, 409, 0,	//911  char*, const char*
    339, 414, 0,	//914  const QCPRange&, double
    423, 413, 420, 0,	//917  void*, const void*, size_t
    19, 19, 0,	//921  QCPAxis::SelectablePart, QCPAxis::SelectablePart
    7, 125, 0,	//924  QCP::MarginSide, QFlags<QCP::MarginSide>
    5, 5, 0,	//927  QCP::AntialiasedElement, QCP::AntialiasedElement
    15, 127, 0,	//930  QCPAxis::AxisType, QFlags<QCPAxis::AxisType>
    5, 123, 0,	//933  QCP::AntialiasedElement, QFlags<QCP::AntialiasedElement>
    98, 417, 0,	//936  QCPPainter::PainterMode, int
    8, 8, 0,	//939  QCP::PlottingHint, QCP::PlottingHint
    321, 409, 420, 0,	//942  char*, const char*, size_t
    98, 130, 0,	//946  QCPPainter::PainterMode, QFlags<QCPPainter::PainterMode>
    8, 417, 0,	//949  QCP::PlottingHint, int
    423, 417, 420, 0,	//952  void*, int, size_t
    6, 124, 0,	//956  QCP::Interaction, QFlags<QCP::Interaction>
    8, 126, 0,	//959  QCP::PlottingHint, QFlags<QCP::PlottingHint>
    90, 417, 0,	//962  QCPLegend::SelectablePart, int
    90, 90, 0,	//965  QCPLegend::SelectablePart, QCPLegend::SelectablePart
    98, 98, 0,	//968  QCPPainter::PainterMode, QCPPainter::PainterMode
    423, 413, 417, 420, 0,	//971  void*, const void*, int, size_t
    90, 129, 0,	//976  QCPLegend::SelectablePart, QFlags<QCPLegend::SelectablePart>
    15, 15, 0,	//979  QCPAxis::AxisType, QCPAxis::AxisType
    7, 417, 0,	//982  QCP::MarginSide, int
    321, 409, 322, 0,	//985  char*, const char*, char**
    7, 7, 0,	//989  QCP::MarginSide, QCP::MarginSide
    19, 128, 0,	//992  QCPAxis::SelectablePart, QFlags<QCPAxis::SelectablePart>
    6, 6, 0,	//995  QCP::Interaction, QCP::Interaction
    5, 417, 0,	//998  QCP::AntialiasedElement, int
    122, 0,	//1001  QEvent*
    187, 122, 0,	//1003  QObject*, QEvent*
    229, 0,	//1006  QTimerEvent*
    109, 0,	//1008  QChildEvent*
    144, 0,	//1010  QKeyEvent*
    133, 0,	//1012  QFocusEvent*
    186, 0,	//1014  QMoveEvent*
    110, 0,	//1016  QCloseEvent*
    113, 0,	//1018  QContextMenuEvent*
    227, 0,	//1020  QTabletEvent*
    1, 0,	//1022  QActionEvent*
    117, 0,	//1024  QDragEnterEvent*
    119, 0,	//1026  QDragMoveEvent*
    118, 0,	//1028  QDragLeaveEvent*
    121, 0,	//1030  QDropEvent*
    218, 0,	//1032  QShowEvent*
    140, 0,	//1034  QHideEvent*
    317, 0,	//1036  _XEvent*
    189, 0,	//1038  QPaintDevice::PaintDeviceMetric
    143, 0,	//1040  QInputMethodEvent*
    279, 0,	//1042  Qt::InputMethodQuery
    226, 0,	//1044  QStyle&
    378, 0,	//1046  const QPalette&
};

// Raw list of all methods, using munged names
static const char *methodNames[] = {
    "",	//0
    "DrawChildren",	//1
    "DrawWindowBackground",	//2
    "IgnoreMask",	//3
    "QCPAbstractItem",	//4
    "QCPAbstractItem#",	//5
    "QCPAbstractLegendItem",	//6
    "QCPAbstractLegendItem#",	//7
    "QCPAbstractPlottable",	//8
    "QCPAbstractPlottable##",	//9
    "QCPAxis",	//10
    "QCPAxis#$",	//11
    "QCPAxisRect",	//12
    "QCPAxisRect#",	//13
    "QCPAxisRect#$",	//14
    "QCPBarData",	//15
    "QCPBarData#",	//16
    "QCPBarData$$",	//17
    "QCPBars",	//18
    "QCPBars##",	//19
    "QCPBarsGroup",	//20
    "QCPBarsGroup#",	//21
    "QCPColorGradient",	//22
    "QCPColorGradient#",	//23
    "QCPColorGradient$",	//24
    "QCPColorMap",	//25
    "QCPColorMap##",	//26
    "QCPColorMapData",	//27
    "QCPColorMapData#",	//28
    "QCPColorMapData$$##",	//29
    "QCPColorScale",	//30
    "QCPColorScale#",	//31
    "QCPCurve",	//32
    "QCPCurve##",	//33
    "QCPCurveData",	//34
    "QCPCurveData#",	//35
    "QCPCurveData$$$",	//36
    "QCPData",	//37
    "QCPData#",	//38
    "QCPData$$",	//39
    "QCPFinancial",	//40
    "QCPFinancial##",	//41
    "QCPFinancialData",	//42
    "QCPFinancialData#",	//43
    "QCPFinancialData$$$$$",	//44
    "QCPGraph",	//45
    "QCPGraph##",	//46
    "QCPGrid",	//47
    "QCPGrid#",	//48
    "QCPItemAnchor",	//49
    "QCPItemAnchor##$",	//50
    "QCPItemAnchor##$$",	//51
    "QCPItemBracket",	//52
    "QCPItemBracket#",	//53
    "QCPItemCurve",	//54
    "QCPItemCurve#",	//55
    "QCPItemEllipse",	//56
    "QCPItemEllipse#",	//57
    "QCPItemLine",	//58
    "QCPItemLine#",	//59
    "QCPItemPixmap",	//60
    "QCPItemPixmap#",	//61
    "QCPItemPosition",	//62
    "QCPItemPosition##$",	//63
    "QCPItemRect",	//64
    "QCPItemRect#",	//65
    "QCPItemStraightLine",	//66
    "QCPItemStraightLine#",	//67
    "QCPItemText",	//68
    "QCPItemText#",	//69
    "QCPItemTracer",	//70
    "QCPItemTracer#",	//71
    "QCPLayer",	//72
    "QCPLayer#$",	//73
    "QCPLayerable",	//74
    "QCPLayerable#",	//75
    "QCPLayerable#$",	//76
    "QCPLayerable#$#",	//77
    "QCPLayout",	//78
    "QCPLayoutElement",	//79
    "QCPLayoutElement#",	//80
    "QCPLayoutGrid",	//81
    "QCPLayoutInset",	//82
    "QCPLegend",	//83
    "QCPLineEnding",	//84
    "QCPLineEnding#",	//85
    "QCPLineEnding$",	//86
    "QCPLineEnding$$",	//87
    "QCPLineEnding$$$",	//88
    "QCPLineEnding$$$$",	//89
    "QCPMarginGroup",	//90
    "QCPMarginGroup#",	//91
    "QCPPainter",	//92
    "QCPPainter#",	//93
    "QCPPlotTitle",	//94
    "QCPPlotTitle#",	//95
    "QCPPlotTitle#$",	//96
    "QCPPlottableLegendItem",	//97
    "QCPPlottableLegendItem##",	//98
    "QCPRange",	//99
    "QCPRange#",	//100
    "QCPRange$$",	//101
    "QCPScatterStyle",	//102
    "QCPScatterStyle#",	//103
    "QCPScatterStyle##",	//104
    "QCPScatterStyle###",	//105
    "QCPScatterStyle###$",	//106
    "QCPScatterStyle$",	//107
    "QCPScatterStyle$##$",	//108
    "QCPScatterStyle$#$",	//109
    "QCPScatterStyle$$",	//110
    "QCPStatisticalBox",	//111
    "QCPStatisticalBox##",	//112
    "QCustomPlot",	//113
    "QCustomPlot#",	//114
    "actionEvent",	//115
    "adaptiveSampling",	//116
    "addAxes",	//117
    "addAxes$",	//118
    "addAxis",	//119
    "addAxis$",	//120
    "addAxis$#",	//121
    "addChild",	//122
    "addChild#$",	//123
    "addChild$#",	//124
    "addChildX",	//125
    "addChildX#",	//126
    "addChildY",	//127
    "addChildY#",	//128
    "addData",	//129
    "addData#",	//130
    "addData$$",	//131
    "addData$$$",	//132
    "addData$$$$$",	//133
    "addData?",	//134
    "addData??",	//135
    "addData???",	//136
    "addData?????",	//137
    "addElement",	//138
    "addElement##",	//139
    "addElement#$",	//140
    "addElement$$#",	//141
    "addFillBasePoints",	//142
    "addFillBasePoints?",	//143
    "addGraph",	//144
    "addGraph#",	//145
    "addGraph##",	//146
    "addItem",	//147
    "addItem#",	//148
    "addLayer",	//149
    "addLayer$",	//150
    "addLayer$#",	//151
    "addLayer$#$",	//152
    "addPlottable",	//153
    "addPlottable#",	//154
    "addToLegend",	//155
    "adoptElement",	//156
    "adoptElement#",	//157
    "afterReplot",	//158
    "aiBottom",	//159
    "aiBottomLeft",	//160
    "aiBottomLeftRim",	//161
    "aiBottomRight",	//162
    "aiBottomRightRim",	//163
    "aiCenter",	//164
    "aiLeft",	//165
    "aiRight",	//166
    "aiTop",	//167
    "aiTopLeft",	//168
    "aiTopLeftRim",	//169
    "aiTopRight",	//170
    "aiTopRightRim",	//171
    "anchor",	//172
    "anchor$",	//173
    "anchorPixelPoint",	//174
    "anchorPixelPoint$",	//175
    "anchors",	//176
    "antialiased",	//177
    "antialiasedElements",	//178
    "antialiasedErrorBars",	//179
    "antialiasedFill",	//180
    "antialiasedScatters",	//181
    "antialiasedSubGrid",	//182
    "antialiasedZeroLine",	//183
    "antialiasing",	//184
    "append",	//185
    "append#",	//186
    "applyAntialiasingHint",	//187
    "applyAntialiasingHint#$$",	//188
    "applyDefaultAntialiasingHint",	//189
    "applyDefaultAntialiasingHint#",	//190
    "applyErrorBarsAntialiasingHint",	//191
    "applyErrorBarsAntialiasingHint#",	//192
    "applyFillAntialiasingHint",	//193
    "applyFillAntialiasingHint#",	//194
    "applyScattersAntialiasingHint",	//195
    "applyScattersAntialiasingHint#",	//196
    "applyTo",	//197
    "applyTo##",	//198
    "aspectRatioMode",	//199
    "atBottom",	//200
    "atLeft",	//201
    "atRight",	//202
    "atTop",	//203
    "autoAddPlottableToLegend",	//204
    "autoMargins",	//205
    "autoSubTicks",	//206
    "autoTickCount",	//207
    "autoTickLabels",	//208
    "autoTickStep",	//209
    "autoTicks",	//210
    "axes",	//211
    "axes$",	//212
    "axis",	//213
    "axis$",	//214
    "axis$$",	//215
    "axisClick",	//216
    "axisClick#$#",	//217
    "axisCount",	//218
    "axisCount$",	//219
    "axisDoubleClick",	//220
    "axisDoubleClick#$#",	//221
    "axisRect",	//222
    "axisRect$",	//223
    "axisRectCount",	//224
    "axisRects",	//225
    "axisRemoved",	//226
    "axisRemoved#",	//227
    "axisType",	//228
    "background",	//229
    "backgroundScaled",	//230
    "backgroundScaledMode",	//231
    "barAbove",	//232
    "barBelow",	//233
    "barWidth",	//234
    "bars",	//235
    "bars$",	//236
    "barsGroup",	//237
    "baseLog",	//238
    "baseLog$",	//239
    "basePen",	//240
    "basePow",	//241
    "basePow$",	//242
    "baseValue",	//243
    "beforeReplot",	//244
    "begin",	//245
    "begin#",	//246
    "bin",	//247
    "bin#",	//248
    "bom",	//249
    "bom#",	//250
    "borderPen",	//251
    "bottom",	//252
    "bottomLeft",	//253
    "bottomRight",	//254
    "boundingDistance",	//255
    "brush",	//256
    "brushNegative",	//257
    "brushPositive",	//258
    "bsCalligraphic",	//259
    "bsCurly",	//260
    "bsRound",	//261
    "bsSquare",	//262
    "calculateAutoMargin",	//263
    "calculateAutoMargin$",	//264
    "calculateAutoSubTickCount",	//265
    "calculateAutoSubTickCount$",	//266
    "calculateMargin",	//267
    "candlestickSelectTest",	//268
    "candlestickSelectTest#??",	//269
    "cell",	//270
    "cell$$",	//271
    "cellToCoord",	//272
    "cellToCoord$$$$",	//273
    "center",	//274
    "center#",	//275
    "changeEvent",	//276
    "channelFillGraph",	//277
    "chartStyle",	//278
    "childEvent",	//279
    "children",	//280
    "ciHSV",	//281
    "ciRGB",	//282
    "clear",	//283
    "clearColorStops",	//284
    "clearData",	//285
    "clearGraphs",	//286
    "clearItems",	//287
    "clearPlottables",	//288
    "clipAxisRect",	//289
    "clipRect",	//290
    "clipToAxisRect",	//291
    "close",	//292
    "closeEvent",	//293
    "color",	//294
    "color$#",	//295
    "color$#$",	//296
    "colorInterpolation",	//297
    "colorMaps",	//298
    "colorScale",	//299
    "colorStops",	//300
    "colorize",	//301
    "colorize$#$$",	//302
    "colorize$#$$$",	//303
    "colorize$#$$$$",	//304
    "columnCount",	//305
    "columnSpacing",	//306
    "columnStretchFactors",	//307
    "commonMargin",	//308
    "commonMargin$",	//309
    "connectBars",	//310
    "connectBars##",	//311
    "connectNotify",	//312
    "contains",	//313
    "contains#",	//314
    "contains$",	//315
    "contextMenuEvent",	//316
    "coordToCell",	//317
    "coordToCell$$$$",	//318
    "coordToPixel",	//319
    "coordToPixel$",	//320
    "coords",	//321
    "coordsToPixels",	//322
    "coordsToPixels$$",	//323
    "coordsToPixels$$$$",	//324
    "countDataInBounds",	//325
    "countDataInBounds??$",	//326
    "createAnchor",	//327
    "createAnchor$$",	//328
    "createPosition",	//329
    "createPosition$",	//330
    "csCandlestick",	//331
    "csOhlc",	//332
    "currentLayer",	//333
    "customEvent",	//334
    "customPath",	//335
    "data",	//336
    "data$$",	//337
    "dataBounds",	//338
    "dataRange",	//339
    "dataRangeChanged",	//340
    "dataRangeChanged#",	//341
    "dataScaleType",	//342
    "dataScaleTypeChanged",	//343
    "dataScaleTypeChanged$",	//344
    "dateTimeFormat",	//345
    "dateTimeSpec",	//346
    "dec",	//347
    "dec#",	//348
    "deselectAll",	//349
    "deselectEvent",	//350
    "deselectEvent$",	//351
    "devType",	//352
    "disconnectNotify",	//353
    "distSqrToLine",	//354
    "distSqrToLine###",	//355
    "distToStraightLine",	//356
    "distToStraightLine###",	//357
    "dragEnterEvent",	//358
    "dragLeaveEvent",	//359
    "dragMoveEvent",	//360
    "draw",	//361
    "draw#",	//362
    "draw###",	//363
    "draw##$",	//364
    "drawBackground",	//365
    "drawBackground#",	//366
    "drawCandlestickPlot",	//367
    "drawCandlestickPlot#??",	//368
    "drawError",	//369
    "drawError#$$#",	//370
    "drawFill",	//371
    "drawFill#?",	//372
    "drawGridLines",	//373
    "drawGridLines#",	//374
    "drawImpulsePlot",	//375
    "drawImpulsePlot#?",	//376
    "drawLegendIcon",	//377
    "drawLegendIcon##",	//378
    "drawLine",	//379
    "drawLine#",	//380
    "drawLine##",	//381
    "drawLinePlot",	//382
    "drawLinePlot#?",	//383
    "drawMedian",	//384
    "drawMedian#",	//385
    "drawOhlcPlot",	//386
    "drawOhlcPlot#??",	//387
    "drawOutliers",	//388
    "drawOutliers#",	//389
    "drawQuartileBox",	//390
    "drawQuartileBox#",	//391
    "drawQuartileBox##",	//392
    "drawScatterPlot",	//393
    "drawScatterPlot#?",	//394
    "drawShape",	//395
    "drawShape##",	//396
    "drawShape#$$",	//397
    "drawSubGridLines",	//398
    "drawSubGridLines#",	//399
    "drawWhiskers",	//400
    "drawWhiskers#",	//401
    "dropEvent",	//402
    "element",	//403
    "element$$",	//404
    "elementAt",	//405
    "elementAt$",	//406
    "elementCount",	//407
    "elements",	//408
    "elements$",	//409
    "enabledChange",	//410
    "endl",	//411
    "endl#",	//412
    "enterEvent",	//413
    "errorBarSize",	//414
    "errorBarSkipSymbol",	//415
    "errorPen",	//416
    "errorType",	//417
    "esBar",	//418
    "esDiamond",	//419
    "esDisc",	//420
    "esFlatArrow",	//421
    "esHalfBar",	//422
    "esLineArrow",	//423
    "esNone",	//424
    "esSkewedBar",	//425
    "esSpikeArrow",	//426
    "esSquare",	//427
    "etBoth",	//428
    "etKey",	//429
    "etNone",	//430
    "etValue",	//431
    "event",	//432
    "eventFilter",	//433
    "expand",	//434
    "expand#",	//435
    "expandTo",	//436
    "expandTo$$",	//437
    "expanded",	//438
    "expanded#",	//439
    "fill",	//440
    "fill$",	//441
    "findIndexAboveX",	//442
    "findIndexAboveX?$",	//443
    "findIndexAboveY",	//444
    "findIndexAboveY?$",	//445
    "findIndexBelowX",	//446
    "findIndexBelowX?$",	//447
    "findIndexBelowY",	//448
    "findIndexBelowY?$",	//449
    "fixed",	//450
    "fixed#",	//451
    "flush",	//452
    "flush#",	//453
    "focusInEvent",	//454
    "focusNextPrevChild",	//455
    "focusOutEvent",	//456
    "font",	//457
    "fontChange",	//458
    "forcepoint",	//459
    "forcepoint#",	//460
    "forcesign",	//461
    "forcesign#",	//462
    "generateAutoTicks",	//463
    "getBarPolygon",	//464
    "getBarPolygon$$",	//465
    "getBasePen",	//466
    "getBorderPen",	//467
    "getBrush",	//468
    "getChannelFillPolygon",	//469
    "getChannelFillPolygon?",	//470
    "getCurveData",	//471
    "getCurveData?",	//472
    "getFinalRect",	//473
    "getFinalRect$",	//474
    "getFinalRect$$",	//475
    "getFont",	//476
    "getIconBorderPen",	//477
    "getImpulsePlotData",	//478
    "getImpulsePlotData??",	//479
    "getKeyRange",	//480
    "getKeyRange$",	//481
    "getKeyRange$$",	//482
    "getKeyRange$$$",	//483
    "getLabelColor",	//484
    "getLabelFont",	//485
    "getLinePlotData",	//486
    "getLinePlotData??",	//487
    "getMaximumRowColSizes",	//488
    "getMaximumRowColSizes??",	//489
    "getMinimumRowColSizes",	//490
    "getMinimumRowColSizes??",	//491
    "getOptimizedCornerPoints",	//492
    "getOptimizedCornerPoints$$$$$$$$$$",	//493
    "getOptimizedPoint",	//494
    "getOptimizedPoint$$$$$$$$$",	//495
    "getPartAt",	//496
    "getPartAt#",	//497
    "getPixelSpacing",	//498
    "getPixelSpacing#$",	//499
    "getPixelWidth",	//500
    "getPixelWidth$$$",	//501
    "getPlotData",	//502
    "getPlotData??",	//503
    "getPreparedData",	//504
    "getPreparedData??",	//505
    "getRectClippedLine",	//506
    "getRectClippedLine###",	//507
    "getRectClippedStraightLine",	//508
    "getRectClippedStraightLine###",	//509
    "getRegion",	//510
    "getRegion$$$$$$",	//511
    "getScatterPlotData",	//512
    "getScatterPlotData?",	//513
    "getSectionSizes",	//514
    "getSectionSizes???$",	//515
    "getStackedBaseValue",	//516
    "getStackedBaseValue$$",	//517
    "getStepCenterPlotData",	//518
    "getStepCenterPlotData??",	//519
    "getStepLeftPlotData",	//520
    "getStepLeftPlotData??",	//521
    "getStepRightPlotData",	//522
    "getStepRightPlotData??",	//523
    "getSubTickPen",	//524
    "getTextColor",	//525
    "getTextDrawPoint",	//526
    "getTextDrawPoint##$",	//527
    "getTickLabelColor",	//528
    "getTickLabelFont",	//529
    "getTickPen",	//530
    "getTraverse",	//531
    "getTraverse$$$$$$$$##",	//532
    "getTraverseCornerPoints",	//533
    "getTraverseCornerPoints$$$$$$??",	//534
    "getValueRange",	//535
    "getValueRange$",	//536
    "getValueRange$$",	//537
    "getValueRange$$$",	//538
    "getVisibleDataBounds",	//539
    "getVisibleDataBounds??",	//540
    "gpCandy",	//541
    "gpCold",	//542
    "gpGeography",	//543
    "gpGrayscale",	//544
    "gpHot",	//545
    "gpHues",	//546
    "gpIon",	//547
    "gpJet",	//548
    "gpNight",	//549
    "gpPolar",	//550
    "gpSpectrum",	//551
    "gpThermal",	//552
    "gradient",	//553
    "gradientChanged",	//554
    "gradientChanged#",	//555
    "graph",	//556
    "graph$",	//557
    "graphCount",	//558
    "graphKey",	//559
    "graphs",	//560
    "grid",	//561
    "hasAnchor",	//562
    "hasAnchor$",	//563
    "hasElement",	//564
    "hasElement$$",	//565
    "hasItem",	//566
    "hasItem#",	//567
    "hasItemWithPlottable",	//568
    "hasItemWithPlottable#",	//569
    "hasPlottable",	//570
    "hasPlottable#",	//571
    "head",	//572
    "height",	//573
    "heightForWidth",	//574
    "hex",	//575
    "hex#",	//576
    "hideEvent",	//577
    "high",	//578
    "iconBorderPen",	//579
    "iconSize",	//580
    "iconTextPadding",	//581
    "index",	//582
    "initializeParentPlot",	//583
    "initializeParentPlot#",	//584
    "inputMethodEvent",	//585
    "inputMethodQuery",	//586
    "insert",	//587
    "insert$#",	//588
    "insertColumn",	//589
    "insertColumn$",	//590
    "insertRow",	//591
    "insertRow$",	//592
    "insetAlignment",	//593
    "insetAlignment$",	//594
    "insetLayout",	//595
    "insetPlacement",	//596
    "insetPlacement$",	//597
    "insetRect",	//598
    "insetRect$",	//599
    "interactions",	//600
    "interpolate",	//601
    "interpolating",	//602
    "inverted",	//603
    "ipBorderAligned",	//604
    "ipFree",	//605
    "isEmpty",	//606
    "isNone",	//607
    "isPenDefined",	//608
    "item",	//609
    "item$",	//610
    "itemAt",	//611
    "itemAt#",	//612
    "itemAt#$",	//613
    "itemClick",	//614
    "itemClick##",	//615
    "itemCount",	//616
    "itemDoubleClick",	//617
    "itemDoubleClick##",	//618
    "itemWithPlottable",	//619
    "itemWithPlottable#",	//620
    "items",	//621
    "key",	//622
    "keyAxis",	//623
    "keyErrorMinus",	//624
    "keyErrorPlus",	//625
    "keyPixelOffset",	//626
    "keyPixelOffset#$",	//627
    "keyPressEvent",	//628
    "keyRange",	//629
    "keyReleaseEvent",	//630
    "keySize",	//631
    "label",	//632
    "labelColor",	//633
    "labelFont",	//634
    "labelPadding",	//635
    "languageChange",	//636
    "layer",	//637
    "layer$",	//638
    "layerChanged",	//639
    "layerChanged#",	//640
    "layerCount",	//641
    "layerableAt",	//642
    "layerableAt#$",	//643
    "layerableAt#$#",	//644
    "layout",	//645
    "layoutElementAt",	//646
    "layoutElementAt#",	//647
    "leaveEvent",	//648
    "left",	//649
    "left#",	//650
    "legend",	//651
    "legendClick",	//652
    "legendClick###",	//653
    "legendDoubleClick",	//654
    "legendDoubleClick###",	//655
    "legendRemoved",	//656
    "legendRemoved#",	//657
    "length",	//658
    "levelCount",	//659
    "limAbove",	//660
    "limBelow",	//661
    "lineStyle",	//662
    "loadPreset",	//663
    "loadPreset$",	//664
    "low",	//665
    "lower",	//666
    "lowerEnding",	//667
    "lowerFillBasePoint",	//668
    "lowerFillBasePoint$",	//669
    "lowerQuartile",	//670
    "lowercasebase",	//671
    "lowercasebase#",	//672
    "lowercasedigits",	//673
    "lowercasedigits#",	//674
    "lsImpulse",	//675
    "lsInside",	//676
    "lsLine",	//677
    "lsNone",	//678
    "lsOutside",	//679
    "lsStepCenter",	//680
    "lsStepLeft",	//681
    "lsStepRight",	//682
    "ltDateTime",	//683
    "ltNumber",	//684
    "mAADragBackup",	//685
    "mAdaptiveSampling",	//686
    "mAnchorId",	//687
    "mAnchors",	//688
    "mAntialiased",	//689
    "mAntialiasedElements",	//690
    "mAntialiasedErrorBars",	//691
    "mAntialiasedFill",	//692
    "mAntialiasedScatters",	//693
    "mAntialiasedSubGrid",	//694
    "mAntialiasedZeroLine",	//695
    "mAntialiasingStack",	//696
    "mAspectRatioMode",	//697
    "mAutoAddPlottableToLegend",	//698
    "mAutoMargins",	//699
    "mAutoSubTicks",	//700
    "mAutoTickCount",	//701
    "mAutoTickLabels",	//702
    "mAutoTickStep",	//703
    "mAutoTicks",	//704
    "mAxes",	//705
    "mAxisPainter",	//706
    "mAxisRect",	//707
    "mAxisType",	//708
    "mBackgroundBrush",	//709
    "mBackgroundPixmap",	//710
    "mBackgroundScaled",	//711
    "mBackgroundScaledMode",	//712
    "mBarAbove",	//713
    "mBarBelow",	//714
    "mBarWidth",	//715
    "mBars",	//716
    "mBarsGroup",	//717
    "mBasePen",	//718
    "mBaseValue",	//719
    "mBorderPen",	//720
    "mBrush",	//721
    "mBrushNegative",	//722
    "mBrushPositive",	//723
    "mCachedMargin",	//724
    "mCachedMarginValid",	//725
    "mChannelFillGraph",	//726
    "mChartStyle",	//727
    "mChildren",	//728
    "mChildrenX",	//729
    "mChildrenY",	//730
    "mClipAxisRect",	//731
    "mClipToAxisRect",	//732
    "mColor",	//733
    "mColorAxis",	//734
    "mColorBuffer",	//735
    "mColorBufferInvalidated",	//736
    "mColorInterpolation",	//737
    "mColorScale",	//738
    "mColorStops",	//739
    "mColumnSpacing",	//740
    "mColumnStretchFactors",	//741
    "mCurrentLayer",	//742
    "mCustomPath",	//743
    "mData",	//744
    "mDataBounds",	//745
    "mDataModified",	//746
    "mDataRange",	//747
    "mDataScaleType",	//748
    "mDateTimeFormat",	//749
    "mDateTimeSpec",	//750
    "mDragStart",	//751
    "mDragStartHorzRange",	//752
    "mDragStartVertRange",	//753
    "mDragging",	//754
    "mElements",	//755
    "mErrorBarSize",	//756
    "mErrorBarSkipSymbol",	//757
    "mErrorPen",	//758
    "mErrorType",	//759
    "mFont",	//760
    "mGradient",	//761
    "mGraph",	//762
    "mGraphKey",	//763
    "mGraphs",	//764
    "mGrid",	//765
    "mHead",	//766
    "mHighestVisibleTick",	//767
    "mIconBorderPen",	//768
    "mIconSize",	//769
    "mIconTextPadding",	//770
    "mIndex",	//771
    "mInsetAlignment",	//772
    "mInsetLayout",	//773
    "mInsetPlacement",	//774
    "mInsetRect",	//775
    "mInteractions",	//776
    "mInterpolate",	//777
    "mInterpolating",	//778
    "mInverted",	//779
    "mIsAntialiasing",	//780
    "mIsEmpty",	//781
    "mItems",	//782
    "mKey",	//783
    "mKeyAxis",	//784
    "mKeyRange",	//785
    "mKeySize",	//786
    "mLabel",	//787
    "mLabelColor",	//788
    "mLabelFont",	//789
    "mLayer",	//790
    "mLayers",	//791
    "mLegendIcon",	//792
    "mLength",	//793
    "mLevelCount",	//794
    "mLineStyle",	//795
    "mLowerQuartile",	//796
    "mLowestVisibleTick",	//797
    "mMapData",	//798
    "mMapImage",	//799
    "mMapImageInvalidated",	//800
    "mMarginGroups",	//801
    "mMargins",	//802
    "mMaximum",	//803
    "mMaximumSize",	//804
    "mMedian",	//805
    "mMedianPen",	//806
    "mMinimum",	//807
    "mMinimumMargins",	//808
    "mMinimumSize",	//809
    "mModes",	//810
    "mMouseEventElement",	//811
    "mMousePressPos",	//812
    "mMultiSelectModifier",	//813
    "mName",	//814
    "mNoAntialiasingOnDrag",	//815
    "mNotAADragBackup",	//816
    "mNotAntialiasedElements",	//817
    "mNumberBeautifulPowers",	//818
    "mNumberFormatChar",	//819
    "mNumberPrecision",	//820
    "mOrientation",	//821
    "mOuterRect",	//822
    "mOutlierStyle",	//823
    "mOutliers",	//824
    "mPadding",	//825
    "mPaintBuffer",	//826
    "mParentAnchorX",	//827
    "mParentAnchorY",	//828
    "mParentAxis",	//829
    "mParentItem",	//830
    "mParentLayerable",	//831
    "mParentLayout",	//832
    "mParentLegend",	//833
    "mParentPlot",	//834
    "mPen",	//835
    "mPenDefined",	//836
    "mPenNegative",	//837
    "mPenPositive",	//838
    "mPeriodic",	//839
    "mPixmap",	//840
    "mPlotLayout",	//841
    "mPlottable",	//842
    "mPlottables",	//843
    "mPlottingHints",	//844
    "mPositionAlignment",	//845
    "mPositionTypeX",	//846
    "mPositionTypeY",	//847
    "mPositions",	//848
    "mRange",	//849
    "mRangeDrag",	//850
    "mRangeDragHorzAxis",	//851
    "mRangeDragVertAxis",	//852
    "mRangeReversed",	//853
    "mRangeZoom",	//854
    "mRangeZoomFactorHorz",	//855
    "mRangeZoomFactorVert",	//856
    "mRangeZoomHorzAxis",	//857
    "mRangeZoomVertAxis",	//858
    "mRect",	//859
    "mReplotting",	//860
    "mRotation",	//861
    "mRowSpacing",	//862
    "mRowStretchFactors",	//863
    "mScaleLogBase",	//864
    "mScaleLogBaseLogInv",	//865
    "mScaleType",	//866
    "mScaled",	//867
    "mScaledBackgroundPixmap",	//868
    "mScaledPixmap",	//869
    "mScatterStyle",	//870
    "mSelectable",	//871
    "mSelectableParts",	//872
    "mSelected",	//873
    "mSelectedBasePen",	//874
    "mSelectedBorderPen",	//875
    "mSelectedBrush",	//876
    "mSelectedColor",	//877
    "mSelectedFont",	//878
    "mSelectedIconBorderPen",	//879
    "mSelectedLabelColor",	//880
    "mSelectedLabelFont",	//881
    "mSelectedParts",	//882
    "mSelectedPen",	//883
    "mSelectedSubTickPen",	//884
    "mSelectedTextColor",	//885
    "mSelectedTickLabelColor",	//886
    "mSelectedTickLabelFont",	//887
    "mSelectedTickPen",	//888
    "mSelectionTolerance",	//889
    "mShape",	//890
    "mSize",	//891
    "mSpacing",	//892
    "mSpacingType",	//893
    "mStyle",	//894
    "mSubGridPen",	//895
    "mSubGridVisible",	//896
    "mSubTickCount",	//897
    "mSubTickPen",	//898
    "mSubTickVector",	//899
    "mTail",	//900
    "mText",	//901
    "mTextAlignment",	//902
    "mTextBoundingRect",	//903
    "mTextColor",	//904
    "mTickLabelColor",	//905
    "mTickLabelFont",	//906
    "mTickLabelType",	//907
    "mTickLabels",	//908
    "mTickPen",	//909
    "mTickStep",	//910
    "mTickVector",	//911
    "mTickVectorLabels",	//912
    "mTicks",	//913
    "mTightBoundary",	//914
    "mTransformationMode",	//915
    "mTwoColored",	//916
    "mType",	//917
    "mUpperQuartile",	//918
    "mValue",	//919
    "mValueAxis",	//920
    "mValueRange",	//921
    "mValueSize",	//922
    "mViewport",	//923
    "mVisible",	//924
    "mWhiskerBarPen",	//925
    "mWhiskerPen",	//926
    "mWhiskerWidth",	//927
    "mWidth",	//928
    "mWidthType",	//929
    "mZeroLinePen",	//930
    "mainBrush",	//931
    "mainColor",	//932
    "mainFont",	//933
    "mainPen",	//934
    "mainTextColor",	//935
    "makeNonCosmetic",	//936
    "marginGroup",	//937
    "marginGroup$",	//938
    "marginGroups",	//939
    "marginSideToAxisType",	//940
    "marginSideToAxisType$",	//941
    "margins",	//942
    "maxRange",	//943
    "maximum",	//944
    "maximumSize",	//945
    "maximumSizeHint",	//946
    "mayTraverse",	//947
    "mayTraverse$$",	//948
    "median",	//949
    "medianPen",	//950
    "memccpy",	//951
    "memccpy$$$$",	//952
    "memcmp",	//953
    "memcmp$$$",	//954
    "memcpy",	//955
    "memcpy$$$",	//956
    "memmove",	//957
    "memmove$$$",	//958
    "memset",	//959
    "memset$$$",	//960
    "metaObject",	//961
    "metric",	//962
    "minRange",	//963
    "minimum",	//964
    "minimumMargins",	//965
    "minimumSize",	//966
    "minimumSizeHint",	//967
    "modes",	//968
    "mouseDoubleClick",	//969
    "mouseDoubleClick#",	//970
    "mouseDoubleClickEvent",	//971
    "mouseDoubleClickEvent#",	//972
    "mouseMove",	//973
    "mouseMove#",	//974
    "mouseMoveEvent",	//975
    "mouseMoveEvent#",	//976
    "mousePress",	//977
    "mousePress#",	//978
    "mousePressEvent",	//979
    "mousePressEvent#",	//980
    "mouseRelease",	//981
    "mouseRelease#",	//982
    "mouseReleaseEvent",	//983
    "mouseReleaseEvent#",	//984
    "mouseWheel",	//985
    "mouseWheel#",	//986
    "moveAbove",	//987
    "moveAbove#",	//988
    "moveBelow",	//989
    "moveBelow#",	//990
    "moveEvent",	//991
    "moveLayer",	//992
    "moveLayer##",	//993
    "moveLayer##$",	//994
    "moveRange",	//995
    "moveRange$",	//996
    "moveToLayer",	//997
    "moveToLayer#$",	//998
    "multiSelectModifier",	//999
    "name",	//1000
    "noAntialiasingOnDrag",	//1001
    "noforcepoint",	//1002
    "noforcepoint#",	//1003
    "noforcesign",	//1004
    "noforcesign#",	//1005
    "normalize",	//1006
    "noshowbase",	//1007
    "noshowbase#",	//1008
    "notAntialiasedElements",	//1009
    "numberFormat",	//1010
    "numberPrecision",	//1011
    "oct",	//1012
    "oct#",	//1013
    "offset",	//1014
    "ohlcSelectTest",	//1015
    "ohlcSelectTest#??",	//1016
    "open",	//1017
    "operator!=",	//1018
    "operator!=#",	//1019
    "operator*",	//1020
    "operator*#$",	//1021
    "operator*$#",	//1022
    "operator*=",	//1023
    "operator*=$",	//1024
    "operator+",	//1025
    "operator+#$",	//1026
    "operator+$#",	//1027
    "operator+=",	//1028
    "operator+=$",	//1029
    "operator-",	//1030
    "operator-#$",	//1031
    "operator-=",	//1032
    "operator-=$",	//1033
    "operator/",	//1034
    "operator/#$",	//1035
    "operator/=",	//1036
    "operator/=$",	//1037
    "operator=",	//1038
    "operator=#",	//1039
    "operator==",	//1040
    "operator==#",	//1041
    "operator|",	//1042
    "operator|$$",	//1043
    "opposite",	//1044
    "opposite$",	//1045
    "orientation",	//1046
    "orientation$",	//1047
    "outerRect",	//1048
    "outlierStyle",	//1049
    "outliers",	//1050
    "padding",	//1051
    "paintEngine",	//1052
    "paintEvent",	//1053
    "paintEvent#",	//1054
    "paletteChange",	//1055
    "parentAnchor",	//1056
    "parentAnchorX",	//1057
    "parentAnchorY",	//1058
    "parentLayerable",	//1059
    "parentLegend",	//1060
    "parentPlot",	//1061
    "parentPlotInitialized",	//1062
    "parentPlotInitialized#",	//1063
    "pen",	//1064
    "penNegative",	//1065
    "penPositive",	//1066
    "periodic",	//1067
    "pixelPoint",	//1068
    "pixelToCoord",	//1069
    "pixelToCoord$",	//1070
    "pixelsToCoords",	//1071
    "pixelsToCoords#$$",	//1072
    "pixelsToCoords$$$$",	//1073
    "pixmap",	//1074
    "plotLayout",	//1075
    "plottable",	//1076
    "plottable$",	//1077
    "plottableAt",	//1078
    "plottableAt#",	//1079
    "plottableAt#$",	//1080
    "plottableClick",	//1081
    "plottableClick##",	//1082
    "plottableCount",	//1083
    "plottableDoubleClick",	//1084
    "plottableDoubleClick##",	//1085
    "plottables",	//1086
    "plottingHints",	//1087
    "pmDefault",	//1088
    "pmNoCaching",	//1089
    "pmNonCosmetic",	//1090
    "pmVectorized",	//1091
    "pointDistance",	//1092
    "pointDistance#",	//1093
    "position",	//1094
    "position$",	//1095
    "positions",	//1096
    "ptAbsolute",	//1097
    "ptAxisRectRatio",	//1098
    "ptPlotCoords",	//1099
    "ptViewportRatio",	//1100
    "qt_metacall",	//1101
    "qt_metacall$$?",	//1102
    "qt_metacast",	//1103
    "qt_metacast$",	//1104
    "range",	//1105
    "rangeChanged",	//1106
    "rangeChanged#",	//1107
    "rangeChanged##",	//1108
    "rangeDrag",	//1109
    "rangeDragAxis",	//1110
    "rangeDragAxis$",	//1111
    "rangeReversed",	//1112
    "rangeZoom",	//1113
    "rangeZoomAxis",	//1114
    "rangeZoomAxis$",	//1115
    "rangeZoomFactor",	//1116
    "rangeZoomFactor$",	//1117
    "realLength",	//1118
    "realVisibility",	//1119
    "recalculateDataBounds",	//1120
    "rect",	//1121
    "rectSelectTest",	//1122
    "rectSelectTest##$",	//1123
    "registerBars",	//1124
    "registerBars#",	//1125
    "releaseElement",	//1126
    "releaseElement#",	//1127
    "remove",	//1128
    "remove#",	//1129
    "removeAt",	//1130
    "removeAt$",	//1131
    "removeAxis",	//1132
    "removeAxis#",	//1133
    "removeChild",	//1134
    "removeChild#",	//1135
    "removeChild$#",	//1136
    "removeChildX",	//1137
    "removeChildX#",	//1138
    "removeChildY",	//1139
    "removeChildY#",	//1140
    "removeData",	//1141
    "removeData$",	//1142
    "removeData$$",	//1143
    "removeDataAfter",	//1144
    "removeDataAfter$",	//1145
    "removeDataBefore",	//1146
    "removeDataBefore$",	//1147
    "removeFillBasePoints",	//1148
    "removeFillBasePoints?",	//1149
    "removeFromLegend",	//1150
    "removeGraph",	//1151
    "removeGraph#",	//1152
    "removeGraph$",	//1153
    "removeItem",	//1154
    "removeItem#",	//1155
    "removeItem$",	//1156
    "removeLayer",	//1157
    "removeLayer#",	//1158
    "removePlottable",	//1159
    "removePlottable#",	//1160
    "removePlottable$",	//1161
    "replot",	//1162
    "replot$",	//1163
    "rescale",	//1164
    "rescale$",	//1165
    "rescaleAxes",	//1166
    "rescaleAxes$",	//1167
    "rescaleAxes$$",	//1168
    "rescaleDataRange",	//1169
    "rescaleDataRange$",	//1170
    "rescaleKeyAxis",	//1171
    "rescaleKeyAxis$",	//1172
    "rescaleKeyAxis$$",	//1173
    "rescaleValueAxis",	//1174
    "rescaleValueAxis$",	//1175
    "rescaleValueAxis$$",	//1176
    "reset",	//1177
    "reset#",	//1178
    "resizeEvent",	//1179
    "resizeEvent#",	//1180
    "restore",	//1181
    "right",	//1182
    "right#",	//1183
    "rotation",	//1184
    "rowCount",	//1185
    "rowSpacing",	//1186
    "rowStretchFactors",	//1187
    "rpHint",	//1188
    "rpImmediate",	//1189
    "rpQueued",	//1190
    "sanitizedForLinScale",	//1191
    "sanitizedForLogScale",	//1192
    "save",	//1193
    "saveBmp",	//1194
    "saveBmp$",	//1195
    "saveBmp$$",	//1196
    "saveBmp$$$",	//1197
    "saveBmp$$$$",	//1198
    "saveJpg",	//1199
    "saveJpg$",	//1200
    "saveJpg$$",	//1201
    "saveJpg$$$",	//1202
    "saveJpg$$$$",	//1203
    "saveJpg$$$$$",	//1204
    "savePdf",	//1205
    "savePdf$",	//1206
    "savePdf$$",	//1207
    "savePdf$$$",	//1208
    "savePdf$$$$",	//1209
    "savePdf$$$$$",	//1210
    "savePdf$$$$$$",	//1211
    "savePng",	//1212
    "savePng$",	//1213
    "savePng$$",	//1214
    "savePng$$$",	//1215
    "savePng$$$$",	//1216
    "savePng$$$$$",	//1217
    "saveRastered",	//1218
    "saveRastered$$$$$",	//1219
    "saveRastered$$$$$$",	//1220
    "scaleLogBase",	//1221
    "scaleRange",	//1222
    "scaleRange$$",	//1223
    "scaleType",	//1224
    "scaleTypeChanged",	//1225
    "scaleTypeChanged$",	//1226
    "scaled",	//1227
    "scatterStyle",	//1228
    "scientific",	//1229
    "scientific#",	//1230
    "sdBoth",	//1231
    "sdNegative",	//1232
    "sdPositive",	//1233
    "selectEvent",	//1234
    "selectEvent#$#$",	//1235
    "selectTest",	//1236
    "selectTest#$",	//1237
    "selectTest#$#",	//1238
    "selectable",	//1239
    "selectableChanged",	//1240
    "selectableChanged$",	//1241
    "selectableParts",	//1242
    "selected",	//1243
    "selectedAxes",	//1244
    "selectedBasePen",	//1245
    "selectedBorderPen",	//1246
    "selectedBrush",	//1247
    "selectedColor",	//1248
    "selectedFont",	//1249
    "selectedGraphs",	//1250
    "selectedIconBorderPen",	//1251
    "selectedItems",	//1252
    "selectedLabelColor",	//1253
    "selectedLabelFont",	//1254
    "selectedLegends",	//1255
    "selectedParts",	//1256
    "selectedPen",	//1257
    "selectedPlottables",	//1258
    "selectedSubTickPen",	//1259
    "selectedTextColor",	//1260
    "selectedTickLabelColor",	//1261
    "selectedTickLabelFont",	//1262
    "selectedTickPen",	//1263
    "selectionCategory",	//1264
    "selectionChanged",	//1265
    "selectionChanged$",	//1266
    "selectionChangedByUser",	//1267
    "selectionTolerance",	//1268
    "setAdaptiveSampling",	//1269
    "setAdaptiveSampling$",	//1270
    "setAntialiased",	//1271
    "setAntialiased$",	//1272
    "setAntialiasedElement",	//1273
    "setAntialiasedElement$",	//1274
    "setAntialiasedElement$$",	//1275
    "setAntialiasedElements",	//1276
    "setAntialiasedElements#",	//1277
    "setAntialiasedErrorBars",	//1278
    "setAntialiasedErrorBars$",	//1279
    "setAntialiasedFill",	//1280
    "setAntialiasedFill$",	//1281
    "setAntialiasedScatters",	//1282
    "setAntialiasedScatters$",	//1283
    "setAntialiasedSubGrid",	//1284
    "setAntialiasedSubGrid$",	//1285
    "setAntialiasedZeroLine",	//1286
    "setAntialiasedZeroLine$",	//1287
    "setAntialiasing",	//1288
    "setAntialiasing$",	//1289
    "setAutoAddPlottableToLegend",	//1290
    "setAutoAddPlottableToLegend$",	//1291
    "setAutoMargins",	//1292
    "setAutoMargins$",	//1293
    "setAutoSubTicks",	//1294
    "setAutoSubTicks$",	//1295
    "setAutoTickCount",	//1296
    "setAutoTickCount$",	//1297
    "setAutoTickLabels",	//1298
    "setAutoTickLabels$",	//1299
    "setAutoTickStep",	//1300
    "setAutoTickStep$",	//1301
    "setAutoTicks",	//1302
    "setAutoTicks$",	//1303
    "setAxes",	//1304
    "setAxes##",	//1305
    "setAxisRect",	//1306
    "setAxisRect#",	//1307
    "setBackground",	//1308
    "setBackground#",	//1309
    "setBackground#$",	//1310
    "setBackground#$$",	//1311
    "setBackgroundScaled",	//1312
    "setBackgroundScaled$",	//1313
    "setBackgroundScaledMode",	//1314
    "setBackgroundScaledMode$",	//1315
    "setBarWidth",	//1316
    "setBarWidth$",	//1317
    "setBarsGroup",	//1318
    "setBarsGroup#",	//1319
    "setBasePen",	//1320
    "setBasePen#",	//1321
    "setBaseValue",	//1322
    "setBaseValue$",	//1323
    "setBorderPen",	//1324
    "setBorderPen#",	//1325
    "setBrush",	//1326
    "setBrush#",	//1327
    "setBrushNegative",	//1328
    "setBrushNegative#",	//1329
    "setBrushPositive",	//1330
    "setBrushPositive#",	//1331
    "setCell",	//1332
    "setCell$$$",	//1333
    "setChannelFillGraph",	//1334
    "setChannelFillGraph#",	//1335
    "setChartStyle",	//1336
    "setChartStyle$",	//1337
    "setClipAxisRect",	//1338
    "setClipAxisRect#",	//1339
    "setClipToAxisRect",	//1340
    "setClipToAxisRect$",	//1341
    "setClose",	//1342
    "setClose$",	//1343
    "setColor",	//1344
    "setColor#",	//1345
    "setColorInterpolation",	//1346
    "setColorInterpolation$",	//1347
    "setColorScale",	//1348
    "setColorScale#",	//1349
    "setColorStopAt",	//1350
    "setColorStopAt$#",	//1351
    "setColorStops",	//1352
    "setColorStops?",	//1353
    "setColumnSpacing",	//1354
    "setColumnSpacing$",	//1355
    "setColumnStretchFactor",	//1356
    "setColumnStretchFactor$$",	//1357
    "setColumnStretchFactors",	//1358
    "setColumnStretchFactors?",	//1359
    "setCoords",	//1360
    "setCoords#",	//1361
    "setCoords$$",	//1362
    "setCurrentLayer",	//1363
    "setCurrentLayer#",	//1364
    "setCurrentLayer$",	//1365
    "setCustomPath",	//1366
    "setCustomPath#",	//1367
    "setData",	//1368
    "setData#",	//1369
    "setData#$",	//1370
    "setData$$$",	//1371
    "setData$$$$$$",	//1372
    "setData?",	//1373
    "setData?$",	//1374
    "setData??",	//1375
    "setData???",	//1376
    "setData?????",	//1377
    "setDataBothError",	//1378
    "setDataBothError????",	//1379
    "setDataBothError??????",	//1380
    "setDataKeyError",	//1381
    "setDataKeyError???",	//1382
    "setDataKeyError????",	//1383
    "setDataRange",	//1384
    "setDataRange#",	//1385
    "setDataScaleType",	//1386
    "setDataScaleType$",	//1387
    "setDataValueError",	//1388
    "setDataValueError???",	//1389
    "setDataValueError????",	//1390
    "setDateTimeFormat",	//1391
    "setDateTimeFormat$",	//1392
    "setDateTimeSpec",	//1393
    "setDateTimeSpec$",	//1394
    "setErrorBarSize",	//1395
    "setErrorBarSize$",	//1396
    "setErrorBarSkipSymbol",	//1397
    "setErrorBarSkipSymbol$",	//1398
    "setErrorPen",	//1399
    "setErrorPen#",	//1400
    "setErrorType",	//1401
    "setErrorType$",	//1402
    "setFont",	//1403
    "setFont#",	//1404
    "setGradient",	//1405
    "setGradient#",	//1406
    "setGraph",	//1407
    "setGraph#",	//1408
    "setGraphKey",	//1409
    "setGraphKey$",	//1410
    "setHead",	//1411
    "setHead#",	//1412
    "setHigh",	//1413
    "setHigh$",	//1414
    "setIconBorderPen",	//1415
    "setIconBorderPen#",	//1416
    "setIconSize",	//1417
    "setIconSize#",	//1418
    "setIconSize$$",	//1419
    "setIconTextPadding",	//1420
    "setIconTextPadding$",	//1421
    "setInsetAlignment",	//1422
    "setInsetAlignment$$",	//1423
    "setInsetPlacement",	//1424
    "setInsetPlacement$$",	//1425
    "setInsetRect",	//1426
    "setInsetRect$#",	//1427
    "setInteraction",	//1428
    "setInteraction$",	//1429
    "setInteraction$$",	//1430
    "setInteractions",	//1431
    "setInteractions#",	//1432
    "setInterpolate",	//1433
    "setInterpolate$",	//1434
    "setInterpolating",	//1435
    "setInterpolating$",	//1436
    "setInverted",	//1437
    "setInverted$",	//1438
    "setKey",	//1439
    "setKey$",	//1440
    "setKeyAxis",	//1441
    "setKeyAxis#",	//1442
    "setKeyErrorMinus",	//1443
    "setKeyErrorMinus$",	//1444
    "setKeyErrorPlus",	//1445
    "setKeyErrorPlus$",	//1446
    "setKeyRange",	//1447
    "setKeyRange#",	//1448
    "setKeySize",	//1449
    "setKeySize$",	//1450
    "setLabel",	//1451
    "setLabel$",	//1452
    "setLabelColor",	//1453
    "setLabelColor#",	//1454
    "setLabelFont",	//1455
    "setLabelFont#",	//1456
    "setLabelPadding",	//1457
    "setLabelPadding$",	//1458
    "setLayer",	//1459
    "setLayer#",	//1460
    "setLayer$",	//1461
    "setLegend",	//1462
    "setLegend#",	//1463
    "setLength",	//1464
    "setLength$",	//1465
    "setLevelCount",	//1466
    "setLevelCount$",	//1467
    "setLineStyle",	//1468
    "setLineStyle$",	//1469
    "setLow",	//1470
    "setLow$",	//1471
    "setLower",	//1472
    "setLower$",	//1473
    "setLowerEnding",	//1474
    "setLowerEnding#",	//1475
    "setLowerQuartile",	//1476
    "setLowerQuartile$",	//1477
    "setMAADragBackup",	//1478
    "setMAADragBackup$",	//1479
    "setMAdaptiveSampling",	//1480
    "setMAdaptiveSampling$",	//1481
    "setMAnchorId",	//1482
    "setMAnchorId$",	//1483
    "setMAnchors",	//1484
    "setMAnchors?",	//1485
    "setMAntialiased",	//1486
    "setMAntialiased$",	//1487
    "setMAntialiasedElements",	//1488
    "setMAntialiasedElements$",	//1489
    "setMAntialiasedErrorBars",	//1490
    "setMAntialiasedErrorBars$",	//1491
    "setMAntialiasedFill",	//1492
    "setMAntialiasedFill$",	//1493
    "setMAntialiasedScatters",	//1494
    "setMAntialiasedScatters$",	//1495
    "setMAntialiasedSubGrid",	//1496
    "setMAntialiasedSubGrid$",	//1497
    "setMAntialiasedZeroLine",	//1498
    "setMAntialiasedZeroLine$",	//1499
    "setMAntialiasingStack",	//1500
    "setMAntialiasingStack?",	//1501
    "setMAspectRatioMode",	//1502
    "setMAspectRatioMode$",	//1503
    "setMAutoAddPlottableToLegend",	//1504
    "setMAutoAddPlottableToLegend$",	//1505
    "setMAutoMargins",	//1506
    "setMAutoMargins$",	//1507
    "setMAutoSubTicks",	//1508
    "setMAutoSubTicks$",	//1509
    "setMAutoTickCount",	//1510
    "setMAutoTickCount$",	//1511
    "setMAutoTickLabels",	//1512
    "setMAutoTickLabels$",	//1513
    "setMAutoTickStep",	//1514
    "setMAutoTickStep$",	//1515
    "setMAutoTicks",	//1516
    "setMAutoTicks$",	//1517
    "setMAxes",	//1518
    "setMAxes?",	//1519
    "setMAxisPainter",	//1520
    "setMAxisPainter#",	//1521
    "setMAxisRect",	//1522
    "setMAxisRect#",	//1523
    "setMAxisRect?",	//1524
    "setMAxisType",	//1525
    "setMAxisType$",	//1526
    "setMBackgroundBrush",	//1527
    "setMBackgroundBrush#",	//1528
    "setMBackgroundPixmap",	//1529
    "setMBackgroundPixmap#",	//1530
    "setMBackgroundScaled",	//1531
    "setMBackgroundScaled$",	//1532
    "setMBackgroundScaledMode",	//1533
    "setMBackgroundScaledMode$",	//1534
    "setMBarAbove",	//1535
    "setMBarAbove?",	//1536
    "setMBarBelow",	//1537
    "setMBarBelow?",	//1538
    "setMBarWidth",	//1539
    "setMBarWidth$",	//1540
    "setMBars",	//1541
    "setMBars?",	//1542
    "setMBarsGroup",	//1543
    "setMBarsGroup#",	//1544
    "setMBasePen",	//1545
    "setMBasePen#",	//1546
    "setMBaseValue",	//1547
    "setMBaseValue$",	//1548
    "setMBorderPen",	//1549
    "setMBorderPen#",	//1550
    "setMBrush",	//1551
    "setMBrush#",	//1552
    "setMBrushNegative",	//1553
    "setMBrushNegative#",	//1554
    "setMBrushPositive",	//1555
    "setMBrushPositive#",	//1556
    "setMCachedMargin",	//1557
    "setMCachedMargin$",	//1558
    "setMCachedMarginValid",	//1559
    "setMCachedMarginValid$",	//1560
    "setMChannelFillGraph",	//1561
    "setMChannelFillGraph?",	//1562
    "setMChartStyle",	//1563
    "setMChartStyle$",	//1564
    "setMChildren",	//1565
    "setMChildren?",	//1566
    "setMChildrenX",	//1567
    "setMChildrenX?",	//1568
    "setMChildrenY",	//1569
    "setMChildrenY?",	//1570
    "setMClipAxisRect",	//1571
    "setMClipAxisRect?",	//1572
    "setMClipToAxisRect",	//1573
    "setMClipToAxisRect$",	//1574
    "setMColor",	//1575
    "setMColor#",	//1576
    "setMColorAxis",	//1577
    "setMColorAxis?",	//1578
    "setMColorBuffer",	//1579
    "setMColorBuffer?",	//1580
    "setMColorBufferInvalidated",	//1581
    "setMColorBufferInvalidated$",	//1582
    "setMColorInterpolation",	//1583
    "setMColorInterpolation$",	//1584
    "setMColorScale",	//1585
    "setMColorScale?",	//1586
    "setMColorStops",	//1587
    "setMColorStops?",	//1588
    "setMColumnSpacing",	//1589
    "setMColumnSpacing$",	//1590
    "setMColumnStretchFactors",	//1591
    "setMColumnStretchFactors?",	//1592
    "setMCurrentLayer",	//1593
    "setMCurrentLayer#",	//1594
    "setMCustomPath",	//1595
    "setMCustomPath#",	//1596
    "setMData",	//1597
    "setMData$",	//1598
    "setMData?",	//1599
    "setMDataBounds",	//1600
    "setMDataBounds#",	//1601
    "setMDataModified",	//1602
    "setMDataModified$",	//1603
    "setMDataRange",	//1604
    "setMDataRange#",	//1605
    "setMDataScaleType",	//1606
    "setMDataScaleType$",	//1607
    "setMDateTimeFormat",	//1608
    "setMDateTimeFormat$",	//1609
    "setMDateTimeSpec",	//1610
    "setMDateTimeSpec$",	//1611
    "setMDragStart",	//1612
    "setMDragStart#",	//1613
    "setMDragStartHorzRange",	//1614
    "setMDragStartHorzRange#",	//1615
    "setMDragStartVertRange",	//1616
    "setMDragStartVertRange#",	//1617
    "setMDragging",	//1618
    "setMDragging$",	//1619
    "setMElements",	//1620
    "setMElements?",	//1621
    "setMErrorBarSize",	//1622
    "setMErrorBarSize$",	//1623
    "setMErrorBarSkipSymbol",	//1624
    "setMErrorBarSkipSymbol$",	//1625
    "setMErrorPen",	//1626
    "setMErrorPen#",	//1627
    "setMErrorType",	//1628
    "setMErrorType$",	//1629
    "setMFont",	//1630
    "setMFont#",	//1631
    "setMGradient",	//1632
    "setMGradient#",	//1633
    "setMGraph",	//1634
    "setMGraph#",	//1635
    "setMGraphKey",	//1636
    "setMGraphKey$",	//1637
    "setMGraphs",	//1638
    "setMGraphs?",	//1639
    "setMGrid",	//1640
    "setMGrid#",	//1641
    "setMHead",	//1642
    "setMHead#",	//1643
    "setMHighestVisibleTick",	//1644
    "setMHighestVisibleTick$",	//1645
    "setMIconBorderPen",	//1646
    "setMIconBorderPen#",	//1647
    "setMIconSize",	//1648
    "setMIconSize#",	//1649
    "setMIconTextPadding",	//1650
    "setMIconTextPadding$",	//1651
    "setMIndex",	//1652
    "setMIndex$",	//1653
    "setMInsetAlignment",	//1654
    "setMInsetAlignment?",	//1655
    "setMInsetLayout",	//1656
    "setMInsetLayout#",	//1657
    "setMInsetPlacement",	//1658
    "setMInsetPlacement?",	//1659
    "setMInsetRect",	//1660
    "setMInsetRect?",	//1661
    "setMInteractions",	//1662
    "setMInteractions$",	//1663
    "setMInterpolate",	//1664
    "setMInterpolate$",	//1665
    "setMInterpolating",	//1666
    "setMInterpolating$",	//1667
    "setMInverted",	//1668
    "setMInverted$",	//1669
    "setMIsAntialiasing",	//1670
    "setMIsAntialiasing$",	//1671
    "setMIsEmpty",	//1672
    "setMIsEmpty$",	//1673
    "setMItems",	//1674
    "setMItems?",	//1675
    "setMKey",	//1676
    "setMKey$",	//1677
    "setMKeyAxis",	//1678
    "setMKeyAxis?",	//1679
    "setMKeyRange",	//1680
    "setMKeyRange#",	//1681
    "setMKeySize",	//1682
    "setMKeySize$",	//1683
    "setMLabel",	//1684
    "setMLabel$",	//1685
    "setMLabelColor",	//1686
    "setMLabelColor#",	//1687
    "setMLabelFont",	//1688
    "setMLabelFont#",	//1689
    "setMLayer",	//1690
    "setMLayer#",	//1691
    "setMLayers",	//1692
    "setMLayers?",	//1693
    "setMLegendIcon",	//1694
    "setMLegendIcon#",	//1695
    "setMLength",	//1696
    "setMLength$",	//1697
    "setMLevelCount",	//1698
    "setMLevelCount$",	//1699
    "setMLineStyle",	//1700
    "setMLineStyle$",	//1701
    "setMLowerQuartile",	//1702
    "setMLowerQuartile$",	//1703
    "setMLowestVisibleTick",	//1704
    "setMLowestVisibleTick$",	//1705
    "setMMapData",	//1706
    "setMMapData#",	//1707
    "setMMapImage",	//1708
    "setMMapImage#",	//1709
    "setMMapImageInvalidated",	//1710
    "setMMapImageInvalidated$",	//1711
    "setMMarginGroups",	//1712
    "setMMarginGroups?",	//1713
    "setMMargins",	//1714
    "setMMargins#",	//1715
    "setMMaximum",	//1716
    "setMMaximum$",	//1717
    "setMMaximumSize",	//1718
    "setMMaximumSize#",	//1719
    "setMMedian",	//1720
    "setMMedian$",	//1721
    "setMMedianPen",	//1722
    "setMMedianPen#",	//1723
    "setMMinimum",	//1724
    "setMMinimum$",	//1725
    "setMMinimumMargins",	//1726
    "setMMinimumMargins#",	//1727
    "setMMinimumSize",	//1728
    "setMMinimumSize#",	//1729
    "setMModes",	//1730
    "setMModes$",	//1731
    "setMMouseEventElement",	//1732
    "setMMouseEventElement?",	//1733
    "setMMousePressPos",	//1734
    "setMMousePressPos#",	//1735
    "setMMultiSelectModifier",	//1736
    "setMMultiSelectModifier$",	//1737
    "setMName",	//1738
    "setMName$",	//1739
    "setMNoAntialiasingOnDrag",	//1740
    "setMNoAntialiasingOnDrag$",	//1741
    "setMNotAADragBackup",	//1742
    "setMNotAADragBackup$",	//1743
    "setMNotAntialiasedElements",	//1744
    "setMNotAntialiasedElements$",	//1745
    "setMNumberBeautifulPowers",	//1746
    "setMNumberBeautifulPowers$",	//1747
    "setMNumberFormatChar",	//1748
    "setMNumberFormatChar#",	//1749
    "setMNumberPrecision",	//1750
    "setMNumberPrecision$",	//1751
    "setMOrientation",	//1752
    "setMOrientation$",	//1753
    "setMOuterRect",	//1754
    "setMOuterRect#",	//1755
    "setMOutlierStyle",	//1756
    "setMOutlierStyle#",	//1757
    "setMOutliers",	//1758
    "setMOutliers?",	//1759
    "setMPadding",	//1760
    "setMPadding#",	//1761
    "setMPadding$",	//1762
    "setMPaintBuffer",	//1763
    "setMPaintBuffer#",	//1764
    "setMParentAnchorX",	//1765
    "setMParentAnchorX#",	//1766
    "setMParentAnchorY",	//1767
    "setMParentAnchorY#",	//1768
    "setMParentAxis",	//1769
    "setMParentAxis#",	//1770
    "setMParentItem",	//1771
    "setMParentItem#",	//1772
    "setMParentLayerable",	//1773
    "setMParentLayerable?",	//1774
    "setMParentLayout",	//1775
    "setMParentLayout#",	//1776
    "setMParentLegend",	//1777
    "setMParentLegend#",	//1778
    "setMParentPlot",	//1779
    "setMParentPlot#",	//1780
    "setMPen",	//1781
    "setMPen#",	//1782
    "setMPenDefined",	//1783
    "setMPenDefined$",	//1784
    "setMPenNegative",	//1785
    "setMPenNegative#",	//1786
    "setMPenPositive",	//1787
    "setMPenPositive#",	//1788
    "setMPeriodic",	//1789
    "setMPeriodic$",	//1790
    "setMPixmap",	//1791
    "setMPixmap#",	//1792
    "setMPlotLayout",	//1793
    "setMPlotLayout#",	//1794
    "setMPlottable",	//1795
    "setMPlottable#",	//1796
    "setMPlottables",	//1797
    "setMPlottables?",	//1798
    "setMPlottingHints",	//1799
    "setMPlottingHints$",	//1800
    "setMPositionAlignment",	//1801
    "setMPositionAlignment$",	//1802
    "setMPositionTypeX",	//1803
    "setMPositionTypeX$",	//1804
    "setMPositionTypeY",	//1805
    "setMPositionTypeY$",	//1806
    "setMPositions",	//1807
    "setMPositions?",	//1808
    "setMRange",	//1809
    "setMRange#",	//1810
    "setMRangeDrag",	//1811
    "setMRangeDrag$",	//1812
    "setMRangeDragHorzAxis",	//1813
    "setMRangeDragHorzAxis?",	//1814
    "setMRangeDragVertAxis",	//1815
    "setMRangeDragVertAxis?",	//1816
    "setMRangeReversed",	//1817
    "setMRangeReversed$",	//1818
    "setMRangeZoom",	//1819
    "setMRangeZoom$",	//1820
    "setMRangeZoomFactorHorz",	//1821
    "setMRangeZoomFactorHorz$",	//1822
    "setMRangeZoomFactorVert",	//1823
    "setMRangeZoomFactorVert$",	//1824
    "setMRangeZoomHorzAxis",	//1825
    "setMRangeZoomHorzAxis?",	//1826
    "setMRangeZoomVertAxis",	//1827
    "setMRangeZoomVertAxis?",	//1828
    "setMRect",	//1829
    "setMRect#",	//1830
    "setMReplotting",	//1831
    "setMReplotting$",	//1832
    "setMRotation",	//1833
    "setMRotation$",	//1834
    "setMRowSpacing",	//1835
    "setMRowSpacing$",	//1836
    "setMRowStretchFactors",	//1837
    "setMRowStretchFactors?",	//1838
    "setMScaleLogBase",	//1839
    "setMScaleLogBase$",	//1840
    "setMScaleLogBaseLogInv",	//1841
    "setMScaleLogBaseLogInv$",	//1842
    "setMScaleType",	//1843
    "setMScaleType$",	//1844
    "setMScaled",	//1845
    "setMScaled$",	//1846
    "setMScaledBackgroundPixmap",	//1847
    "setMScaledBackgroundPixmap#",	//1848
    "setMScaledPixmap",	//1849
    "setMScaledPixmap#",	//1850
    "setMScatterStyle",	//1851
    "setMScatterStyle#",	//1852
    "setMSelectable",	//1853
    "setMSelectable$",	//1854
    "setMSelectableParts",	//1855
    "setMSelectableParts$",	//1856
    "setMSelected",	//1857
    "setMSelected$",	//1858
    "setMSelectedBasePen",	//1859
    "setMSelectedBasePen#",	//1860
    "setMSelectedBorderPen",	//1861
    "setMSelectedBorderPen#",	//1862
    "setMSelectedBrush",	//1863
    "setMSelectedBrush#",	//1864
    "setMSelectedColor",	//1865
    "setMSelectedColor#",	//1866
    "setMSelectedFont",	//1867
    "setMSelectedFont#",	//1868
    "setMSelectedIconBorderPen",	//1869
    "setMSelectedIconBorderPen#",	//1870
    "setMSelectedLabelColor",	//1871
    "setMSelectedLabelColor#",	//1872
    "setMSelectedLabelFont",	//1873
    "setMSelectedLabelFont#",	//1874
    "setMSelectedParts",	//1875
    "setMSelectedParts$",	//1876
    "setMSelectedPen",	//1877
    "setMSelectedPen#",	//1878
    "setMSelectedSubTickPen",	//1879
    "setMSelectedSubTickPen#",	//1880
    "setMSelectedTextColor",	//1881
    "setMSelectedTextColor#",	//1882
    "setMSelectedTickLabelColor",	//1883
    "setMSelectedTickLabelColor#",	//1884
    "setMSelectedTickLabelFont",	//1885
    "setMSelectedTickLabelFont#",	//1886
    "setMSelectedTickPen",	//1887
    "setMSelectedTickPen#",	//1888
    "setMSelectionTolerance",	//1889
    "setMSelectionTolerance$",	//1890
    "setMShape",	//1891
    "setMShape$",	//1892
    "setMSize",	//1893
    "setMSize$",	//1894
    "setMSpacing",	//1895
    "setMSpacing$",	//1896
    "setMSpacingType",	//1897
    "setMSpacingType$",	//1898
    "setMStyle",	//1899
    "setMStyle$",	//1900
    "setMSubGridPen",	//1901
    "setMSubGridPen#",	//1902
    "setMSubGridVisible",	//1903
    "setMSubGridVisible$",	//1904
    "setMSubTickCount",	//1905
    "setMSubTickCount$",	//1906
    "setMSubTickPen",	//1907
    "setMSubTickPen#",	//1908
    "setMSubTickVector",	//1909
    "setMSubTickVector?",	//1910
    "setMTail",	//1911
    "setMTail#",	//1912
    "setMText",	//1913
    "setMText$",	//1914
    "setMTextAlignment",	//1915
    "setMTextAlignment$",	//1916
    "setMTextBoundingRect",	//1917
    "setMTextBoundingRect#",	//1918
    "setMTextColor",	//1919
    "setMTextColor#",	//1920
    "setMTickLabelColor",	//1921
    "setMTickLabelColor#",	//1922
    "setMTickLabelFont",	//1923
    "setMTickLabelFont#",	//1924
    "setMTickLabelType",	//1925
    "setMTickLabelType$",	//1926
    "setMTickLabels",	//1927
    "setMTickLabels$",	//1928
    "setMTickPen",	//1929
    "setMTickPen#",	//1930
    "setMTickStep",	//1931
    "setMTickStep$",	//1932
    "setMTickVector",	//1933
    "setMTickVector?",	//1934
    "setMTickVectorLabels",	//1935
    "setMTickVectorLabels?",	//1936
    "setMTicks",	//1937
    "setMTicks$",	//1938
    "setMTightBoundary",	//1939
    "setMTightBoundary$",	//1940
    "setMTransformationMode",	//1941
    "setMTransformationMode$",	//1942
    "setMTwoColored",	//1943
    "setMTwoColored$",	//1944
    "setMType",	//1945
    "setMType$",	//1946
    "setMUpperQuartile",	//1947
    "setMUpperQuartile$",	//1948
    "setMValue",	//1949
    "setMValue$",	//1950
    "setMValueAxis",	//1951
    "setMValueAxis?",	//1952
    "setMValueRange",	//1953
    "setMValueRange#",	//1954
    "setMValueSize",	//1955
    "setMValueSize$",	//1956
    "setMViewport",	//1957
    "setMViewport#",	//1958
    "setMVisible",	//1959
    "setMVisible$",	//1960
    "setMWhiskerBarPen",	//1961
    "setMWhiskerBarPen#",	//1962
    "setMWhiskerPen",	//1963
    "setMWhiskerPen#",	//1964
    "setMWhiskerWidth",	//1965
    "setMWhiskerWidth$",	//1966
    "setMWidth",	//1967
    "setMWidth$",	//1968
    "setMWidthType",	//1969
    "setMWidthType$",	//1970
    "setMZeroLinePen",	//1971
    "setMZeroLinePen#",	//1972
    "setMarginGroup",	//1973
    "setMarginGroup$#",	//1974
    "setMargins",	//1975
    "setMargins#",	//1976
    "setMaximum",	//1977
    "setMaximum$",	//1978
    "setMaximumSize",	//1979
    "setMaximumSize#",	//1980
    "setMaximumSize$$",	//1981
    "setMedian",	//1982
    "setMedian$",	//1983
    "setMedianPen",	//1984
    "setMedianPen#",	//1985
    "setMinimum",	//1986
    "setMinimum$",	//1987
    "setMinimumMargins",	//1988
    "setMinimumMargins#",	//1989
    "setMinimumSize",	//1990
    "setMinimumSize#",	//1991
    "setMinimumSize$$",	//1992
    "setMode",	//1993
    "setMode$",	//1994
    "setMode$$",	//1995
    "setModes",	//1996
    "setModes$",	//1997
    "setMultiSelectModifier",	//1998
    "setMultiSelectModifier$",	//1999
    "setName",	//2000
    "setName$",	//2001
    "setNoAntialiasingOnDrag",	//2002
    "setNoAntialiasingOnDrag$",	//2003
    "setNotAntialiasedElement",	//2004
    "setNotAntialiasedElement$",	//2005
    "setNotAntialiasedElement$$",	//2006
    "setNotAntialiasedElements",	//2007
    "setNotAntialiasedElements#",	//2008
    "setNumberFormat",	//2009
    "setNumberFormat$",	//2010
    "setNumberPrecision",	//2011
    "setNumberPrecision$",	//2012
    "setOffset",	//2013
    "setOffset$",	//2014
    "setOpen",	//2015
    "setOpen$",	//2016
    "setOuterRect",	//2017
    "setOuterRect#",	//2018
    "setOutlierStyle",	//2019
    "setOutlierStyle#",	//2020
    "setOutliers",	//2021
    "setOutliers?",	//2022
    "setPadding",	//2023
    "setPadding#",	//2024
    "setPadding$",	//2025
    "setParentAnchor",	//2026
    "setParentAnchor#",	//2027
    "setParentAnchor#$",	//2028
    "setParentAnchorX",	//2029
    "setParentAnchorX#",	//2030
    "setParentAnchorX#$",	//2031
    "setParentAnchorY",	//2032
    "setParentAnchorY#",	//2033
    "setParentAnchorY#$",	//2034
    "setParentLayerable",	//2035
    "setParentLayerable#",	//2036
    "setPen",	//2037
    "setPen#",	//2038
    "setPen$",	//2039
    "setPenNegative",	//2040
    "setPenNegative#",	//2041
    "setPenPositive",	//2042
    "setPenPositive#",	//2043
    "setPeriodic",	//2044
    "setPeriodic$",	//2045
    "setPixelPoint",	//2046
    "setPixelPoint#",	//2047
    "setPixmap",	//2048
    "setPixmap#",	//2049
    "setPlottingHint",	//2050
    "setPlottingHint$",	//2051
    "setPlottingHint$$",	//2052
    "setPlottingHints",	//2053
    "setPlottingHints#",	//2054
    "setPositionAlignment",	//2055
    "setPositionAlignment$",	//2056
    "setRange",	//2057
    "setRange#",	//2058
    "setRange##",	//2059
    "setRange$$",	//2060
    "setRange$$$",	//2061
    "setRangeDrag",	//2062
    "setRangeDrag$",	//2063
    "setRangeDragAxes",	//2064
    "setRangeDragAxes##",	//2065
    "setRangeLower",	//2066
    "setRangeLower$",	//2067
    "setRangeReversed",	//2068
    "setRangeReversed$",	//2069
    "setRangeUpper",	//2070
    "setRangeUpper$",	//2071
    "setRangeZoom",	//2072
    "setRangeZoom$",	//2073
    "setRangeZoomAxes",	//2074
    "setRangeZoomAxes##",	//2075
    "setRangeZoomFactor",	//2076
    "setRangeZoomFactor$",	//2077
    "setRangeZoomFactor$$",	//2078
    "setRotation",	//2079
    "setRotation$",	//2080
    "setRowSpacing",	//2081
    "setRowSpacing$",	//2082
    "setRowStretchFactor",	//2083
    "setRowStretchFactor$$",	//2084
    "setRowStretchFactors",	//2085
    "setRowStretchFactors?",	//2086
    "setScaleLogBase",	//2087
    "setScaleLogBase$",	//2088
    "setScaleRatio",	//2089
    "setScaleRatio#",	//2090
    "setScaleRatio#$",	//2091
    "setScaleType",	//2092
    "setScaleType$",	//2093
    "setScaled",	//2094
    "setScaled$",	//2095
    "setScaled$$",	//2096
    "setScaled$$$",	//2097
    "setScatterStyle",	//2098
    "setScatterStyle#",	//2099
    "setSelectable",	//2100
    "setSelectable$",	//2101
    "setSelectableParts",	//2102
    "setSelectableParts#",	//2103
    "setSelected",	//2104
    "setSelected$",	//2105
    "setSelectedBasePen",	//2106
    "setSelectedBasePen#",	//2107
    "setSelectedBorderPen",	//2108
    "setSelectedBorderPen#",	//2109
    "setSelectedBrush",	//2110
    "setSelectedBrush#",	//2111
    "setSelectedColor",	//2112
    "setSelectedColor#",	//2113
    "setSelectedFont",	//2114
    "setSelectedFont#",	//2115
    "setSelectedIconBorderPen",	//2116
    "setSelectedIconBorderPen#",	//2117
    "setSelectedLabelColor",	//2118
    "setSelectedLabelColor#",	//2119
    "setSelectedLabelFont",	//2120
    "setSelectedLabelFont#",	//2121
    "setSelectedParts",	//2122
    "setSelectedParts#",	//2123
    "setSelectedPen",	//2124
    "setSelectedPen#",	//2125
    "setSelectedSubTickPen",	//2126
    "setSelectedSubTickPen#",	//2127
    "setSelectedTextColor",	//2128
    "setSelectedTextColor#",	//2129
    "setSelectedTickLabelColor",	//2130
    "setSelectedTickLabelColor#",	//2131
    "setSelectedTickLabelFont",	//2132
    "setSelectedTickLabelFont#",	//2133
    "setSelectedTickPen",	//2134
    "setSelectedTickPen#",	//2135
    "setSelectionTolerance",	//2136
    "setSelectionTolerance$",	//2137
    "setShape",	//2138
    "setShape$",	//2139
    "setSize",	//2140
    "setSize$",	//2141
    "setSize$$",	//2142
    "setSpacing",	//2143
    "setSpacing$",	//2144
    "setSpacingType",	//2145
    "setSpacingType$",	//2146
    "setStyle",	//2147
    "setStyle$",	//2148
    "setSubGridPen",	//2149
    "setSubGridPen#",	//2150
    "setSubGridVisible",	//2151
    "setSubGridVisible$",	//2152
    "setSubTickCount",	//2153
    "setSubTickCount$",	//2154
    "setSubTickLength",	//2155
    "setSubTickLength$",	//2156
    "setSubTickLength$$",	//2157
    "setSubTickLengthIn",	//2158
    "setSubTickLengthIn$",	//2159
    "setSubTickLengthOut",	//2160
    "setSubTickLengthOut$",	//2161
    "setSubTickPen",	//2162
    "setSubTickPen#",	//2163
    "setT",	//2164
    "setT$",	//2165
    "setTail",	//2166
    "setTail#",	//2167
    "setText",	//2168
    "setText$",	//2169
    "setTextAlignment",	//2170
    "setTextAlignment$",	//2171
    "setTextColor",	//2172
    "setTextColor#",	//2173
    "setTickLabelColor",	//2174
    "setTickLabelColor#",	//2175
    "setTickLabelFont",	//2176
    "setTickLabelFont#",	//2177
    "setTickLabelPadding",	//2178
    "setTickLabelPadding$",	//2179
    "setTickLabelRotation",	//2180
    "setTickLabelRotation$",	//2181
    "setTickLabelSide",	//2182
    "setTickLabelSide$",	//2183
    "setTickLabelType",	//2184
    "setTickLabelType$",	//2185
    "setTickLabels",	//2186
    "setTickLabels$",	//2187
    "setTickLength",	//2188
    "setTickLength$",	//2189
    "setTickLength$$",	//2190
    "setTickLengthIn",	//2191
    "setTickLengthIn$",	//2192
    "setTickLengthOut",	//2193
    "setTickLengthOut$",	//2194
    "setTickPen",	//2195
    "setTickPen#",	//2196
    "setTickStep",	//2197
    "setTickStep$",	//2198
    "setTickVector",	//2199
    "setTickVector?",	//2200
    "setTickVectorLabels",	//2201
    "setTickVectorLabels?",	//2202
    "setTicks",	//2203
    "setTicks$",	//2204
    "setTightBoundary",	//2205
    "setTightBoundary$",	//2206
    "setTwoColored",	//2207
    "setTwoColored$",	//2208
    "setType",	//2209
    "setType$",	//2210
    "setTypeX",	//2211
    "setTypeX$",	//2212
    "setTypeY",	//2213
    "setTypeY$",	//2214
    "setUpper",	//2215
    "setUpper$",	//2216
    "setUpperEnding",	//2217
    "setUpperEnding#",	//2218
    "setUpperQuartile",	//2219
    "setUpperQuartile$",	//2220
    "setValue",	//2221
    "setValue$",	//2222
    "setValueAxis",	//2223
    "setValueAxis#",	//2224
    "setValueErrorMinus",	//2225
    "setValueErrorMinus$",	//2226
    "setValueErrorPlus",	//2227
    "setValueErrorPlus$",	//2228
    "setValueRange",	//2229
    "setValueRange#",	//2230
    "setValueSize",	//2231
    "setValueSize$",	//2232
    "setViewport",	//2233
    "setViewport#",	//2234
    "setVisible",	//2235
    "setVisible$",	//2236
    "setWhiskerBarPen",	//2237
    "setWhiskerBarPen#",	//2238
    "setWhiskerPen",	//2239
    "setWhiskerPen#",	//2240
    "setWhiskerWidth",	//2241
    "setWhiskerWidth$",	//2242
    "setWidth",	//2243
    "setWidth$",	//2244
    "setWidthType",	//2245
    "setWidthType$",	//2246
    "setXAxis",	//2247
    "setXAxis#",	//2248
    "setXAxis2",	//2249
    "setXAxis2#",	//2250
    "setYAxis",	//2251
    "setYAxis#",	//2252
    "setYAxis2",	//2253
    "setYAxis2#",	//2254
    "setZeroLinePen",	//2255
    "setZeroLinePen#",	//2256
    "setupFullAxesBox",	//2257
    "setupFullAxesBox$",	//2258
    "setupTickVectors",	//2259
    "shape",	//2260
    "showEvent",	//2261
    "showbase",	//2262
    "showbase#",	//2263
    "simplify",	//2264
    "size",	//2265
    "sizeConstraintsChanged",	//2266
    "sizeHint",	//2267
    "spAxis",	//2268
    "spAxisLabel",	//2269
    "spItems",	//2270
    "spLegendBox",	//2271
    "spNone",	//2272
    "spTickLabels",	//2273
    "spacing",	//2274
    "spacingType",	//2275
    "ssCircle",	//2276
    "ssCross",	//2277
    "ssCrossCircle",	//2278
    "ssCrossSquare",	//2279
    "ssCustom",	//2280
    "ssDiamond",	//2281
    "ssDisc",	//2282
    "ssDot",	//2283
    "ssNone",	//2284
    "ssPeace",	//2285
    "ssPixmap",	//2286
    "ssPlus",	//2287
    "ssPlusCircle",	//2288
    "ssPlusSquare",	//2289
    "ssSquare",	//2290
    "ssStar",	//2291
    "ssTriangle",	//2292
    "ssTriangleInverted",	//2293
    "stAbsolute",	//2294
    "stAxisRectRatio",	//2295
    "stLinear",	//2296
    "stLogarithmic",	//2297
    "stPlotCoords",	//2298
    "staticMetaObject",	//2299
    "strcat",	//2300
    "strcat$$",	//2301
    "strcmp",	//2302
    "strcmp$$",	//2303
    "strcoll",	//2304
    "strcoll$$",	//2305
    "strcpy",	//2306
    "strcpy$$",	//2307
    "strcspn",	//2308
    "strcspn$$",	//2309
    "strdup",	//2310
    "strdup$",	//2311
    "strerror",	//2312
    "strerror$",	//2313
    "strlen",	//2314
    "strlen$",	//2315
    "strncat",	//2316
    "strncat$$$",	//2317
    "strncmp",	//2318
    "strncmp$$$",	//2319
    "strncpy",	//2320
    "strncpy$$$",	//2321
    "strspn",	//2322
    "strspn$$",	//2323
    "strtok",	//2324
    "strtok$$",	//2325
    "strtok_r",	//2326
    "strtok_r$$?",	//2327
    "strxfrm",	//2328
    "strxfrm$$$",	//2329
    "style",	//2330
    "styleChange",	//2331
    "subGridPen",	//2332
    "subGridVisible",	//2333
    "subTickCount",	//2334
    "subTickLengthIn",	//2335
    "subTickLengthOut",	//2336
    "subTickPen",	//2337
    "t",	//2338
    "tabletEvent",	//2339
    "tail",	//2340
    "take",	//2341
    "take#",	//2342
    "takeAt",	//2343
    "takeAt$",	//2344
    "text",	//2345
    "textAlignment",	//2346
    "textColor",	//2347
    "tickLabelColor",	//2348
    "tickLabelFont",	//2349
    "tickLabelPadding",	//2350
    "tickLabelRotation",	//2351
    "tickLabelSide",	//2352
    "tickLabelType",	//2353
    "tickLabels",	//2354
    "tickLengthIn",	//2355
    "tickLengthOut",	//2356
    "tickPen",	//2357
    "tickStep",	//2358
    "tickVector",	//2359
    "tickVectorLabels",	//2360
    "ticks",	//2361
    "ticksRequest",	//2362
    "tightBoundary",	//2363
    "timeSeriesToOhlc",	//2364
    "timeSeriesToOhlc??$",	//2365
    "timeSeriesToOhlc??$$",	//2366
    "timerEvent",	//2367
    "titleClick",	//2368
    "titleClick##",	//2369
    "titleDoubleClick",	//2370
    "titleDoubleClick##",	//2371
    "toPainter",	//2372
    "toPainter#",	//2373
    "toPainter#$",	//2374
    "toPainter#$$",	//2375
    "toPixmap",	//2376
    "toPixmap$",	//2377
    "toPixmap$$",	//2378
    "toPixmap$$$",	//2379
    "toQCPItemPosition",	//2380
    "top",	//2381
    "topLeft",	//2382
    "topRight",	//2383
    "tr",	//2384
    "tr$",	//2385
    "tr$$",	//2386
    "tr$$$",	//2387
    "trUtf8",	//2388
    "trUtf8$",	//2389
    "trUtf8$$",	//2390
    "trUtf8$$$",	//2391
    "transformationMode",	//2392
    "tsCircle",	//2393
    "tsCrosshair",	//2394
    "tsNone",	//2395
    "tsPlus",	//2396
    "tsSquare",	//2397
    "twoColored",	//2398
    "type",	//2399
    "typeX",	//2400
    "typeY",	//2401
    "unregisterBars",	//2402
    "unregisterBars#",	//2403
    "upLayout",	//2404
    "upMargins",	//2405
    "upPreparation",	//2406
    "update",	//2407
    "update$",	//2408
    "updateAxesOffset",	//2409
    "updateAxesOffset$",	//2410
    "updateColorBuffer",	//2411
    "updateLayerIndices",	//2412
    "updateLayout",	//2413
    "updateLegendIcon",	//2414
    "updateLegendIcon$",	//2415
    "updateLegendIcon$#",	//2416
    "updateMapImage",	//2417
    "updatePosition",	//2418
    "updateScaledPixmap",	//2419
    "updateScaledPixmap#",	//2420
    "updateScaledPixmap#$",	//2421
    "updateScaledPixmap#$$",	//2422
    "upper",	//2423
    "upperEnding",	//2424
    "upperFillBasePoint",	//2425
    "upperFillBasePoint$",	//2426
    "upperQuartile",	//2427
    "uppercasebase",	//2428
    "uppercasebase#",	//2429
    "uppercasedigits",	//2430
    "uppercasedigits#",	//2431
    "validRange",	//2432
    "validRange#",	//2433
    "validRange$$",	//2434
    "value",	//2435
    "valueAxis",	//2436
    "valueErrorMinus",	//2437
    "valueErrorPlus",	//2438
    "valueRange",	//2439
    "valueSize",	//2440
    "viewport",	//2441
    "visible",	//2442
    "visibleTickBounds",	//2443
    "visibleTickBounds$$",	//2444
    "wheelEvent",	//2445
    "wheelEvent#",	//2446
    "whiskerBarPen",	//2447
    "whiskerPen",	//2448
    "whiskerWidth",	//2449
    "width",	//2450
    "widthType",	//2451
    "windowActivationChange",	//2452
    "ws",	//2453
    "ws#",	//2454
    "wtAbsolute",	//2455
    "wtAxisRectRatio",	//2456
    "wtPlotCoords",	//2457
    "x11Event",	//2458
    "xAxis",	//2459
    "xAxis2",	//2460
    "yAxis",	//2461
    "yAxis2",	//2462
    "zeroLinePen",	//2463
    "~QCPAbstractItem",	//2464
    "~QCPAbstractLegendItem",	//2465
    "~QCPAbstractPlottable",	//2466
    "~QCPAxis",	//2467
    "~QCPAxisRect",	//2468
    "~QCPBarData",	//2469
    "~QCPBars",	//2470
    "~QCPBarsGroup",	//2471
    "~QCPColorGradient",	//2472
    "~QCPColorMap",	//2473
    "~QCPColorMapData",	//2474
    "~QCPColorScale",	//2475
    "~QCPCurve",	//2476
    "~QCPCurveData",	//2477
    "~QCPData",	//2478
    "~QCPFinancial",	//2479
    "~QCPFinancialData",	//2480
    "~QCPGraph",	//2481
    "~QCPGrid",	//2482
    "~QCPItemAnchor",	//2483
    "~QCPItemBracket",	//2484
    "~QCPItemCurve",	//2485
    "~QCPItemEllipse",	//2486
    "~QCPItemLine",	//2487
    "~QCPItemPixmap",	//2488
    "~QCPItemPosition",	//2489
    "~QCPItemRect",	//2490
    "~QCPItemStraightLine",	//2491
    "~QCPItemText",	//2492
    "~QCPItemTracer",	//2493
    "~QCPLayer",	//2494
    "~QCPLayerable",	//2495
    "~QCPLayout",	//2496
    "~QCPLayoutElement",	//2497
    "~QCPLayoutGrid",	//2498
    "~QCPLayoutInset",	//2499
    "~QCPLegend",	//2500
    "~QCPLineEnding",	//2501
    "~QCPMarginGroup",	//2502
    "~QCPPainter",	//2503
    "~QCPPlotTitle",	//2504
    "~QCPPlottableLegendItem",	//2505
    "~QCPRange",	//2506
    "~QCPScatterStyle",	//2507
    "~QCPStatisticalBox",	//2508
    "~QCustomPlot",	//2509
};

// (classId, name (index in methodNames), argumentList index, number of args, method flags, return type (index in types), xcall() index)
static Smoke::Method methods[] = {
    { 0, 0, 0, 0, 0, 0, 0 },	// (no method)
    {4, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1 QCPAbstractItem::metaObject() const
    {4, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2 QCPAbstractItem::qt_metacast(const char*)
    {4, 2384, 3, 2, Smoke::mf_static, 222, 3},	//3 QCPAbstractItem::tr(const char*, const char*)
    {4, 2388, 3, 2, Smoke::mf_static, 222, 4},	//4 QCPAbstractItem::trUtf8(const char*, const char*)
    {4, 2384, 6, 3, Smoke::mf_static, 222, 5},	//5 QCPAbstractItem::tr(const char*, const char*, int)
    {4, 2388, 6, 3, Smoke::mf_static, 222, 6},	//6 QCPAbstractItem::trUtf8(const char*, const char*, int)
    {4, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//7 QCPAbstractItem::qt_metacall(QMetaObject::Call, int, void**)
    {4, 4, 14, 1, Smoke::mf_ctor, 9, 8},	//8 QCPAbstractItem::QCPAbstractItem(QCustomPlot*)
    {4, 291, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 9},	//9 QCPAbstractItem::clipToAxisRect() const
    {4, 289, 0, 0, Smoke::mf_const|Smoke::mf_property, 23, 10},	//10 QCPAbstractItem::clipAxisRect() const
    {4, 1239, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 11},	//11 QCPAbstractItem::selectable() const
    {4, 1243, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 12},	//12 QCPAbstractItem::selected() const
    {4, 1340, 16, 1, Smoke::mf_property, 0, 13},	//13 QCPAbstractItem::setClipToAxisRect(bool)
    {4, 1338, 18, 1, Smoke::mf_property, 0, 14},	//14 QCPAbstractItem::setClipAxisRect(QCPAxisRect*)
    {4, 2100, 16, 1, Smoke::mf_property, 0, 15},	//15 QCPAbstractItem::setSelectable(bool)
    {4, 2104, 16, 1, Smoke::mf_property, 0, 16},	//16 QCPAbstractItem::setSelected(bool)
    {4, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 414, 17},	//17 QCPAbstractItem::selectTest(const QPointF&, bool, QVariant*) const [pure virtual]
    {4, 1096, 0, 0, Smoke::mf_const, 161, 18},	//18 QCPAbstractItem::positions() const
    {4, 176, 0, 0, Smoke::mf_const, 159, 19},	//19 QCPAbstractItem::anchors() const
    {4, 1094, 24, 1, Smoke::mf_const, 70, 20},	//20 QCPAbstractItem::position(const QString&) const
    {4, 172, 24, 1, Smoke::mf_const, 60, 21},	//21 QCPAbstractItem::anchor(const QString&) const
    {4, 562, 24, 1, Smoke::mf_const, 318, 22},	//22 QCPAbstractItem::hasAnchor(const QString&) const
    {4, 1265, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 23},	//23 QCPAbstractItem::selectionChanged(bool)
    {4, 1240, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 24},	//24 QCPAbstractItem::selectableChanged(bool)
    {4, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 25},	//25 QCPAbstractItem::selectionCategory() const
    {4, 290, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 211, 26},	//26 QCPAbstractItem::clipRect() const
    {4, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 27},	//27 QCPAbstractItem::applyDefaultAntialiasingHint(QCPPainter*) const
    {4, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 28},	//28 QCPAbstractItem::draw(QCPPainter*) [pure virtual]
    {4, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 29},	//29 QCPAbstractItem::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {4, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 30},	//30 QCPAbstractItem::deselectEvent(bool*)
    {4, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 31},	//31 QCPAbstractItem::anchorPixelPoint(int) const
    {4, 354, 37, 3, Smoke::mf_const|Smoke::mf_protected, 414, 32},	//32 QCPAbstractItem::distSqrToLine(const QPointF&, const QPointF&, const QPointF&) const
    {4, 1122, 41, 3, Smoke::mf_const|Smoke::mf_protected, 414, 33},	//33 QCPAbstractItem::rectSelectTest(const QRectF&, const QPointF&, bool) const
    {4, 329, 24, 1, Smoke::mf_protected, 70, 34},	//34 QCPAbstractItem::createPosition(const QString&)
    {4, 327, 45, 2, Smoke::mf_protected, 60, 35},	//35 QCPAbstractItem::createAnchor(const QString&, int)
    {4, 2384, 1, 1, Smoke::mf_static, 222, 36},	//36 QCPAbstractItem::tr(const char*)
    {4, 2388, 1, 1, Smoke::mf_static, 222, 37},	//37 QCPAbstractItem::trUtf8(const char*)
    {4, 1236, 48, 2, Smoke::mf_const, 414, 38},	//38 QCPAbstractItem::selectTest(const QPointF&, bool) const
    {4, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 39},	//39 QCPAbstractItem::staticMetaObject() const
    {4, 732, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 40},	//40 QCPAbstractItem::mClipToAxisRect() const
    {4, 1573, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//41 QCPAbstractItem::setMClipToAxisRect(bool)
    {4, 731, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 203, 42},	//42 QCPAbstractItem::mClipAxisRect() const
    {4, 1571, 51, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//43 QCPAbstractItem::setMClipAxisRect(const QPointer<QCPAxisRect>&)
    {4, 848, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 162, 44},	//44 QCPAbstractItem::mPositions() const
    {4, 1807, 53, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//45 QCPAbstractItem::setMPositions(const QList<QCPItemPosition*>&)
    {4, 688, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 160, 46},	//46 QCPAbstractItem::mAnchors() const
    {4, 1484, 55, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//47 QCPAbstractItem::setMAnchors(const QList<QCPItemAnchor*>&)
    {4, 871, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 48},	//48 QCPAbstractItem::mSelectable() const
    {4, 1853, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//49 QCPAbstractItem::setMSelectable(bool)
    {4, 873, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 50},	//50 QCPAbstractItem::mSelected() const
    {4, 1857, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//51 QCPAbstractItem::setMSelected(bool)
    {4, 2464, 0, 0, Smoke::mf_dtor, 0, 52 },	//52 QCPAbstractItem::~QCPAbstractItem()
    {5, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//53 QCPAbstractLegendItem::metaObject() const
    {5, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//54 QCPAbstractLegendItem::qt_metacast(const char*)
    {5, 2384, 3, 2, Smoke::mf_static, 222, 3},	//55 QCPAbstractLegendItem::tr(const char*, const char*)
    {5, 2388, 3, 2, Smoke::mf_static, 222, 4},	//56 QCPAbstractLegendItem::trUtf8(const char*, const char*)
    {5, 2384, 6, 3, Smoke::mf_static, 222, 5},	//57 QCPAbstractLegendItem::tr(const char*, const char*, int)
    {5, 2388, 6, 3, Smoke::mf_static, 222, 6},	//58 QCPAbstractLegendItem::trUtf8(const char*, const char*, int)
    {5, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//59 QCPAbstractLegendItem::qt_metacall(QMetaObject::Call, int, void**)
    {5, 6, 57, 1, Smoke::mf_ctor, 10, 8},	//60 QCPAbstractLegendItem::QCPAbstractLegendItem(QCPLegend*)
    {5, 1060, 0, 0, Smoke::mf_const|Smoke::mf_property, 89, 9},	//61 QCPAbstractLegendItem::parentLegend() const
    {5, 457, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 10},	//62 QCPAbstractLegendItem::font() const
    {5, 2347, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 11},	//63 QCPAbstractLegendItem::textColor() const
    {5, 1249, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 12},	//64 QCPAbstractLegendItem::selectedFont() const
    {5, 1260, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 13},	//65 QCPAbstractLegendItem::selectedTextColor() const
    {5, 1239, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 14},	//66 QCPAbstractLegendItem::selectable() const
    {5, 1243, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 15},	//67 QCPAbstractLegendItem::selected() const
    {5, 1403, 59, 1, Smoke::mf_property, 0, 16},	//68 QCPAbstractLegendItem::setFont(const QFont&)
    {5, 2172, 61, 1, Smoke::mf_property, 0, 17},	//69 QCPAbstractLegendItem::setTextColor(const QColor&)
    {5, 2114, 59, 1, Smoke::mf_property, 0, 18},	//70 QCPAbstractLegendItem::setSelectedFont(const QFont&)
    {5, 2128, 61, 1, Smoke::mf_property, 0, 19},	//71 QCPAbstractLegendItem::setSelectedTextColor(const QColor&)
    {5, 2100, 16, 1, Smoke::mf_property, 0, 20},	//72 QCPAbstractLegendItem::setSelectable(bool)
    {5, 2104, 16, 1, Smoke::mf_property, 0, 21},	//73 QCPAbstractLegendItem::setSelected(bool)
    {5, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 22},	//74 QCPAbstractLegendItem::selectTest(const QPointF&, bool, QVariant*) const
    {5, 1265, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 23},	//75 QCPAbstractLegendItem::selectionChanged(bool)
    {5, 1240, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 24},	//76 QCPAbstractLegendItem::selectableChanged(bool)
    {5, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 25},	//77 QCPAbstractLegendItem::selectionCategory() const
    {5, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 26},	//78 QCPAbstractLegendItem::applyDefaultAntialiasingHint(QCPPainter*) const
    {5, 290, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 211, 27},	//79 QCPAbstractLegendItem::clipRect() const
    {5, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 28},	//80 QCPAbstractLegendItem::draw(QCPPainter*) [pure virtual]
    {5, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 29},	//81 QCPAbstractLegendItem::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {5, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 30},	//82 QCPAbstractLegendItem::deselectEvent(bool*)
    {5, 2384, 1, 1, Smoke::mf_static, 222, 31},	//83 QCPAbstractLegendItem::tr(const char*)
    {5, 2388, 1, 1, Smoke::mf_static, 222, 32},	//84 QCPAbstractLegendItem::trUtf8(const char*)
    {5, 1236, 48, 2, Smoke::mf_const, 414, 33},	//85 QCPAbstractLegendItem::selectTest(const QPointF&, bool) const
    {5, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 34},	//86 QCPAbstractLegendItem::staticMetaObject() const
    {5, 833, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 89, 35},	//87 QCPAbstractLegendItem::mParentLegend() const
    {5, 1777, 57, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 36},	//88 QCPAbstractLegendItem::setMParentLegend(QCPLegend*)
    {5, 760, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 37},	//89 QCPAbstractLegendItem::mFont() const
    {5, 1630, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 38},	//90 QCPAbstractLegendItem::setMFont(const QFont&)
    {5, 904, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 39},	//91 QCPAbstractLegendItem::mTextColor() const
    {5, 1919, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 40},	//92 QCPAbstractLegendItem::setMTextColor(const QColor&)
    {5, 878, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 41},	//93 QCPAbstractLegendItem::mSelectedFont() const
    {5, 1867, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 42},	//94 QCPAbstractLegendItem::setMSelectedFont(const QFont&)
    {5, 885, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 43},	//95 QCPAbstractLegendItem::mSelectedTextColor() const
    {5, 1881, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 44},	//96 QCPAbstractLegendItem::setMSelectedTextColor(const QColor&)
    {5, 871, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 45},	//97 QCPAbstractLegendItem::mSelectable() const
    {5, 1853, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 46},	//98 QCPAbstractLegendItem::setMSelectable(bool)
    {5, 873, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 47},	//99 QCPAbstractLegendItem::mSelected() const
    {5, 1857, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 48},	//100 QCPAbstractLegendItem::setMSelected(bool)
    {5, 2465, 0, 0, Smoke::mf_dtor, 0, 49 },	//101 QCPAbstractLegendItem::~QCPAbstractLegendItem()
    {6, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//102 QCPAbstractPlottable::metaObject() const
    {6, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//103 QCPAbstractPlottable::qt_metacast(const char*)
    {6, 2384, 3, 2, Smoke::mf_static, 222, 3},	//104 QCPAbstractPlottable::tr(const char*, const char*)
    {6, 2388, 3, 2, Smoke::mf_static, 222, 4},	//105 QCPAbstractPlottable::trUtf8(const char*, const char*)
    {6, 2384, 6, 3, Smoke::mf_static, 222, 5},	//106 QCPAbstractPlottable::tr(const char*, const char*, int)
    {6, 2388, 6, 3, Smoke::mf_static, 222, 6},	//107 QCPAbstractPlottable::trUtf8(const char*, const char*, int)
    {6, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//108 QCPAbstractPlottable::qt_metacall(QMetaObject::Call, int, void**)
    {6, 8, 63, 2, Smoke::mf_ctor, 11, 8},	//109 QCPAbstractPlottable::QCPAbstractPlottable(QCPAxis*, QCPAxis*)
    {6, 1000, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 9},	//110 QCPAbstractPlottable::name() const
    {6, 180, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 10},	//111 QCPAbstractPlottable::antialiasedFill() const
    {6, 181, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 11},	//112 QCPAbstractPlottable::antialiasedScatters() const
    {6, 179, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 12},	//113 QCPAbstractPlottable::antialiasedErrorBars() const
    {6, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 13},	//114 QCPAbstractPlottable::pen() const
    {6, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 14},	//115 QCPAbstractPlottable::selectedPen() const
    {6, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 15},	//116 QCPAbstractPlottable::brush() const
    {6, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 16},	//117 QCPAbstractPlottable::selectedBrush() const
    {6, 623, 0, 0, Smoke::mf_const|Smoke::mf_property, 14, 17},	//118 QCPAbstractPlottable::keyAxis() const
    {6, 2436, 0, 0, Smoke::mf_const|Smoke::mf_property, 14, 18},	//119 QCPAbstractPlottable::valueAxis() const
    {6, 1239, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 19},	//120 QCPAbstractPlottable::selectable() const
    {6, 1243, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 20},	//121 QCPAbstractPlottable::selected() const
    {6, 2000, 24, 1, Smoke::mf_property, 0, 21},	//122 QCPAbstractPlottable::setName(const QString&)
    {6, 1280, 16, 1, Smoke::mf_property, 0, 22},	//123 QCPAbstractPlottable::setAntialiasedFill(bool)
    {6, 1282, 16, 1, Smoke::mf_property, 0, 23},	//124 QCPAbstractPlottable::setAntialiasedScatters(bool)
    {6, 1278, 16, 1, Smoke::mf_property, 0, 24},	//125 QCPAbstractPlottable::setAntialiasedErrorBars(bool)
    {6, 2037, 66, 1, Smoke::mf_property, 0, 25},	//126 QCPAbstractPlottable::setPen(const QPen&)
    {6, 2124, 66, 1, Smoke::mf_property, 0, 26},	//127 QCPAbstractPlottable::setSelectedPen(const QPen&)
    {6, 1326, 68, 1, Smoke::mf_property, 0, 27},	//128 QCPAbstractPlottable::setBrush(const QBrush&)
    {6, 2110, 68, 1, Smoke::mf_property, 0, 28},	//129 QCPAbstractPlottable::setSelectedBrush(const QBrush&)
    {6, 1441, 70, 1, Smoke::mf_property, 0, 29},	//130 QCPAbstractPlottable::setKeyAxis(QCPAxis*)
    {6, 2223, 70, 1, Smoke::mf_property, 0, 30},	//131 QCPAbstractPlottable::setValueAxis(QCPAxis*)
    {6, 2100, 16, 1, Smoke::mf_property, 0, 31},	//132 QCPAbstractPlottable::setSelectable(bool)
    {6, 2104, 16, 1, Smoke::mf_property, 0, 32},	//133 QCPAbstractPlottable::setSelected(bool)
    {6, 285, 0, 0, Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 33},	//134 QCPAbstractPlottable::clearData() [pure virtual]
    {6, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 414, 34},	//135 QCPAbstractPlottable::selectTest(const QPointF&, bool, QVariant*) const [pure virtual]
    {6, 155, 0, 0, Smoke::mf_virtual, 318, 35},	//136 QCPAbstractPlottable::addToLegend()
    {6, 1150, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 318, 36},	//137 QCPAbstractPlottable::removeFromLegend() const
    {6, 1166, 16, 1, Smoke::mf_const, 0, 37},	//138 QCPAbstractPlottable::rescaleAxes(bool) const
    {6, 1171, 16, 1, Smoke::mf_const, 0, 38},	//139 QCPAbstractPlottable::rescaleKeyAxis(bool) const
    {6, 1174, 16, 1, Smoke::mf_const, 0, 39},	//140 QCPAbstractPlottable::rescaleValueAxis(bool) const
    {6, 1265, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 40},	//141 QCPAbstractPlottable::selectionChanged(bool)
    {6, 1240, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 41},	//142 QCPAbstractPlottable::selectableChanged(bool)
    {6, 290, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 211, 42},	//143 QCPAbstractPlottable::clipRect() const
    {6, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 43},	//144 QCPAbstractPlottable::draw(QCPPainter*) [pure virtual]
    {6, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 44},	//145 QCPAbstractPlottable::selectionCategory() const
    {6, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 45},	//146 QCPAbstractPlottable::applyDefaultAntialiasingHint(QCPPainter*) const
    {6, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 46},	//147 QCPAbstractPlottable::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {6, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 47},	//148 QCPAbstractPlottable::deselectEvent(bool*)
    {6, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 48},	//149 QCPAbstractPlottable::drawLegendIcon(QCPPainter*, const QRectF&) const [pure virtual]
    {6, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 101, 49},	//150 QCPAbstractPlottable::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const [pure virtual]
    {6, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 101, 50},	//151 QCPAbstractPlottable::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const [pure virtual]
    {6, 322, 78, 4, Smoke::mf_const|Smoke::mf_protected, 0, 51},	//152 QCPAbstractPlottable::coordsToPixels(double, double, double&, double&) const
    {6, 322, 83, 2, Smoke::mf_const|Smoke::mf_protected, 382, 52},	//153 QCPAbstractPlottable::coordsToPixels(double, double) const
    {6, 1071, 78, 4, Smoke::mf_const|Smoke::mf_protected, 0, 53},	//154 QCPAbstractPlottable::pixelsToCoords(double, double, double&, double&) const
    {6, 1071, 86, 3, Smoke::mf_const|Smoke::mf_protected, 0, 54},	//155 QCPAbstractPlottable::pixelsToCoords(const QPointF&, double&, double&) const
    {6, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 55},	//156 QCPAbstractPlottable::mainPen() const
    {6, 931, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 56},	//157 QCPAbstractPlottable::mainBrush() const
    {6, 193, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 57},	//158 QCPAbstractPlottable::applyFillAntialiasingHint(QCPPainter*) const
    {6, 195, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 58},	//159 QCPAbstractPlottable::applyScattersAntialiasingHint(QCPPainter*) const
    {6, 191, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 59},	//160 QCPAbstractPlottable::applyErrorBarsAntialiasingHint(QCPPainter*) const
    {6, 354, 37, 3, Smoke::mf_const|Smoke::mf_protected, 414, 60},	//161 QCPAbstractPlottable::distSqrToLine(const QPointF&, const QPointF&, const QPointF&) const
    {6, 2384, 1, 1, Smoke::mf_static, 222, 61},	//162 QCPAbstractPlottable::tr(const char*)
    {6, 2388, 1, 1, Smoke::mf_static, 222, 62},	//163 QCPAbstractPlottable::trUtf8(const char*)
    {6, 1236, 48, 2, Smoke::mf_const, 414, 63},	//164 QCPAbstractPlottable::selectTest(const QPointF&, bool) const
    {6, 1166, 0, 0, Smoke::mf_const, 0, 64},	//165 QCPAbstractPlottable::rescaleAxes() const
    {6, 1171, 0, 0, Smoke::mf_const, 0, 65},	//166 QCPAbstractPlottable::rescaleKeyAxis() const
    {6, 1174, 0, 0, Smoke::mf_const, 0, 66},	//167 QCPAbstractPlottable::rescaleValueAxis() const
    {6, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 67},	//168 QCPAbstractPlottable::getKeyRange(bool&) const
    {6, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 68},	//169 QCPAbstractPlottable::getValueRange(bool&) const
    {6, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 69},	//170 QCPAbstractPlottable::staticMetaObject() const
    {6, 814, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 70},	//171 QCPAbstractPlottable::mName() const
    {6, 1738, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 71},	//172 QCPAbstractPlottable::setMName(const QString&)
    {6, 692, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 72},	//173 QCPAbstractPlottable::mAntialiasedFill() const
    {6, 1492, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 73},	//174 QCPAbstractPlottable::setMAntialiasedFill(bool)
    {6, 693, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 74},	//175 QCPAbstractPlottable::mAntialiasedScatters() const
    {6, 1494, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 75},	//176 QCPAbstractPlottable::setMAntialiasedScatters(bool)
    {6, 691, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 76},	//177 QCPAbstractPlottable::mAntialiasedErrorBars() const
    {6, 1490, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 77},	//178 QCPAbstractPlottable::setMAntialiasedErrorBars(bool)
    {6, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 78},	//179 QCPAbstractPlottable::mPen() const
    {6, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 79},	//180 QCPAbstractPlottable::setMPen(const QPen&)
    {6, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 80},	//181 QCPAbstractPlottable::mSelectedPen() const
    {6, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 81},	//182 QCPAbstractPlottable::setMSelectedPen(const QPen&)
    {6, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 82},	//183 QCPAbstractPlottable::mBrush() const
    {6, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 83},	//184 QCPAbstractPlottable::setMBrush(const QBrush&)
    {6, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 84},	//185 QCPAbstractPlottable::mSelectedBrush() const
    {6, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 85},	//186 QCPAbstractPlottable::setMSelectedBrush(const QBrush&)
    {6, 784, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 86},	//187 QCPAbstractPlottable::mKeyAxis() const
    {6, 1678, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 87},	//188 QCPAbstractPlottable::setMKeyAxis(const QPointer<QCPAxis>&)
    {6, 920, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 88},	//189 QCPAbstractPlottable::mValueAxis() const
    {6, 1951, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 89},	//190 QCPAbstractPlottable::setMValueAxis(const QPointer<QCPAxis>&)
    {6, 871, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 90},	//191 QCPAbstractPlottable::mSelectable() const
    {6, 1853, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 91},	//192 QCPAbstractPlottable::setMSelectable(bool)
    {6, 873, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 92},	//193 QCPAbstractPlottable::mSelected() const
    {6, 1857, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 93},	//194 QCPAbstractPlottable::setMSelected(bool)
    {6, 1232, 0, 0, Smoke::mf_static|Smoke::mf_enum, 12, 94},	//195 QCPAbstractPlottable::sdNegative (enum)
    {6, 1231, 0, 0, Smoke::mf_static|Smoke::mf_enum, 12, 95},	//196 QCPAbstractPlottable::sdBoth (enum)
    {6, 1233, 0, 0, Smoke::mf_static|Smoke::mf_enum, 12, 96},	//197 QCPAbstractPlottable::sdPositive (enum)
    {6, 2466, 0, 0, Smoke::mf_dtor, 0, 97 },	//198 QCPAbstractPlottable::~QCPAbstractPlottable()
    {7, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//199 QCPAxis::metaObject() const
    {7, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//200 QCPAxis::qt_metacast(const char*)
    {7, 2384, 3, 2, Smoke::mf_static, 222, 3},	//201 QCPAxis::tr(const char*, const char*)
    {7, 2388, 3, 2, Smoke::mf_static, 222, 4},	//202 QCPAxis::trUtf8(const char*, const char*)
    {7, 2384, 6, 3, Smoke::mf_static, 222, 5},	//203 QCPAxis::tr(const char*, const char*, int)
    {7, 2388, 6, 3, Smoke::mf_static, 222, 6},	//204 QCPAxis::trUtf8(const char*, const char*, int)
    {7, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//205 QCPAxis::qt_metacall(QMetaObject::Call, int, void**)
    {7, 10, 94, 2, Smoke::mf_ctor, 14, 8},	//206 QCPAxis::QCPAxis(QCPAxisRect*, QCPAxis::AxisType)
    {7, 228, 0, 0, Smoke::mf_const|Smoke::mf_property, 15, 9},	//207 QCPAxis::axisType() const
    {7, 222, 0, 0, Smoke::mf_const|Smoke::mf_property, 23, 10},	//208 QCPAxis::axisRect() const
    {7, 1224, 0, 0, Smoke::mf_const|Smoke::mf_property, 18, 11},	//209 QCPAxis::scaleType() const
    {7, 1221, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 12},	//210 QCPAxis::scaleLogBase() const
    {7, 1105, 0, 0, Smoke::mf_const|Smoke::mf_property, 338, 13},	//211 QCPAxis::range() const
    {7, 1112, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 14},	//212 QCPAxis::rangeReversed() const
    {7, 210, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 15},	//213 QCPAxis::autoTicks() const
    {7, 207, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 16},	//214 QCPAxis::autoTickCount() const
    {7, 208, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 17},	//215 QCPAxis::autoTickLabels() const
    {7, 209, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 18},	//216 QCPAxis::autoTickStep() const
    {7, 206, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 19},	//217 QCPAxis::autoSubTicks() const
    {7, 2361, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 20},	//218 QCPAxis::ticks() const
    {7, 2354, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 21},	//219 QCPAxis::tickLabels() const
    {7, 2350, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 22},	//220 QCPAxis::tickLabelPadding() const
    {7, 2353, 0, 0, Smoke::mf_const|Smoke::mf_property, 17, 23},	//221 QCPAxis::tickLabelType() const
    {7, 2349, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 24},	//222 QCPAxis::tickLabelFont() const
    {7, 2348, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 25},	//223 QCPAxis::tickLabelColor() const
    {7, 2351, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 26},	//224 QCPAxis::tickLabelRotation() const
    {7, 2352, 0, 0, Smoke::mf_const|Smoke::mf_property, 16, 27},	//225 QCPAxis::tickLabelSide() const
    {7, 345, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 28},	//226 QCPAxis::dateTimeFormat() const
    {7, 346, 0, 0, Smoke::mf_const|Smoke::mf_property, 305, 29},	//227 QCPAxis::dateTimeSpec() const
    {7, 1010, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 30},	//228 QCPAxis::numberFormat() const
    {7, 1011, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 31},	//229 QCPAxis::numberPrecision() const
    {7, 2358, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 32},	//230 QCPAxis::tickStep() const
    {7, 2359, 0, 0, Smoke::mf_const|Smoke::mf_property, 238, 33},	//231 QCPAxis::tickVector() const
    {7, 2360, 0, 0, Smoke::mf_const|Smoke::mf_property, 236, 34},	//232 QCPAxis::tickVectorLabels() const
    {7, 2355, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 35},	//233 QCPAxis::tickLengthIn() const
    {7, 2356, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 36},	//234 QCPAxis::tickLengthOut() const
    {7, 2334, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 37},	//235 QCPAxis::subTickCount() const
    {7, 2335, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 38},	//236 QCPAxis::subTickLengthIn() const
    {7, 2336, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 39},	//237 QCPAxis::subTickLengthOut() const
    {7, 240, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 40},	//238 QCPAxis::basePen() const
    {7, 2357, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 41},	//239 QCPAxis::tickPen() const
    {7, 2337, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 42},	//240 QCPAxis::subTickPen() const
    {7, 634, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 43},	//241 QCPAxis::labelFont() const
    {7, 633, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 44},	//242 QCPAxis::labelColor() const
    {7, 632, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 45},	//243 QCPAxis::label() const
    {7, 635, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 46},	//244 QCPAxis::labelPadding() const
    {7, 1051, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 47},	//245 QCPAxis::padding() const
    {7, 1014, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 48},	//246 QCPAxis::offset() const
    {7, 1256, 0, 0, Smoke::mf_const, 128, 49},	//247 QCPAxis::selectedParts() const
    {7, 1242, 0, 0, Smoke::mf_const, 128, 50},	//248 QCPAxis::selectableParts() const
    {7, 1262, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 51},	//249 QCPAxis::selectedTickLabelFont() const
    {7, 1254, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 52},	//250 QCPAxis::selectedLabelFont() const
    {7, 1261, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 53},	//251 QCPAxis::selectedTickLabelColor() const
    {7, 1253, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 54},	//252 QCPAxis::selectedLabelColor() const
    {7, 1245, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 55},	//253 QCPAxis::selectedBasePen() const
    {7, 1263, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 56},	//254 QCPAxis::selectedTickPen() const
    {7, 1259, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 57},	//255 QCPAxis::selectedSubTickPen() const
    {7, 667, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 58},	//256 QCPAxis::lowerEnding() const
    {7, 2424, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 59},	//257 QCPAxis::upperEnding() const
    {7, 561, 0, 0, Smoke::mf_const|Smoke::mf_property, 59, 60},	//258 QCPAxis::grid() const
    {7, 2092, 97, 1, Smoke::mf_property, 0, 61},	//259 QCPAxis::setScaleType(QCPAxis::ScaleType)
    {7, 2087, 99, 1, Smoke::mf_property, 0, 62},	//260 QCPAxis::setScaleLogBase(double)
    {7, 2057, 101, 1, Smoke::mf_property, 0, 63},	//261 QCPAxis::setRange(const QCPRange&)
    {7, 2057, 83, 2, 0, 0, 64},	//262 QCPAxis::setRange(double, double)
    {7, 2057, 103, 3, 0, 0, 65},	//263 QCPAxis::setRange(double, double, Qt::AlignmentFlag)
    {7, 2066, 99, 1, 0, 0, 66},	//264 QCPAxis::setRangeLower(double)
    {7, 2070, 99, 1, 0, 0, 67},	//265 QCPAxis::setRangeUpper(double)
    {7, 2068, 16, 1, Smoke::mf_property, 0, 68},	//266 QCPAxis::setRangeReversed(bool)
    {7, 1302, 16, 1, Smoke::mf_property, 0, 69},	//267 QCPAxis::setAutoTicks(bool)
    {7, 1296, 35, 1, Smoke::mf_property, 0, 70},	//268 QCPAxis::setAutoTickCount(int)
    {7, 1298, 16, 1, Smoke::mf_property, 0, 71},	//269 QCPAxis::setAutoTickLabels(bool)
    {7, 1300, 16, 1, Smoke::mf_property, 0, 72},	//270 QCPAxis::setAutoTickStep(bool)
    {7, 1294, 16, 1, Smoke::mf_property, 0, 73},	//271 QCPAxis::setAutoSubTicks(bool)
    {7, 2203, 16, 1, Smoke::mf_property, 0, 74},	//272 QCPAxis::setTicks(bool)
    {7, 2186, 16, 1, Smoke::mf_property, 0, 75},	//273 QCPAxis::setTickLabels(bool)
    {7, 2178, 35, 1, Smoke::mf_property, 0, 76},	//274 QCPAxis::setTickLabelPadding(int)
    {7, 2184, 107, 1, Smoke::mf_property, 0, 77},	//275 QCPAxis::setTickLabelType(QCPAxis::LabelType)
    {7, 2176, 59, 1, Smoke::mf_property, 0, 78},	//276 QCPAxis::setTickLabelFont(const QFont&)
    {7, 2174, 61, 1, Smoke::mf_property, 0, 79},	//277 QCPAxis::setTickLabelColor(const QColor&)
    {7, 2180, 99, 1, Smoke::mf_property, 0, 80},	//278 QCPAxis::setTickLabelRotation(double)
    {7, 2182, 109, 1, Smoke::mf_property, 0, 81},	//279 QCPAxis::setTickLabelSide(QCPAxis::LabelSide)
    {7, 1391, 24, 1, Smoke::mf_property, 0, 82},	//280 QCPAxis::setDateTimeFormat(const QString&)
    {7, 1393, 111, 1, Smoke::mf_property, 0, 83},	//281 QCPAxis::setDateTimeSpec(const Qt::TimeSpec&)
    {7, 2009, 24, 1, Smoke::mf_property, 0, 84},	//282 QCPAxis::setNumberFormat(const QString&)
    {7, 2011, 35, 1, Smoke::mf_property, 0, 85},	//283 QCPAxis::setNumberPrecision(int)
    {7, 2197, 99, 1, Smoke::mf_property, 0, 86},	//284 QCPAxis::setTickStep(double)
    {7, 2199, 113, 1, Smoke::mf_property, 0, 87},	//285 QCPAxis::setTickVector(const QVector<double>&)
    {7, 2201, 115, 1, Smoke::mf_property, 0, 88},	//286 QCPAxis::setTickVectorLabels(const QVector<QString>&)
    {7, 2188, 117, 2, 0, 0, 89},	//287 QCPAxis::setTickLength(int, int)
    {7, 2191, 35, 1, Smoke::mf_property, 0, 90},	//288 QCPAxis::setTickLengthIn(int)
    {7, 2193, 35, 1, Smoke::mf_property, 0, 91},	//289 QCPAxis::setTickLengthOut(int)
    {7, 2153, 35, 1, Smoke::mf_property, 0, 92},	//290 QCPAxis::setSubTickCount(int)
    {7, 2155, 117, 2, 0, 0, 93},	//291 QCPAxis::setSubTickLength(int, int)
    {7, 2158, 35, 1, Smoke::mf_property, 0, 94},	//292 QCPAxis::setSubTickLengthIn(int)
    {7, 2160, 35, 1, Smoke::mf_property, 0, 95},	//293 QCPAxis::setSubTickLengthOut(int)
    {7, 1320, 66, 1, Smoke::mf_property, 0, 96},	//294 QCPAxis::setBasePen(const QPen&)
    {7, 2195, 66, 1, Smoke::mf_property, 0, 97},	//295 QCPAxis::setTickPen(const QPen&)
    {7, 2162, 66, 1, Smoke::mf_property, 0, 98},	//296 QCPAxis::setSubTickPen(const QPen&)
    {7, 1455, 59, 1, Smoke::mf_property, 0, 99},	//297 QCPAxis::setLabelFont(const QFont&)
    {7, 1453, 61, 1, Smoke::mf_property, 0, 100},	//298 QCPAxis::setLabelColor(const QColor&)
    {7, 1451, 24, 1, Smoke::mf_property, 0, 101},	//299 QCPAxis::setLabel(const QString&)
    {7, 1457, 35, 1, Smoke::mf_property, 0, 102},	//300 QCPAxis::setLabelPadding(int)
    {7, 2023, 35, 1, Smoke::mf_property, 0, 103},	//301 QCPAxis::setPadding(int)
    {7, 2013, 35, 1, Smoke::mf_property, 0, 104},	//302 QCPAxis::setOffset(int)
    {7, 2132, 59, 1, Smoke::mf_property, 0, 105},	//303 QCPAxis::setSelectedTickLabelFont(const QFont&)
    {7, 2120, 59, 1, Smoke::mf_property, 0, 106},	//304 QCPAxis::setSelectedLabelFont(const QFont&)
    {7, 2130, 61, 1, Smoke::mf_property, 0, 107},	//305 QCPAxis::setSelectedTickLabelColor(const QColor&)
    {7, 2118, 61, 1, Smoke::mf_property, 0, 108},	//306 QCPAxis::setSelectedLabelColor(const QColor&)
    {7, 2106, 66, 1, Smoke::mf_property, 0, 109},	//307 QCPAxis::setSelectedBasePen(const QPen&)
    {7, 2134, 66, 1, Smoke::mf_property, 0, 110},	//308 QCPAxis::setSelectedTickPen(const QPen&)
    {7, 2126, 66, 1, Smoke::mf_property, 0, 111},	//309 QCPAxis::setSelectedSubTickPen(const QPen&)
    {7, 2102, 120, 1, 0, 0, 112},	//310 QCPAxis::setSelectableParts(const QFlags<QCPAxis::SelectablePart>&)
    {7, 2122, 120, 1, 0, 0, 113},	//311 QCPAxis::setSelectedParts(const QFlags<QCPAxis::SelectablePart>&)
    {7, 1474, 122, 1, Smoke::mf_property, 0, 114},	//312 QCPAxis::setLowerEnding(const QCPLineEnding&)
    {7, 2217, 122, 1, Smoke::mf_property, 0, 115},	//313 QCPAxis::setUpperEnding(const QCPLineEnding&)
    {7, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 116},	//314 QCPAxis::selectTest(const QPointF&, bool, QVariant*) const
    {7, 1046, 0, 0, Smoke::mf_const, 291, 117},	//315 QCPAxis::orientation() const
    {7, 995, 99, 1, 0, 0, 118},	//316 QCPAxis::moveRange(double)
    {7, 1222, 83, 2, 0, 0, 119},	//317 QCPAxis::scaleRange(double, double)
    {7, 2089, 124, 2, 0, 0, 120},	//318 QCPAxis::setScaleRatio(const QCPAxis*, double)
    {7, 1164, 16, 1, 0, 0, 121},	//319 QCPAxis::rescale(bool)
    {7, 1069, 99, 1, Smoke::mf_const, 414, 122},	//320 QCPAxis::pixelToCoord(double) const
    {7, 319, 99, 1, Smoke::mf_const, 414, 123},	//321 QCPAxis::coordToPixel(double) const
    {7, 496, 127, 1, Smoke::mf_const, 19, 124},	//322 QCPAxis::getPartAt(const QPointF&) const
    {7, 1086, 0, 0, Smoke::mf_const, 150, 125},	//323 QCPAxis::plottables() const
    {7, 560, 0, 0, Smoke::mf_const, 157, 126},	//324 QCPAxis::graphs() const
    {7, 621, 0, 0, Smoke::mf_const, 147, 127},	//325 QCPAxis::items() const
    {7, 940, 129, 1, Smoke::mf_static, 15, 128},	//326 QCPAxis::marginSideToAxisType(QCP::MarginSide)
    {7, 1046, 131, 1, Smoke::mf_static, 291, 129},	//327 QCPAxis::orientation(QCPAxis::AxisType)
    {7, 1044, 131, 1, Smoke::mf_static, 15, 130},	//328 QCPAxis::opposite(QCPAxis::AxisType)
    {7, 2362, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 131},	//329 QCPAxis::ticksRequest()
    {7, 1106, 101, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 132},	//330 QCPAxis::rangeChanged(const QCPRange&)
    {7, 1106, 133, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 133},	//331 QCPAxis::rangeChanged(const QCPRange&, const QCPRange&)
    {7, 1225, 97, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 134},	//332 QCPAxis::scaleTypeChanged(QCPAxis::ScaleType)
    {7, 1265, 136, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 135},	//333 QCPAxis::selectionChanged(const QCPAxis::SelectableParts&)
    {7, 1240, 136, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 136},	//334 QCPAxis::selectableChanged(const QCPAxis::SelectableParts&)
    {7, 2259, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 137},	//335 QCPAxis::setupTickVectors()
    {7, 463, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 138},	//336 QCPAxis::generateAutoTicks()
    {7, 265, 99, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 417, 139},	//337 QCPAxis::calculateAutoSubTickCount(double) const
    {7, 267, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 417, 140},	//338 QCPAxis::calculateMargin()
    {7, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 141},	//339 QCPAxis::applyDefaultAntialiasingHint(QCPPainter*) const
    {7, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 142},	//340 QCPAxis::draw(QCPPainter*)
    {7, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 143},	//341 QCPAxis::selectionCategory() const
    {7, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 144},	//342 QCPAxis::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {7, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 145},	//343 QCPAxis::deselectEvent(bool*)
    {7, 2443, 138, 2, Smoke::mf_const|Smoke::mf_protected, 0, 146},	//344 QCPAxis::visibleTickBounds(int&, int&) const
    {7, 238, 99, 1, Smoke::mf_const|Smoke::mf_protected, 414, 147},	//345 QCPAxis::baseLog(double) const
    {7, 241, 99, 1, Smoke::mf_const|Smoke::mf_protected, 414, 148},	//346 QCPAxis::basePow(double) const
    {7, 466, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 149},	//347 QCPAxis::getBasePen() const
    {7, 530, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 150},	//348 QCPAxis::getTickPen() const
    {7, 524, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 151},	//349 QCPAxis::getSubTickPen() const
    {7, 529, 0, 0, Smoke::mf_const|Smoke::mf_protected, 134, 152},	//350 QCPAxis::getTickLabelFont() const
    {7, 485, 0, 0, Smoke::mf_const|Smoke::mf_protected, 134, 153},	//351 QCPAxis::getLabelFont() const
    {7, 528, 0, 0, Smoke::mf_const|Smoke::mf_protected, 111, 154},	//352 QCPAxis::getTickLabelColor() const
    {7, 484, 0, 0, Smoke::mf_const|Smoke::mf_protected, 111, 155},	//353 QCPAxis::getLabelColor() const
    {7, 2384, 1, 1, Smoke::mf_static, 222, 156},	//354 QCPAxis::tr(const char*)
    {7, 2388, 1, 1, Smoke::mf_static, 222, 157},	//355 QCPAxis::trUtf8(const char*)
    {7, 2188, 35, 1, 0, 0, 158},	//356 QCPAxis::setTickLength(int)
    {7, 2155, 35, 1, 0, 0, 159},	//357 QCPAxis::setSubTickLength(int)
    {7, 1236, 48, 2, Smoke::mf_const, 414, 160},	//358 QCPAxis::selectTest(const QPointF&, bool) const
    {7, 2089, 141, 1, 0, 0, 161},	//359 QCPAxis::setScaleRatio(const QCPAxis*)
    {7, 1164, 0, 0, 0, 0, 162},	//360 QCPAxis::rescale()
    {7, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 163},	//361 QCPAxis::staticMetaObject() const
    {7, 708, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 15, 164},	//362 QCPAxis::mAxisType() const
    {7, 1525, 131, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 165},	//363 QCPAxis::setMAxisType(QCPAxis::AxisType)
    {7, 707, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 23, 166},	//364 QCPAxis::mAxisRect() const
    {7, 1522, 18, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 167},	//365 QCPAxis::setMAxisRect(QCPAxisRect*)
    {7, 825, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 168},	//366 QCPAxis::mPadding() const
    {7, 1760, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 169},	//367 QCPAxis::setMPadding(int)
    {7, 821, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 291, 170},	//368 QCPAxis::mOrientation() const
    {7, 1752, 143, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 171},	//369 QCPAxis::setMOrientation(Qt::Orientation)
    {7, 872, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 128, 172},	//370 QCPAxis::mSelectableParts() const
    {7, 1855, 145, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 173},	//371 QCPAxis::setMSelectableParts(QFlags<QCPAxis::SelectablePart>)
    {7, 882, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 128, 174},	//372 QCPAxis::mSelectedParts() const
    {7, 1875, 145, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 175},	//373 QCPAxis::setMSelectedParts(QFlags<QCPAxis::SelectablePart>)
    {7, 718, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 176},	//374 QCPAxis::mBasePen() const
    {7, 1545, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 177},	//375 QCPAxis::setMBasePen(const QPen&)
    {7, 874, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 178},	//376 QCPAxis::mSelectedBasePen() const
    {7, 1859, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 179},	//377 QCPAxis::setMSelectedBasePen(const QPen&)
    {7, 787, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 180},	//378 QCPAxis::mLabel() const
    {7, 1684, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 181},	//379 QCPAxis::setMLabel(const QString&)
    {7, 789, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 182},	//380 QCPAxis::mLabelFont() const
    {7, 1688, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 183},	//381 QCPAxis::setMLabelFont(const QFont&)
    {7, 881, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 184},	//382 QCPAxis::mSelectedLabelFont() const
    {7, 1873, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 185},	//383 QCPAxis::setMSelectedLabelFont(const QFont&)
    {7, 788, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 186},	//384 QCPAxis::mLabelColor() const
    {7, 1686, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 187},	//385 QCPAxis::setMLabelColor(const QColor&)
    {7, 880, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 188},	//386 QCPAxis::mSelectedLabelColor() const
    {7, 1871, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 189},	//387 QCPAxis::setMSelectedLabelColor(const QColor&)
    {7, 908, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 190},	//388 QCPAxis::mTickLabels() const
    {7, 1927, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 191},	//389 QCPAxis::setMTickLabels(bool)
    {7, 702, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 192},	//390 QCPAxis::mAutoTickLabels() const
    {7, 1512, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 193},	//391 QCPAxis::setMAutoTickLabels(bool)
    {7, 907, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 17, 194},	//392 QCPAxis::mTickLabelType() const
    {7, 1925, 107, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 195},	//393 QCPAxis::setMTickLabelType(QCPAxis::LabelType)
    {7, 906, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 196},	//394 QCPAxis::mTickLabelFont() const
    {7, 1923, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 197},	//395 QCPAxis::setMTickLabelFont(const QFont&)
    {7, 887, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 198},	//396 QCPAxis::mSelectedTickLabelFont() const
    {7, 1885, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 199},	//397 QCPAxis::setMSelectedTickLabelFont(const QFont&)
    {7, 905, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 200},	//398 QCPAxis::mTickLabelColor() const
    {7, 1921, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 201},	//399 QCPAxis::setMTickLabelColor(const QColor&)
    {7, 886, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 202},	//400 QCPAxis::mSelectedTickLabelColor() const
    {7, 1883, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 203},	//401 QCPAxis::setMSelectedTickLabelColor(const QColor&)
    {7, 749, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 204},	//402 QCPAxis::mDateTimeFormat() const
    {7, 1608, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 205},	//403 QCPAxis::setMDateTimeFormat(const QString&)
    {7, 750, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 305, 206},	//404 QCPAxis::mDateTimeSpec() const
    {7, 1610, 147, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 207},	//405 QCPAxis::setMDateTimeSpec(Qt::TimeSpec)
    {7, 820, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 208},	//406 QCPAxis::mNumberPrecision() const
    {7, 1750, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 209},	//407 QCPAxis::setMNumberPrecision(int)
    {7, 819, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 145, 210},	//408 QCPAxis::mNumberFormatChar() const
    {7, 1748, 149, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 211},	//409 QCPAxis::setMNumberFormatChar(const QLatin1Char&)
    {7, 818, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 212},	//410 QCPAxis::mNumberBeautifulPowers() const
    {7, 1746, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 213},	//411 QCPAxis::setMNumberBeautifulPowers(bool)
    {7, 913, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 214},	//412 QCPAxis::mTicks() const
    {7, 1937, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 215},	//413 QCPAxis::setMTicks(bool)
    {7, 910, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 216},	//414 QCPAxis::mTickStep() const
    {7, 1931, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 217},	//415 QCPAxis::setMTickStep(double)
    {7, 897, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 218},	//416 QCPAxis::mSubTickCount() const
    {7, 1905, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 219},	//417 QCPAxis::setMSubTickCount(int)
    {7, 701, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 220},	//418 QCPAxis::mAutoTickCount() const
    {7, 1510, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 221},	//419 QCPAxis::setMAutoTickCount(int)
    {7, 704, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 222},	//420 QCPAxis::mAutoTicks() const
    {7, 1516, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 223},	//421 QCPAxis::setMAutoTicks(bool)
    {7, 703, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 224},	//422 QCPAxis::mAutoTickStep() const
    {7, 1514, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 225},	//423 QCPAxis::setMAutoTickStep(bool)
    {7, 700, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 226},	//424 QCPAxis::mAutoSubTicks() const
    {7, 1508, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 227},	//425 QCPAxis::setMAutoSubTicks(bool)
    {7, 909, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 228},	//426 QCPAxis::mTickPen() const
    {7, 1929, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 229},	//427 QCPAxis::setMTickPen(const QPen&)
    {7, 888, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 230},	//428 QCPAxis::mSelectedTickPen() const
    {7, 1887, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 231},	//429 QCPAxis::setMSelectedTickPen(const QPen&)
    {7, 898, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 232},	//430 QCPAxis::mSubTickPen() const
    {7, 1907, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 233},	//431 QCPAxis::setMSubTickPen(const QPen&)
    {7, 884, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 234},	//432 QCPAxis::mSelectedSubTickPen() const
    {7, 1879, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 235},	//433 QCPAxis::setMSelectedSubTickPen(const QPen&)
    {7, 849, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 236},	//434 QCPAxis::mRange() const
    {7, 1809, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 237},	//435 QCPAxis::setMRange(const QCPRange&)
    {7, 853, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 238},	//436 QCPAxis::mRangeReversed() const
    {7, 1817, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 239},	//437 QCPAxis::setMRangeReversed(bool)
    {7, 866, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 18, 240},	//438 QCPAxis::mScaleType() const
    {7, 1843, 97, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 241},	//439 QCPAxis::setMScaleType(QCPAxis::ScaleType)
    {7, 864, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 242},	//440 QCPAxis::mScaleLogBase() const
    {7, 1839, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 243},	//441 QCPAxis::setMScaleLogBase(double)
    {7, 865, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 244},	//442 QCPAxis::mScaleLogBaseLogInv() const
    {7, 1841, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 245},	//443 QCPAxis::setMScaleLogBaseLogInv(double)
    {7, 765, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 59, 246},	//444 QCPAxis::mGrid() const
    {7, 1640, 151, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 247},	//445 QCPAxis::setMGrid(QCPGrid*)
    {7, 706, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 21, 248},	//446 QCPAxis::mAxisPainter() const
    {7, 1520, 153, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 249},	//447 QCPAxis::setMAxisPainter(QCPAxisPainterPrivate*)
    {7, 797, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 250},	//448 QCPAxis::mLowestVisibleTick() const
    {7, 1704, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 251},	//449 QCPAxis::setMLowestVisibleTick(int)
    {7, 767, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 252},	//450 QCPAxis::mHighestVisibleTick() const
    {7, 1644, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 253},	//451 QCPAxis::setMHighestVisibleTick(int)
    {7, 911, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 239, 254},	//452 QCPAxis::mTickVector() const
    {7, 1933, 113, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 255},	//453 QCPAxis::setMTickVector(const QVector<double>&)
    {7, 912, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 237, 256},	//454 QCPAxis::mTickVectorLabels() const
    {7, 1935, 115, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 257},	//455 QCPAxis::setMTickVectorLabels(const QVector<QString>&)
    {7, 899, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 239, 258},	//456 QCPAxis::mSubTickVector() const
    {7, 1909, 113, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 259},	//457 QCPAxis::setMSubTickVector(const QVector<double>&)
    {7, 725, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 260},	//458 QCPAxis::mCachedMarginValid() const
    {7, 1559, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 261},	//459 QCPAxis::setMCachedMarginValid(bool)
    {7, 724, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 262},	//460 QCPAxis::mCachedMargin() const
    {7, 1557, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 263},	//461 QCPAxis::setMCachedMargin(int)
    {7, 201, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 264},	//462 QCPAxis::atLeft (enum)
    {7, 202, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 265},	//463 QCPAxis::atRight (enum)
    {7, 203, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 266},	//464 QCPAxis::atTop (enum)
    {7, 200, 0, 0, Smoke::mf_static|Smoke::mf_enum, 15, 267},	//465 QCPAxis::atBottom (enum)
    {7, 684, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 268},	//466 QCPAxis::ltNumber (enum)
    {7, 683, 0, 0, Smoke::mf_static|Smoke::mf_enum, 17, 269},	//467 QCPAxis::ltDateTime (enum)
    {7, 676, 0, 0, Smoke::mf_static|Smoke::mf_enum, 16, 270},	//468 QCPAxis::lsInside (enum)
    {7, 679, 0, 0, Smoke::mf_static|Smoke::mf_enum, 16, 271},	//469 QCPAxis::lsOutside (enum)
    {7, 2296, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 272},	//470 QCPAxis::stLinear (enum)
    {7, 2297, 0, 0, Smoke::mf_static|Smoke::mf_enum, 18, 273},	//471 QCPAxis::stLogarithmic (enum)
    {7, 2272, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 274},	//472 QCPAxis::spNone (enum)
    {7, 2268, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 275},	//473 QCPAxis::spAxis (enum)
    {7, 2273, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 276},	//474 QCPAxis::spTickLabels (enum)
    {7, 2269, 0, 0, Smoke::mf_static|Smoke::mf_enum, 19, 277},	//475 QCPAxis::spAxisLabel (enum)
    {7, 2467, 0, 0, Smoke::mf_dtor, 0, 278 },	//476 QCPAxis::~QCPAxis()
    {9, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//477 QCPAxisRect::metaObject() const
    {9, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//478 QCPAxisRect::qt_metacast(const char*)
    {9, 2384, 3, 2, Smoke::mf_static, 222, 3},	//479 QCPAxisRect::tr(const char*, const char*)
    {9, 2388, 3, 2, Smoke::mf_static, 222, 4},	//480 QCPAxisRect::trUtf8(const char*, const char*)
    {9, 2384, 6, 3, Smoke::mf_static, 222, 5},	//481 QCPAxisRect::tr(const char*, const char*, int)
    {9, 2388, 6, 3, Smoke::mf_static, 222, 6},	//482 QCPAxisRect::trUtf8(const char*, const char*, int)
    {9, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//483 QCPAxisRect::qt_metacall(QMetaObject::Call, int, void**)
    {9, 12, 155, 2, Smoke::mf_ctor, 23, 8},	//484 QCPAxisRect::QCPAxisRect(QCustomPlot*, bool)
    {9, 229, 0, 0, Smoke::mf_const|Smoke::mf_property, 196, 9},	//485 QCPAxisRect::background() const
    {9, 230, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 10},	//486 QCPAxisRect::backgroundScaled() const
    {9, 231, 0, 0, Smoke::mf_const|Smoke::mf_property, 250, 11},	//487 QCPAxisRect::backgroundScaledMode() const
    {9, 1109, 0, 0, Smoke::mf_const, 132, 12},	//488 QCPAxisRect::rangeDrag() const
    {9, 1113, 0, 0, Smoke::mf_const, 132, 13},	//489 QCPAxisRect::rangeZoom() const
    {9, 1110, 143, 1, 0, 14, 14},	//490 QCPAxisRect::rangeDragAxis(Qt::Orientation)
    {9, 1114, 143, 1, 0, 14, 15},	//491 QCPAxisRect::rangeZoomAxis(Qt::Orientation)
    {9, 1116, 143, 1, 0, 414, 16},	//492 QCPAxisRect::rangeZoomFactor(Qt::Orientation)
    {9, 1308, 158, 1, Smoke::mf_property, 0, 17},	//493 QCPAxisRect::setBackground(const QPixmap&)
    {9, 1308, 160, 3, 0, 0, 18},	//494 QCPAxisRect::setBackground(const QPixmap&, bool, Qt::AspectRatioMode)
    {9, 1308, 68, 1, 0, 0, 19},	//495 QCPAxisRect::setBackground(const QBrush&)
    {9, 1312, 16, 1, Smoke::mf_property, 0, 20},	//496 QCPAxisRect::setBackgroundScaled(bool)
    {9, 1314, 164, 1, Smoke::mf_property, 0, 21},	//497 QCPAxisRect::setBackgroundScaledMode(Qt::AspectRatioMode)
    {9, 2062, 166, 1, 0, 0, 22},	//498 QCPAxisRect::setRangeDrag(QFlags<Qt::Orientation>)
    {9, 2072, 166, 1, 0, 0, 23},	//499 QCPAxisRect::setRangeZoom(QFlags<Qt::Orientation>)
    {9, 2064, 63, 2, 0, 0, 24},	//500 QCPAxisRect::setRangeDragAxes(QCPAxis*, QCPAxis*)
    {9, 2074, 63, 2, 0, 0, 25},	//501 QCPAxisRect::setRangeZoomAxes(QCPAxis*, QCPAxis*)
    {9, 2076, 83, 2, 0, 0, 26},	//502 QCPAxisRect::setRangeZoomFactor(double, double)
    {9, 2076, 99, 1, 0, 0, 27},	//503 QCPAxisRect::setRangeZoomFactor(double)
    {9, 218, 131, 1, Smoke::mf_const, 417, 28},	//504 QCPAxisRect::axisCount(QCPAxis::AxisType) const
    {9, 213, 168, 2, Smoke::mf_const, 14, 29},	//505 QCPAxisRect::axis(QCPAxis::AxisType, int) const
    {9, 211, 171, 1, Smoke::mf_const, 152, 30},	//506 QCPAxisRect::axes(QFlags<QCPAxis::AxisType>) const
    {9, 211, 0, 0, Smoke::mf_const, 152, 31},	//507 QCPAxisRect::axes() const
    {9, 119, 173, 2, 0, 14, 32},	//508 QCPAxisRect::addAxis(QCPAxis::AxisType, QCPAxis*)
    {9, 117, 171, 1, 0, 152, 33},	//509 QCPAxisRect::addAxes(QFlags<QCPAxis::AxisType>)
    {9, 1132, 70, 1, 0, 318, 34},	//510 QCPAxisRect::removeAxis(QCPAxis*)
    {9, 595, 0, 0, Smoke::mf_const, 87, 35},	//511 QCPAxisRect::insetLayout() const
    {9, 2257, 16, 1, 0, 0, 36},	//512 QCPAxisRect::setupFullAxesBox(bool)
    {9, 1086, 0, 0, Smoke::mf_const, 150, 37},	//513 QCPAxisRect::plottables() const
    {9, 560, 0, 0, Smoke::mf_const, 157, 38},	//514 QCPAxisRect::graphs() const
    {9, 621, 0, 0, Smoke::mf_const, 147, 39},	//515 QCPAxisRect::items() const
    {9, 649, 0, 0, Smoke::mf_const, 417, 40},	//516 QCPAxisRect::left() const
    {9, 1182, 0, 0, Smoke::mf_const, 417, 41},	//517 QCPAxisRect::right() const
    {9, 2381, 0, 0, Smoke::mf_const, 417, 42},	//518 QCPAxisRect::top() const
    {9, 252, 0, 0, Smoke::mf_const, 417, 43},	//519 QCPAxisRect::bottom() const
    {9, 2450, 0, 0, Smoke::mf_const, 417, 44},	//520 QCPAxisRect::width() const
    {9, 573, 0, 0, Smoke::mf_const, 417, 45},	//521 QCPAxisRect::height() const
    {9, 2265, 0, 0, Smoke::mf_const, 219, 46},	//522 QCPAxisRect::size() const
    {9, 2382, 0, 0, Smoke::mf_const, 198, 47},	//523 QCPAxisRect::topLeft() const
    {9, 2383, 0, 0, Smoke::mf_const, 198, 48},	//524 QCPAxisRect::topRight() const
    {9, 253, 0, 0, Smoke::mf_const, 198, 49},	//525 QCPAxisRect::bottomLeft() const
    {9, 254, 0, 0, Smoke::mf_const, 198, 50},	//526 QCPAxisRect::bottomRight() const
    {9, 274, 0, 0, Smoke::mf_const, 198, 51},	//527 QCPAxisRect::center() const
    {9, 2407, 176, 1, Smoke::mf_virtual, 0, 52},	//528 QCPAxisRect::update(QCPLayoutElement::UpdatePhase)
    {9, 408, 16, 1, Smoke::mf_const|Smoke::mf_virtual, 166, 53},	//529 QCPAxisRect::elements(bool) const
    {9, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 54},	//530 QCPAxisRect::applyDefaultAntialiasingHint(QCPPainter*) const
    {9, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 55},	//531 QCPAxisRect::draw(QCPPainter*)
    {9, 263, 129, 1, Smoke::mf_protected|Smoke::mf_virtual, 417, 56},	//532 QCPAxisRect::calculateAutoMargin(QCP::MarginSide)
    {9, 979, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 57},	//533 QCPAxisRect::mousePressEvent(QMouseEvent*)
    {9, 975, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 58},	//534 QCPAxisRect::mouseMoveEvent(QMouseEvent*)
    {9, 983, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 59},	//535 QCPAxisRect::mouseReleaseEvent(QMouseEvent*)
    {9, 2445, 180, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 60},	//536 QCPAxisRect::wheelEvent(QWheelEvent*)
    {9, 365, 26, 1, Smoke::mf_protected, 0, 61},	//537 QCPAxisRect::drawBackground(QCPPainter*)
    {9, 2409, 131, 1, Smoke::mf_protected, 0, 62},	//538 QCPAxisRect::updateAxesOffset(QCPAxis::AxisType)
    {9, 2384, 1, 1, Smoke::mf_static, 222, 63},	//539 QCPAxisRect::tr(const char*)
    {9, 2388, 1, 1, Smoke::mf_static, 222, 64},	//540 QCPAxisRect::trUtf8(const char*)
    {9, 12, 14, 1, Smoke::mf_ctor, 23, 65},	//541 QCPAxisRect::QCPAxisRect(QCustomPlot*)
    {9, 1308, 182, 2, 0, 0, 66},	//542 QCPAxisRect::setBackground(const QPixmap&, bool)
    {9, 213, 131, 1, Smoke::mf_const, 14, 67},	//543 QCPAxisRect::axis(QCPAxis::AxisType) const
    {9, 119, 131, 1, 0, 14, 68},	//544 QCPAxisRect::addAxis(QCPAxis::AxisType)
    {9, 2257, 0, 0, 0, 0, 69},	//545 QCPAxisRect::setupFullAxesBox()
    {9, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 70},	//546 QCPAxisRect::staticMetaObject() const
    {9, 709, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 71},	//547 QCPAxisRect::mBackgroundBrush() const
    {9, 1527, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 72},	//548 QCPAxisRect::setMBackgroundBrush(const QBrush&)
    {9, 710, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 73},	//549 QCPAxisRect::mBackgroundPixmap() const
    {9, 1529, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 74},	//550 QCPAxisRect::setMBackgroundPixmap(const QPixmap&)
    {9, 868, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 75},	//551 QCPAxisRect::mScaledBackgroundPixmap() const
    {9, 1847, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 76},	//552 QCPAxisRect::setMScaledBackgroundPixmap(const QPixmap&)
    {9, 711, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 77},	//553 QCPAxisRect::mBackgroundScaled() const
    {9, 1531, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 78},	//554 QCPAxisRect::setMBackgroundScaled(bool)
    {9, 712, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 250, 79},	//555 QCPAxisRect::mBackgroundScaledMode() const
    {9, 1533, 164, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 80},	//556 QCPAxisRect::setMBackgroundScaledMode(Qt::AspectRatioMode)
    {9, 773, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 87, 81},	//557 QCPAxisRect::mInsetLayout() const
    {9, 1656, 185, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 82},	//558 QCPAxisRect::setMInsetLayout(QCPLayoutInset*)
    {9, 850, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 132, 83},	//559 QCPAxisRect::mRangeDrag() const
    {9, 1811, 166, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 84},	//560 QCPAxisRect::setMRangeDrag(QFlags<Qt::Orientation>)
    {9, 854, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 132, 85},	//561 QCPAxisRect::mRangeZoom() const
    {9, 1819, 166, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 86},	//562 QCPAxisRect::setMRangeZoom(QFlags<Qt::Orientation>)
    {9, 851, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 87},	//563 QCPAxisRect::mRangeDragHorzAxis() const
    {9, 1813, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 88},	//564 QCPAxisRect::setMRangeDragHorzAxis(const QPointer<QCPAxis>&)
    {9, 852, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 89},	//565 QCPAxisRect::mRangeDragVertAxis() const
    {9, 1815, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 90},	//566 QCPAxisRect::setMRangeDragVertAxis(const QPointer<QCPAxis>&)
    {9, 857, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 91},	//567 QCPAxisRect::mRangeZoomHorzAxis() const
    {9, 1825, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 92},	//568 QCPAxisRect::setMRangeZoomHorzAxis(const QPointer<QCPAxis>&)
    {9, 858, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 93},	//569 QCPAxisRect::mRangeZoomVertAxis() const
    {9, 1827, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 94},	//570 QCPAxisRect::setMRangeZoomVertAxis(const QPointer<QCPAxis>&)
    {9, 855, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 95},	//571 QCPAxisRect::mRangeZoomFactorHorz() const
    {9, 1821, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 96},	//572 QCPAxisRect::setMRangeZoomFactorHorz(double)
    {9, 856, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 97},	//573 QCPAxisRect::mRangeZoomFactorVert() const
    {9, 1823, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 98},	//574 QCPAxisRect::setMRangeZoomFactorVert(double)
    {9, 752, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 99},	//575 QCPAxisRect::mDragStartHorzRange() const
    {9, 1614, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 100},	//576 QCPAxisRect::setMDragStartHorzRange(const QCPRange&)
    {9, 753, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 101},	//577 QCPAxisRect::mDragStartVertRange() const
    {9, 1616, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 102},	//578 QCPAxisRect::setMDragStartVertRange(const QCPRange&)
    {9, 685, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 123, 103},	//579 QCPAxisRect::mAADragBackup() const
    {9, 1478, 187, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 104},	//580 QCPAxisRect::setMAADragBackup(QFlags<QCP::AntialiasedElement>)
    {9, 816, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 123, 105},	//581 QCPAxisRect::mNotAADragBackup() const
    {9, 1742, 187, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 106},	//582 QCPAxisRect::setMNotAADragBackup(QFlags<QCP::AntialiasedElement>)
    {9, 751, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 199, 107},	//583 QCPAxisRect::mDragStart() const
    {9, 1612, 189, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 108},	//584 QCPAxisRect::setMDragStart(const QPoint&)
    {9, 754, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 109},	//585 QCPAxisRect::mDragging() const
    {9, 1618, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 110},	//586 QCPAxisRect::setMDragging(bool)
    {9, 705, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 139, 111},	//587 QCPAxisRect::mAxes() const
    {9, 1518, 191, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 112},	//588 QCPAxisRect::setMAxes(const QHash<QCPAxis::AxisType,QList<QCPAxis*> >&)
    {9, 2468, 0, 0, Smoke::mf_dtor, 0, 113 },	//589 QCPAxisRect::~QCPAxisRect()
    {10, 15, 0, 0, Smoke::mf_ctor, 25, 1},	//590 QCPBarData::QCPBarData()
    {10, 15, 83, 2, Smoke::mf_ctor, 25, 2},	//591 QCPBarData::QCPBarData(double, double)
    {10, 15, 193, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 25, 3},	//592 QCPBarData::QCPBarData(const QCPBarData&)
    {10, 622, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 4},	//593 QCPBarData::key() const
    {10, 1439, 99, 1, Smoke::mf_attribute, 0, 5},	//594 QCPBarData::setKey(double)
    {10, 2435, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 6},	//595 QCPBarData::value() const
    {10, 2221, 99, 1, Smoke::mf_attribute, 0, 7},	//596 QCPBarData::setValue(double)
    {10, 2469, 0, 0, Smoke::mf_dtor, 0, 8 },	//597 QCPBarData::~QCPBarData()
    {11, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//598 QCPBars::metaObject() const
    {11, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//599 QCPBars::qt_metacast(const char*)
    {11, 2384, 3, 2, Smoke::mf_static, 222, 3},	//600 QCPBars::tr(const char*, const char*)
    {11, 2388, 3, 2, Smoke::mf_static, 222, 4},	//601 QCPBars::trUtf8(const char*, const char*)
    {11, 2384, 6, 3, Smoke::mf_static, 222, 5},	//602 QCPBars::tr(const char*, const char*, int)
    {11, 2388, 6, 3, Smoke::mf_static, 222, 6},	//603 QCPBars::trUtf8(const char*, const char*, int)
    {11, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//604 QCPBars::qt_metacall(QMetaObject::Call, int, void**)
    {11, 18, 63, 2, Smoke::mf_ctor, 28, 8},	//605 QCPBars::QCPBars(QCPAxis*, QCPAxis*)
    {11, 2450, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 9},	//606 QCPBars::width() const
    {11, 2451, 0, 0, Smoke::mf_const|Smoke::mf_property, 29, 10},	//607 QCPBars::widthType() const
    {11, 237, 0, 0, Smoke::mf_const|Smoke::mf_property, 30, 11},	//608 QCPBars::barsGroup() const
    {11, 243, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 12},	//609 QCPBars::baseValue() const
    {11, 233, 0, 0, Smoke::mf_const|Smoke::mf_property, 28, 13},	//610 QCPBars::barBelow() const
    {11, 232, 0, 0, Smoke::mf_const|Smoke::mf_property, 28, 14},	//611 QCPBars::barAbove() const
    {11, 336, 0, 0, Smoke::mf_const, 175, 15},	//612 QCPBars::data() const
    {11, 2243, 99, 1, Smoke::mf_property, 0, 16},	//613 QCPBars::setWidth(double)
    {11, 2245, 195, 1, Smoke::mf_property, 0, 17},	//614 QCPBars::setWidthType(QCPBars::WidthType)
    {11, 1318, 197, 1, Smoke::mf_property, 0, 18},	//615 QCPBars::setBarsGroup(QCPBarsGroup*)
    {11, 1322, 99, 1, Smoke::mf_property, 0, 19},	//616 QCPBars::setBaseValue(double)
    {11, 1368, 199, 2, 0, 0, 20},	//617 QCPBars::setData(QMap<double,QCPBarData>*, bool)
    {11, 1368, 202, 2, 0, 0, 21},	//618 QCPBars::setData(const QVector<double>&, const QVector<double>&)
    {11, 989, 205, 1, 0, 0, 22},	//619 QCPBars::moveBelow(QCPBars*)
    {11, 987, 205, 1, 0, 0, 23},	//620 QCPBars::moveAbove(QCPBars*)
    {11, 129, 207, 1, 0, 0, 24},	//621 QCPBars::addData(const QMap<double,QCPBarData>&)
    {11, 129, 193, 1, 0, 0, 25},	//622 QCPBars::addData(const QCPBarData&)
    {11, 129, 83, 2, 0, 0, 26},	//623 QCPBars::addData(double, double)
    {11, 129, 202, 2, 0, 0, 27},	//624 QCPBars::addData(const QVector<double>&, const QVector<double>&)
    {11, 1146, 99, 1, 0, 0, 28},	//625 QCPBars::removeDataBefore(double)
    {11, 1144, 99, 1, 0, 0, 29},	//626 QCPBars::removeDataAfter(double)
    {11, 1141, 83, 2, 0, 0, 30},	//627 QCPBars::removeData(double, double)
    {11, 1141, 99, 1, 0, 0, 31},	//628 QCPBars::removeData(double)
    {11, 285, 0, 0, Smoke::mf_virtual, 0, 32},	//629 QCPBars::clearData()
    {11, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 33},	//630 QCPBars::selectTest(const QPointF&, bool, QVariant*) const
    {11, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 34},	//631 QCPBars::draw(QCPPainter*)
    {11, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//632 QCPBars::drawLegendIcon(QCPPainter*, const QRectF&) const
    {11, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 36},	//633 QCPBars::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {11, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 37},	//634 QCPBars::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {11, 539, 209, 2, Smoke::mf_const|Smoke::mf_protected, 0, 38},	//635 QCPBars::getVisibleDataBounds(QCPBarDataMap::const_iterator&, QCPBarDataMap::const_iterator&) const
    {11, 464, 83, 2, Smoke::mf_const|Smoke::mf_protected, 210, 39},	//636 QCPBars::getBarPolygon(double, double) const
    {11, 500, 212, 3, Smoke::mf_const|Smoke::mf_protected, 0, 40},	//637 QCPBars::getPixelWidth(double, double&, double&) const
    {11, 516, 216, 2, Smoke::mf_const|Smoke::mf_protected, 414, 41},	//638 QCPBars::getStackedBaseValue(double, bool) const
    {11, 310, 219, 2, Smoke::mf_static|Smoke::mf_protected, 0, 42},	//639 QCPBars::connectBars(QCPBars*, QCPBars*)
    {11, 2384, 1, 1, Smoke::mf_static, 222, 43},	//640 QCPBars::tr(const char*)
    {11, 2388, 1, 1, Smoke::mf_static, 222, 44},	//641 QCPBars::trUtf8(const char*)
    {11, 1368, 222, 1, 0, 0, 45},	//642 QCPBars::setData(QMap<double,QCPBarData>*)
    {11, 1236, 48, 2, Smoke::mf_const, 414, 46},	//643 QCPBars::selectTest(const QPointF&, bool) const
    {11, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 47},	//644 QCPBars::getKeyRange(bool&) const
    {11, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 48},	//645 QCPBars::getValueRange(bool&) const
    {11, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 49},	//646 QCPBars::staticMetaObject() const
    {11, 744, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 175, 50},	//647 QCPBars::mData() const
    {11, 1597, 222, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//648 QCPBars::setMData(QMap<double,QCPBarData>*)
    {11, 928, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 52},	//649 QCPBars::mWidth() const
    {11, 1967, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 53},	//650 QCPBars::setMWidth(double)
    {11, 929, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 29, 54},	//651 QCPBars::mWidthType() const
    {11, 1969, 195, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 55},	//652 QCPBars::setMWidthType(QCPBars::WidthType)
    {11, 717, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 30, 56},	//653 QCPBars::mBarsGroup() const
    {11, 1543, 197, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 57},	//654 QCPBars::setMBarsGroup(QCPBarsGroup*)
    {11, 719, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 58},	//655 QCPBars::mBaseValue() const
    {11, 1547, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 59},	//656 QCPBars::setMBaseValue(double)
    {11, 714, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 204, 60},	//657 QCPBars::mBarBelow() const
    {11, 1537, 224, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 61},	//658 QCPBars::setMBarBelow(const QPointer<QCPBars>&)
    {11, 713, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 204, 62},	//659 QCPBars::mBarAbove() const
    {11, 1535, 224, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 63},	//660 QCPBars::setMBarAbove(const QPointer<QCPBars>&)
    {11, 2455, 0, 0, Smoke::mf_static|Smoke::mf_enum, 29, 64},	//661 QCPBars::wtAbsolute (enum)
    {11, 2456, 0, 0, Smoke::mf_static|Smoke::mf_enum, 29, 65},	//662 QCPBars::wtAxisRectRatio (enum)
    {11, 2457, 0, 0, Smoke::mf_static|Smoke::mf_enum, 29, 66},	//663 QCPBars::wtPlotCoords (enum)
    {11, 2470, 0, 0, Smoke::mf_dtor, 0, 67 },	//664 QCPBars::~QCPBars()
    {12, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//665 QCPBarsGroup::metaObject() const
    {12, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//666 QCPBarsGroup::qt_metacast(const char*)
    {12, 2384, 3, 2, Smoke::mf_static, 222, 3},	//667 QCPBarsGroup::tr(const char*, const char*)
    {12, 2388, 3, 2, Smoke::mf_static, 222, 4},	//668 QCPBarsGroup::trUtf8(const char*, const char*)
    {12, 2384, 6, 3, Smoke::mf_static, 222, 5},	//669 QCPBarsGroup::tr(const char*, const char*, int)
    {12, 2388, 6, 3, Smoke::mf_static, 222, 6},	//670 QCPBarsGroup::trUtf8(const char*, const char*, int)
    {12, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//671 QCPBarsGroup::qt_metacall(QMetaObject::Call, int, void**)
    {12, 20, 14, 1, Smoke::mf_ctor, 30, 8},	//672 QCPBarsGroup::QCPBarsGroup(QCustomPlot*)
    {12, 2275, 0, 0, Smoke::mf_const|Smoke::mf_property, 31, 9},	//673 QCPBarsGroup::spacingType() const
    {12, 2274, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 10},	//674 QCPBarsGroup::spacing() const
    {12, 2145, 226, 1, Smoke::mf_property, 0, 11},	//675 QCPBarsGroup::setSpacingType(QCPBarsGroup::SpacingType)
    {12, 2143, 99, 1, Smoke::mf_property, 0, 12},	//676 QCPBarsGroup::setSpacing(double)
    {12, 235, 0, 0, Smoke::mf_const, 154, 13},	//677 QCPBarsGroup::bars() const
    {12, 235, 35, 1, Smoke::mf_const, 28, 14},	//678 QCPBarsGroup::bars(int) const
    {12, 2265, 0, 0, Smoke::mf_const, 417, 15},	//679 QCPBarsGroup::size() const
    {12, 606, 0, 0, Smoke::mf_const, 318, 16},	//680 QCPBarsGroup::isEmpty() const
    {12, 283, 0, 0, 0, 0, 17},	//681 QCPBarsGroup::clear()
    {12, 313, 205, 1, Smoke::mf_const, 318, 18},	//682 QCPBarsGroup::contains(QCPBars*) const
    {12, 185, 205, 1, 0, 0, 19},	//683 QCPBarsGroup::append(QCPBars*)
    {12, 587, 228, 2, 0, 0, 20},	//684 QCPBarsGroup::insert(int, QCPBars*)
    {12, 1128, 205, 1, 0, 0, 21},	//685 QCPBarsGroup::remove(QCPBars*)
    {12, 1124, 205, 1, Smoke::mf_protected, 0, 22},	//686 QCPBarsGroup::registerBars(QCPBars*)
    {12, 2402, 205, 1, Smoke::mf_protected, 0, 23},	//687 QCPBarsGroup::unregisterBars(QCPBars*)
    {12, 626, 231, 2, Smoke::mf_protected, 414, 24},	//688 QCPBarsGroup::keyPixelOffset(const QCPBars*, double)
    {12, 498, 231, 2, Smoke::mf_protected, 414, 25},	//689 QCPBarsGroup::getPixelSpacing(const QCPBars*, double)
    {12, 2384, 1, 1, Smoke::mf_static, 222, 26},	//690 QCPBarsGroup::tr(const char*)
    {12, 2388, 1, 1, Smoke::mf_static, 222, 27},	//691 QCPBarsGroup::trUtf8(const char*)
    {12, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 28},	//692 QCPBarsGroup::staticMetaObject() const
    {12, 834, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 114, 29},	//693 QCPBarsGroup::mParentPlot() const
    {12, 1779, 14, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 30},	//694 QCPBarsGroup::setMParentPlot(QCustomPlot*)
    {12, 893, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 31, 31},	//695 QCPBarsGroup::mSpacingType() const
    {12, 1897, 226, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 32},	//696 QCPBarsGroup::setMSpacingType(QCPBarsGroup::SpacingType)
    {12, 892, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 33},	//697 QCPBarsGroup::mSpacing() const
    {12, 1895, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 34},	//698 QCPBarsGroup::setMSpacing(double)
    {12, 716, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 155, 35},	//699 QCPBarsGroup::mBars() const
    {12, 1541, 234, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 36},	//700 QCPBarsGroup::setMBars(const QList<QCPBars*>&)
    {12, 2294, 0, 0, Smoke::mf_static|Smoke::mf_enum, 31, 37},	//701 QCPBarsGroup::stAbsolute (enum)
    {12, 2295, 0, 0, Smoke::mf_static|Smoke::mf_enum, 31, 38},	//702 QCPBarsGroup::stAxisRectRatio (enum)
    {12, 2298, 0, 0, Smoke::mf_static|Smoke::mf_enum, 31, 39},	//703 QCPBarsGroup::stPlotCoords (enum)
    {12, 2471, 0, 0, Smoke::mf_dtor, 0, 40 },	//704 QCPBarsGroup::~QCPBarsGroup()
    {13, 22, 236, 1, Smoke::mf_ctor, 34, 1},	//705 QCPColorGradient::QCPColorGradient(QCPColorGradient::GradientPreset)
    {13, 1040, 238, 1, Smoke::mf_const, 318, 2},	//706 QCPColorGradient::operator==(const QCPColorGradient&) const
    {13, 1018, 238, 1, Smoke::mf_const, 318, 3},	//707 QCPColorGradient::operator!=(const QCPColorGradient&) const
    {13, 659, 0, 0, Smoke::mf_const, 417, 4},	//708 QCPColorGradient::levelCount() const
    {13, 300, 0, 0, Smoke::mf_const, 180, 5},	//709 QCPColorGradient::colorStops() const
    {13, 297, 0, 0, Smoke::mf_const, 35, 6},	//710 QCPColorGradient::colorInterpolation() const
    {13, 1067, 0, 0, Smoke::mf_const, 318, 7},	//711 QCPColorGradient::periodic() const
    {13, 1466, 35, 1, 0, 0, 8},	//712 QCPColorGradient::setLevelCount(int)
    {13, 1352, 240, 1, 0, 0, 9},	//713 QCPColorGradient::setColorStops(const QMap<double,QColor>&)
    {13, 1350, 242, 2, 0, 0, 10},	//714 QCPColorGradient::setColorStopAt(double, const QColor&)
    {13, 1346, 245, 1, 0, 0, 11},	//715 QCPColorGradient::setColorInterpolation(QCPColorGradient::ColorInterpolation)
    {13, 2044, 16, 1, 0, 0, 12},	//716 QCPColorGradient::setPeriodic(bool)
    {13, 301, 247, 6, 0, 0, 13},	//717 QCPColorGradient::colorize(const double*, const QCPRange&, unsigned int*, int, int, bool)
    {13, 294, 254, 3, 0, 421, 14},	//718 QCPColorGradient::color(double, const QCPRange&, bool)
    {13, 663, 236, 1, 0, 0, 15},	//719 QCPColorGradient::loadPreset(QCPColorGradient::GradientPreset)
    {13, 284, 0, 0, 0, 0, 16},	//720 QCPColorGradient::clearColorStops()
    {13, 603, 0, 0, Smoke::mf_const, 32, 17},	//721 QCPColorGradient::inverted() const
    {13, 2411, 0, 0, Smoke::mf_protected, 0, 18},	//722 QCPColorGradient::updateColorBuffer()
    {13, 22, 238, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 34, 19},	//723 QCPColorGradient::QCPColorGradient(const QCPColorGradient&)
    {13, 22, 0, 0, Smoke::mf_ctor, 34, 20},	//724 QCPColorGradient::QCPColorGradient()
    {13, 301, 258, 4, 0, 0, 21},	//725 QCPColorGradient::colorize(const double*, const QCPRange&, unsigned int*, int)
    {13, 301, 263, 5, 0, 0, 22},	//726 QCPColorGradient::colorize(const double*, const QCPRange&, unsigned int*, int, int)
    {13, 294, 269, 2, 0, 421, 23},	//727 QCPColorGradient::color(double, const QCPRange&)
    {13, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 24},	//728 QCPColorGradient::staticMetaObject() const
    {13, 794, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 25},	//729 QCPColorGradient::mLevelCount() const
    {13, 1698, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 26},	//730 QCPColorGradient::setMLevelCount(int)
    {13, 739, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 181, 27},	//731 QCPColorGradient::mColorStops() const
    {13, 1587, 240, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 28},	//732 QCPColorGradient::setMColorStops(const QMap<double,QColor>&)
    {13, 737, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 35, 29},	//733 QCPColorGradient::mColorInterpolation() const
    {13, 1583, 245, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 30},	//734 QCPColorGradient::setMColorInterpolation(QCPColorGradient::ColorInterpolation)
    {13, 839, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 31},	//735 QCPColorGradient::mPeriodic() const
    {13, 1789, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 32},	//736 QCPColorGradient::setMPeriodic(bool)
    {13, 735, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 242, 33},	//737 QCPColorGradient::mColorBuffer() const
    {13, 1579, 272, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 34},	//738 QCPColorGradient::setMColorBuffer(const QVector<unsigned int>&)
    {13, 736, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 35},	//739 QCPColorGradient::mColorBufferInvalidated() const
    {13, 1581, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 36},	//740 QCPColorGradient::setMColorBufferInvalidated(bool)
    {13, 282, 0, 0, Smoke::mf_static|Smoke::mf_enum, 35, 37},	//741 QCPColorGradient::ciRGB (enum)
    {13, 281, 0, 0, Smoke::mf_static|Smoke::mf_enum, 35, 38},	//742 QCPColorGradient::ciHSV (enum)
    {13, 544, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 39},	//743 QCPColorGradient::gpGrayscale (enum)
    {13, 545, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 40},	//744 QCPColorGradient::gpHot (enum)
    {13, 542, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 41},	//745 QCPColorGradient::gpCold (enum)
    {13, 549, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 42},	//746 QCPColorGradient::gpNight (enum)
    {13, 541, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 43},	//747 QCPColorGradient::gpCandy (enum)
    {13, 543, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 44},	//748 QCPColorGradient::gpGeography (enum)
    {13, 547, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 45},	//749 QCPColorGradient::gpIon (enum)
    {13, 552, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 46},	//750 QCPColorGradient::gpThermal (enum)
    {13, 550, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 47},	//751 QCPColorGradient::gpPolar (enum)
    {13, 551, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 48},	//752 QCPColorGradient::gpSpectrum (enum)
    {13, 548, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 49},	//753 QCPColorGradient::gpJet (enum)
    {13, 546, 0, 0, Smoke::mf_static|Smoke::mf_enum, 36, 50},	//754 QCPColorGradient::gpHues (enum)
    {13, 2472, 0, 0, Smoke::mf_dtor, 0, 51 },	//755 QCPColorGradient::~QCPColorGradient()
    {14, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//756 QCPColorMap::metaObject() const
    {14, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//757 QCPColorMap::qt_metacast(const char*)
    {14, 2384, 3, 2, Smoke::mf_static, 222, 3},	//758 QCPColorMap::tr(const char*, const char*)
    {14, 2388, 3, 2, Smoke::mf_static, 222, 4},	//759 QCPColorMap::trUtf8(const char*, const char*)
    {14, 2384, 6, 3, Smoke::mf_static, 222, 5},	//760 QCPColorMap::tr(const char*, const char*, int)
    {14, 2388, 6, 3, Smoke::mf_static, 222, 6},	//761 QCPColorMap::trUtf8(const char*, const char*, int)
    {14, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//762 QCPColorMap::qt_metacall(QMetaObject::Call, int, void**)
    {14, 25, 63, 2, Smoke::mf_ctor, 37, 8},	//763 QCPColorMap::QCPColorMap(QCPAxis*, QCPAxis*)
    {14, 336, 0, 0, Smoke::mf_const, 39, 9},	//764 QCPColorMap::data() const
    {14, 339, 0, 0, Smoke::mf_const|Smoke::mf_property, 101, 10},	//765 QCPColorMap::dataRange() const
    {14, 342, 0, 0, Smoke::mf_const|Smoke::mf_property, 18, 11},	//766 QCPColorMap::dataScaleType() const
    {14, 601, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 12},	//767 QCPColorMap::interpolate() const
    {14, 2363, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 13},	//768 QCPColorMap::tightBoundary() const
    {14, 553, 0, 0, Smoke::mf_const|Smoke::mf_property, 32, 14},	//769 QCPColorMap::gradient() const
    {14, 299, 0, 0, Smoke::mf_const|Smoke::mf_property, 41, 15},	//770 QCPColorMap::colorScale() const
    {14, 1368, 274, 2, 0, 0, 16},	//771 QCPColorMap::setData(QCPColorMapData*, bool)
    {14, 1384, 101, 1, Smoke::mf_property, 0, 17},	//772 QCPColorMap::setDataRange(const QCPRange&)
    {14, 1386, 97, 1, Smoke::mf_property, 0, 18},	//773 QCPColorMap::setDataScaleType(QCPAxis::ScaleType)
    {14, 1405, 238, 1, Smoke::mf_property, 0, 19},	//774 QCPColorMap::setGradient(const QCPColorGradient&)
    {14, 1433, 16, 1, Smoke::mf_property, 0, 20},	//775 QCPColorMap::setInterpolate(bool)
    {14, 2205, 16, 1, Smoke::mf_property, 0, 21},	//776 QCPColorMap::setTightBoundary(bool)
    {14, 1348, 277, 1, Smoke::mf_property, 0, 22},	//777 QCPColorMap::setColorScale(QCPColorScale*)
    {14, 1169, 16, 1, 0, 0, 23},	//778 QCPColorMap::rescaleDataRange(bool)
    {14, 2414, 279, 2, 0, 0, 24},	//779 QCPColorMap::updateLegendIcon(Qt::TransformationMode, const QSize&)
    {14, 285, 0, 0, Smoke::mf_virtual, 0, 25},	//780 QCPColorMap::clearData()
    {14, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 26},	//781 QCPColorMap::selectTest(const QPointF&, bool, QVariant*) const
    {14, 340, 282, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 27},	//782 QCPColorMap::dataRangeChanged(QCPRange)
    {14, 343, 97, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 28},	//783 QCPColorMap::dataScaleTypeChanged(QCPAxis::ScaleType)
    {14, 554, 284, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 29},	//784 QCPColorMap::gradientChanged(QCPColorGradient)
    {14, 2417, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 30},	//785 QCPColorMap::updateMapImage()
    {14, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 31},	//786 QCPColorMap::draw(QCPPainter*)
    {14, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 32},	//787 QCPColorMap::drawLegendIcon(QCPPainter*, const QRectF&) const
    {14, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 33},	//788 QCPColorMap::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {14, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 34},	//789 QCPColorMap::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {14, 2384, 1, 1, Smoke::mf_static, 222, 35},	//790 QCPColorMap::tr(const char*)
    {14, 2388, 1, 1, Smoke::mf_static, 222, 36},	//791 QCPColorMap::trUtf8(const char*)
    {14, 1368, 286, 1, 0, 0, 37},	//792 QCPColorMap::setData(QCPColorMapData*)
    {14, 1169, 0, 0, 0, 0, 38},	//793 QCPColorMap::rescaleDataRange()
    {14, 2414, 0, 0, 0, 0, 39},	//794 QCPColorMap::updateLegendIcon()
    {14, 2414, 288, 1, 0, 0, 40},	//795 QCPColorMap::updateLegendIcon(Qt::TransformationMode)
    {14, 1236, 48, 2, Smoke::mf_const, 414, 41},	//796 QCPColorMap::selectTest(const QPointF&, bool) const
    {14, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 42},	//797 QCPColorMap::getKeyRange(bool&) const
    {14, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 43},	//798 QCPColorMap::getValueRange(bool&) const
    {14, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 44},	//799 QCPColorMap::staticMetaObject() const
    {14, 747, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 45},	//800 QCPColorMap::mDataRange() const
    {14, 1604, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 46},	//801 QCPColorMap::setMDataRange(const QCPRange&)
    {14, 748, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 18, 47},	//802 QCPColorMap::mDataScaleType() const
    {14, 1606, 97, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 48},	//803 QCPColorMap::setMDataScaleType(QCPAxis::ScaleType)
    {14, 798, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 39, 49},	//804 QCPColorMap::mMapData() const
    {14, 1706, 286, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 50},	//805 QCPColorMap::setMMapData(QCPColorMapData*)
    {14, 761, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 33, 51},	//806 QCPColorMap::mGradient() const
    {14, 1632, 238, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 52},	//807 QCPColorMap::setMGradient(const QCPColorGradient&)
    {14, 777, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 53},	//808 QCPColorMap::mInterpolate() const
    {14, 1664, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 54},	//809 QCPColorMap::setMInterpolate(bool)
    {14, 914, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 55},	//810 QCPColorMap::mTightBoundary() const
    {14, 1939, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 56},	//811 QCPColorMap::setMTightBoundary(bool)
    {14, 738, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 205, 57},	//812 QCPColorMap::mColorScale() const
    {14, 1585, 290, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 58},	//813 QCPColorMap::setMColorScale(const QPointer<QCPColorScale>&)
    {14, 799, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 141, 59},	//814 QCPColorMap::mMapImage() const
    {14, 1708, 292, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 60},	//815 QCPColorMap::setMMapImage(const QImage&)
    {14, 792, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 61},	//816 QCPColorMap::mLegendIcon() const
    {14, 1694, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 62},	//817 QCPColorMap::setMLegendIcon(const QPixmap&)
    {14, 800, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 63},	//818 QCPColorMap::mMapImageInvalidated() const
    {14, 1710, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 64},	//819 QCPColorMap::setMMapImageInvalidated(bool)
    {14, 2473, 0, 0, Smoke::mf_dtor, 0, 65 },	//820 QCPColorMap::~QCPColorMap()
    {15, 27, 294, 4, Smoke::mf_ctor, 39, 1},	//821 QCPColorMapData::QCPColorMapData(int, int, const QCPRange&, const QCPRange&)
    {15, 27, 299, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 39, 2},	//822 QCPColorMapData::QCPColorMapData(const QCPColorMapData&)
    {15, 1038, 299, 1, 0, 38, 3},	//823 QCPColorMapData::operator=(const QCPColorMapData&)
    {15, 631, 0, 0, Smoke::mf_const, 417, 4},	//824 QCPColorMapData::keySize() const
    {15, 2440, 0, 0, Smoke::mf_const, 417, 5},	//825 QCPColorMapData::valueSize() const
    {15, 629, 0, 0, Smoke::mf_const, 101, 6},	//826 QCPColorMapData::keyRange() const
    {15, 2439, 0, 0, Smoke::mf_const, 101, 7},	//827 QCPColorMapData::valueRange() const
    {15, 338, 0, 0, Smoke::mf_const, 101, 8},	//828 QCPColorMapData::dataBounds() const
    {15, 336, 83, 2, 0, 414, 9},	//829 QCPColorMapData::data(double, double)
    {15, 270, 117, 2, 0, 414, 10},	//830 QCPColorMapData::cell(int, int)
    {15, 2140, 117, 2, 0, 0, 11},	//831 QCPColorMapData::setSize(int, int)
    {15, 1449, 35, 1, 0, 0, 12},	//832 QCPColorMapData::setKeySize(int)
    {15, 2231, 35, 1, 0, 0, 13},	//833 QCPColorMapData::setValueSize(int)
    {15, 2057, 133, 2, 0, 0, 14},	//834 QCPColorMapData::setRange(const QCPRange&, const QCPRange&)
    {15, 1447, 101, 1, 0, 0, 15},	//835 QCPColorMapData::setKeyRange(const QCPRange&)
    {15, 2229, 101, 1, 0, 0, 16},	//836 QCPColorMapData::setValueRange(const QCPRange&)
    {15, 1368, 301, 3, 0, 0, 17},	//837 QCPColorMapData::setData(double, double, double)
    {15, 1332, 305, 3, 0, 0, 18},	//838 QCPColorMapData::setCell(int, int, double)
    {15, 1120, 0, 0, 0, 0, 19},	//839 QCPColorMapData::recalculateDataBounds()
    {15, 283, 0, 0, 0, 0, 20},	//840 QCPColorMapData::clear()
    {15, 440, 99, 1, 0, 0, 21},	//841 QCPColorMapData::fill(double)
    {15, 606, 0, 0, Smoke::mf_const, 318, 22},	//842 QCPColorMapData::isEmpty() const
    {15, 317, 309, 4, Smoke::mf_const, 0, 23},	//843 QCPColorMapData::coordToCell(double, double, int*, int*) const
    {15, 272, 314, 4, Smoke::mf_const, 0, 24},	//844 QCPColorMapData::cellToCoord(int, int, double*, double*) const
    {15, 786, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 25},	//845 QCPColorMapData::mKeySize() const
    {15, 1682, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 26},	//846 QCPColorMapData::setMKeySize(int)
    {15, 922, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 27},	//847 QCPColorMapData::mValueSize() const
    {15, 1955, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 28},	//848 QCPColorMapData::setMValueSize(int)
    {15, 785, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 29},	//849 QCPColorMapData::mKeyRange() const
    {15, 1680, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 30},	//850 QCPColorMapData::setMKeyRange(const QCPRange&)
    {15, 921, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 31},	//851 QCPColorMapData::mValueRange() const
    {15, 1953, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 32},	//852 QCPColorMapData::setMValueRange(const QCPRange&)
    {15, 781, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 33},	//853 QCPColorMapData::mIsEmpty() const
    {15, 1672, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 34},	//854 QCPColorMapData::setMIsEmpty(bool)
    {15, 744, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 416, 35},	//855 QCPColorMapData::mData() const
    {15, 1597, 319, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 36},	//856 QCPColorMapData::setMData(double*)
    {15, 745, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 37},	//857 QCPColorMapData::mDataBounds() const
    {15, 1600, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 38},	//858 QCPColorMapData::setMDataBounds(const QCPRange&)
    {15, 746, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 39},	//859 QCPColorMapData::mDataModified() const
    {15, 1602, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 40},	//860 QCPColorMapData::setMDataModified(bool)
    {15, 2474, 0, 0, Smoke::mf_dtor, 0, 41 },	//861 QCPColorMapData::~QCPColorMapData()
    {16, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//862 QCPColorScale::metaObject() const
    {16, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//863 QCPColorScale::qt_metacast(const char*)
    {16, 2384, 3, 2, Smoke::mf_static, 222, 3},	//864 QCPColorScale::tr(const char*, const char*)
    {16, 2388, 3, 2, Smoke::mf_static, 222, 4},	//865 QCPColorScale::trUtf8(const char*, const char*)
    {16, 2384, 6, 3, Smoke::mf_static, 222, 5},	//866 QCPColorScale::tr(const char*, const char*, int)
    {16, 2388, 6, 3, Smoke::mf_static, 222, 6},	//867 QCPColorScale::trUtf8(const char*, const char*, int)
    {16, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//868 QCPColorScale::qt_metacall(QMetaObject::Call, int, void**)
    {16, 30, 14, 1, Smoke::mf_ctor, 41, 8},	//869 QCPColorScale::QCPColorScale(QCustomPlot*)
    {16, 213, 0, 0, Smoke::mf_const, 14, 9},	//870 QCPColorScale::axis() const
    {16, 2399, 0, 0, Smoke::mf_const|Smoke::mf_property, 15, 10},	//871 QCPColorScale::type() const
    {16, 339, 0, 0, Smoke::mf_const|Smoke::mf_property, 101, 11},	//872 QCPColorScale::dataRange() const
    {16, 342, 0, 0, Smoke::mf_const|Smoke::mf_property, 18, 12},	//873 QCPColorScale::dataScaleType() const
    {16, 553, 0, 0, Smoke::mf_const|Smoke::mf_property, 32, 13},	//874 QCPColorScale::gradient() const
    {16, 632, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 14},	//875 QCPColorScale::label() const
    {16, 234, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 15},	//876 QCPColorScale::barWidth() const
    {16, 1109, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 16},	//877 QCPColorScale::rangeDrag() const
    {16, 1113, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 17},	//878 QCPColorScale::rangeZoom() const
    {16, 2209, 131, 1, Smoke::mf_property, 0, 18},	//879 QCPColorScale::setType(QCPAxis::AxisType)
    {16, 1384, 101, 1, Smoke::mf_property, 0, 19},	//880 QCPColorScale::setDataRange(const QCPRange&)
    {16, 1386, 97, 1, Smoke::mf_property, 0, 20},	//881 QCPColorScale::setDataScaleType(QCPAxis::ScaleType)
    {16, 1405, 238, 1, Smoke::mf_property, 0, 21},	//882 QCPColorScale::setGradient(const QCPColorGradient&)
    {16, 1451, 24, 1, Smoke::mf_property, 0, 22},	//883 QCPColorScale::setLabel(const QString&)
    {16, 1316, 35, 1, Smoke::mf_property, 0, 23},	//884 QCPColorScale::setBarWidth(int)
    {16, 2062, 16, 1, Smoke::mf_property, 0, 24},	//885 QCPColorScale::setRangeDrag(bool)
    {16, 2072, 16, 1, Smoke::mf_property, 0, 25},	//886 QCPColorScale::setRangeZoom(bool)
    {16, 298, 0, 0, Smoke::mf_const, 156, 26},	//887 QCPColorScale::colorMaps() const
    {16, 1169, 16, 1, 0, 0, 27},	//888 QCPColorScale::rescaleDataRange(bool)
    {16, 2407, 176, 1, Smoke::mf_virtual, 0, 28},	//889 QCPColorScale::update(QCPLayoutElement::UpdatePhase)
    {16, 340, 282, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 29},	//890 QCPColorScale::dataRangeChanged(QCPRange)
    {16, 343, 97, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 30},	//891 QCPColorScale::dataScaleTypeChanged(QCPAxis::ScaleType)
    {16, 554, 284, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 31},	//892 QCPColorScale::gradientChanged(QCPColorGradient)
    {16, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 32},	//893 QCPColorScale::applyDefaultAntialiasingHint(QCPPainter*) const
    {16, 979, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 33},	//894 QCPColorScale::mousePressEvent(QMouseEvent*)
    {16, 975, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 34},	//895 QCPColorScale::mouseMoveEvent(QMouseEvent*)
    {16, 983, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//896 QCPColorScale::mouseReleaseEvent(QMouseEvent*)
    {16, 2445, 180, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 36},	//897 QCPColorScale::wheelEvent(QWheelEvent*)
    {16, 2384, 1, 1, Smoke::mf_static, 222, 37},	//898 QCPColorScale::tr(const char*)
    {16, 2388, 1, 1, Smoke::mf_static, 222, 38},	//899 QCPColorScale::trUtf8(const char*)
    {16, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 39},	//900 QCPColorScale::staticMetaObject() const
    {16, 917, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 15, 40},	//901 QCPColorScale::mType() const
    {16, 1945, 131, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//902 QCPColorScale::setMType(QCPAxis::AxisType)
    {16, 747, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 102, 42},	//903 QCPColorScale::mDataRange() const
    {16, 1604, 101, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//904 QCPColorScale::setMDataRange(const QCPRange&)
    {16, 748, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 18, 44},	//905 QCPColorScale::mDataScaleType() const
    {16, 1606, 97, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//906 QCPColorScale::setMDataScaleType(QCPAxis::ScaleType)
    {16, 761, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 33, 46},	//907 QCPColorScale::mGradient() const
    {16, 1632, 238, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//908 QCPColorScale::setMGradient(const QCPColorGradient&)
    {16, 715, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 48},	//909 QCPColorScale::mBarWidth() const
    {16, 1539, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//910 QCPColorScale::setMBarWidth(int)
    {16, 707, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 206, 50},	//911 QCPColorScale::mAxisRect() const
    {16, 1522, 321, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//912 QCPColorScale::setMAxisRect(const QPointer<QCPColorScaleAxisRectPrivate>&)
    {16, 734, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 52},	//913 QCPColorScale::mColorAxis() const
    {16, 1577, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 53},	//914 QCPColorScale::setMColorAxis(const QPointer<QCPAxis>&)
    {16, 2475, 0, 0, Smoke::mf_dtor, 0, 54 },	//915 QCPColorScale::~QCPColorScale()
    {18, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//916 QCPCurve::metaObject() const
    {18, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//917 QCPCurve::qt_metacast(const char*)
    {18, 2384, 3, 2, Smoke::mf_static, 222, 3},	//918 QCPCurve::tr(const char*, const char*)
    {18, 2388, 3, 2, Smoke::mf_static, 222, 4},	//919 QCPCurve::trUtf8(const char*, const char*)
    {18, 2384, 6, 3, Smoke::mf_static, 222, 5},	//920 QCPCurve::tr(const char*, const char*, int)
    {18, 2388, 6, 3, Smoke::mf_static, 222, 6},	//921 QCPCurve::trUtf8(const char*, const char*, int)
    {18, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//922 QCPCurve::qt_metacall(QMetaObject::Call, int, void**)
    {18, 32, 63, 2, Smoke::mf_ctor, 43, 8},	//923 QCPCurve::QCPCurve(QCPAxis*, QCPAxis*)
    {18, 336, 0, 0, Smoke::mf_const, 176, 9},	//924 QCPCurve::data() const
    {18, 1228, 0, 0, Smoke::mf_const|Smoke::mf_property, 104, 10},	//925 QCPCurve::scatterStyle() const
    {18, 662, 0, 0, Smoke::mf_const|Smoke::mf_property, 44, 11},	//926 QCPCurve::lineStyle() const
    {18, 1368, 323, 2, 0, 0, 12},	//927 QCPCurve::setData(QMap<double,QCPCurveData>*, bool)
    {18, 1368, 326, 3, 0, 0, 13},	//928 QCPCurve::setData(const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {18, 1368, 202, 2, 0, 0, 14},	//929 QCPCurve::setData(const QVector<double>&, const QVector<double>&)
    {18, 2098, 330, 1, Smoke::mf_property, 0, 15},	//930 QCPCurve::setScatterStyle(const QCPScatterStyle&)
    {18, 1468, 332, 1, Smoke::mf_property, 0, 16},	//931 QCPCurve::setLineStyle(QCPCurve::LineStyle)
    {18, 129, 334, 1, 0, 0, 17},	//932 QCPCurve::addData(const QMap<double,QCPCurveData>&)
    {18, 129, 336, 1, 0, 0, 18},	//933 QCPCurve::addData(const QCPCurveData&)
    {18, 129, 301, 3, 0, 0, 19},	//934 QCPCurve::addData(double, double, double)
    {18, 129, 83, 2, 0, 0, 20},	//935 QCPCurve::addData(double, double)
    {18, 129, 326, 3, 0, 0, 21},	//936 QCPCurve::addData(const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {18, 1146, 99, 1, 0, 0, 22},	//937 QCPCurve::removeDataBefore(double)
    {18, 1144, 99, 1, 0, 0, 23},	//938 QCPCurve::removeDataAfter(double)
    {18, 1141, 83, 2, 0, 0, 24},	//939 QCPCurve::removeData(double, double)
    {18, 1141, 99, 1, 0, 0, 25},	//940 QCPCurve::removeData(double)
    {18, 285, 0, 0, Smoke::mf_virtual, 0, 26},	//941 QCPCurve::clearData()
    {18, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 27},	//942 QCPCurve::selectTest(const QPointF&, bool, QVariant*) const
    {18, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 28},	//943 QCPCurve::draw(QCPPainter*)
    {18, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 29},	//944 QCPCurve::drawLegendIcon(QCPPainter*, const QRectF&) const
    {18, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 30},	//945 QCPCurve::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {18, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 31},	//946 QCPCurve::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {18, 393, 338, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 32},	//947 QCPCurve::drawScatterPlot(QCPPainter*, const QVector<QPointF>*) const
    {18, 471, 341, 1, Smoke::mf_const|Smoke::mf_protected, 0, 33},	//948 QCPCurve::getCurveData(QVector<QPointF>*) const
    {18, 510, 343, 6, Smoke::mf_const|Smoke::mf_protected, 417, 34},	//949 QCPCurve::getRegion(double, double, double, double, double, double) const
    {18, 494, 350, 9, Smoke::mf_const|Smoke::mf_protected, 200, 35},	//950 QCPCurve::getOptimizedPoint(int, double, double, double, double, double, double, double, double) const
    {18, 492, 360, 10, Smoke::mf_const|Smoke::mf_protected, 233, 36},	//951 QCPCurve::getOptimizedCornerPoints(int, int, double, double, double, double, double, double, double, double) const
    {18, 947, 117, 2, Smoke::mf_const|Smoke::mf_protected, 318, 37},	//952 QCPCurve::mayTraverse(int, int) const
    {18, 531, 371, 10, Smoke::mf_const|Smoke::mf_protected, 318, 38},	//953 QCPCurve::getTraverse(double, double, double, double, double, double, double, double, QPointF&, QPointF&) const
    {18, 533, 382, 8, Smoke::mf_const|Smoke::mf_protected, 0, 39},	//954 QCPCurve::getTraverseCornerPoints(int, int, double, double, double, double, QVector<QPointF>&, QVector<QPointF>&) const
    {18, 1092, 127, 1, Smoke::mf_const|Smoke::mf_protected, 414, 40},	//955 QCPCurve::pointDistance(const QPointF&) const
    {18, 2384, 1, 1, Smoke::mf_static, 222, 41},	//956 QCPCurve::tr(const char*)
    {18, 2388, 1, 1, Smoke::mf_static, 222, 42},	//957 QCPCurve::trUtf8(const char*)
    {18, 1368, 391, 1, 0, 0, 43},	//958 QCPCurve::setData(QMap<double,QCPCurveData>*)
    {18, 1236, 48, 2, Smoke::mf_const, 414, 44},	//959 QCPCurve::selectTest(const QPointF&, bool) const
    {18, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 45},	//960 QCPCurve::getKeyRange(bool&) const
    {18, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 46},	//961 QCPCurve::getValueRange(bool&) const
    {18, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 47},	//962 QCPCurve::staticMetaObject() const
    {18, 744, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 176, 48},	//963 QCPCurve::mData() const
    {18, 1597, 391, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//964 QCPCurve::setMData(QMap<double,QCPCurveData>*)
    {18, 870, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 105, 50},	//965 QCPCurve::mScatterStyle() const
    {18, 1851, 330, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//966 QCPCurve::setMScatterStyle(const QCPScatterStyle&)
    {18, 795, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 44, 52},	//967 QCPCurve::mLineStyle() const
    {18, 1700, 332, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 53},	//968 QCPCurve::setMLineStyle(QCPCurve::LineStyle)
    {18, 678, 0, 0, Smoke::mf_static|Smoke::mf_enum, 44, 54},	//969 QCPCurve::lsNone (enum)
    {18, 677, 0, 0, Smoke::mf_static|Smoke::mf_enum, 44, 55},	//970 QCPCurve::lsLine (enum)
    {18, 2476, 0, 0, Smoke::mf_dtor, 0, 56 },	//971 QCPCurve::~QCPCurve()
    {19, 34, 0, 0, Smoke::mf_ctor, 46, 1},	//972 QCPCurveData::QCPCurveData()
    {19, 34, 301, 3, Smoke::mf_ctor, 46, 2},	//973 QCPCurveData::QCPCurveData(double, double, double)
    {19, 34, 336, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 46, 3},	//974 QCPCurveData::QCPCurveData(const QCPCurveData&)
    {19, 2338, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 4},	//975 QCPCurveData::t() const
    {19, 2164, 99, 1, Smoke::mf_attribute, 0, 5},	//976 QCPCurveData::setT(double)
    {19, 622, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 6},	//977 QCPCurveData::key() const
    {19, 1439, 99, 1, Smoke::mf_attribute, 0, 7},	//978 QCPCurveData::setKey(double)
    {19, 2435, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 8},	//979 QCPCurveData::value() const
    {19, 2221, 99, 1, Smoke::mf_attribute, 0, 9},	//980 QCPCurveData::setValue(double)
    {19, 2477, 0, 0, Smoke::mf_dtor, 0, 10 },	//981 QCPCurveData::~QCPCurveData()
    {20, 37, 0, 0, Smoke::mf_ctor, 48, 1},	//982 QCPData::QCPData()
    {20, 37, 83, 2, Smoke::mf_ctor, 48, 2},	//983 QCPData::QCPData(double, double)
    {20, 37, 393, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 48, 3},	//984 QCPData::QCPData(const QCPData&)
    {20, 622, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 4},	//985 QCPData::key() const
    {20, 1439, 99, 1, Smoke::mf_attribute, 0, 5},	//986 QCPData::setKey(double)
    {20, 2435, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 6},	//987 QCPData::value() const
    {20, 2221, 99, 1, Smoke::mf_attribute, 0, 7},	//988 QCPData::setValue(double)
    {20, 625, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 8},	//989 QCPData::keyErrorPlus() const
    {20, 1445, 99, 1, Smoke::mf_attribute, 0, 9},	//990 QCPData::setKeyErrorPlus(double)
    {20, 624, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 10},	//991 QCPData::keyErrorMinus() const
    {20, 1443, 99, 1, Smoke::mf_attribute, 0, 11},	//992 QCPData::setKeyErrorMinus(double)
    {20, 2438, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 12},	//993 QCPData::valueErrorPlus() const
    {20, 2227, 99, 1, Smoke::mf_attribute, 0, 13},	//994 QCPData::setValueErrorPlus(double)
    {20, 2437, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 14},	//995 QCPData::valueErrorMinus() const
    {20, 2225, 99, 1, Smoke::mf_attribute, 0, 15},	//996 QCPData::setValueErrorMinus(double)
    {20, 2478, 0, 0, Smoke::mf_dtor, 0, 16 },	//997 QCPData::~QCPData()
    {21, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//998 QCPFinancial::metaObject() const
    {21, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//999 QCPFinancial::qt_metacast(const char*)
    {21, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1000 QCPFinancial::tr(const char*, const char*)
    {21, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1001 QCPFinancial::trUtf8(const char*, const char*)
    {21, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1002 QCPFinancial::tr(const char*, const char*, int)
    {21, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1003 QCPFinancial::trUtf8(const char*, const char*, int)
    {21, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1004 QCPFinancial::qt_metacall(QMetaObject::Call, int, void**)
    {21, 40, 63, 2, Smoke::mf_ctor, 50, 8},	//1005 QCPFinancial::QCPFinancial(QCPAxis*, QCPAxis*)
    {21, 336, 0, 0, Smoke::mf_const, 179, 9},	//1006 QCPFinancial::data() const
    {21, 278, 0, 0, Smoke::mf_const|Smoke::mf_property, 51, 10},	//1007 QCPFinancial::chartStyle() const
    {21, 2450, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 11},	//1008 QCPFinancial::width() const
    {21, 2398, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 12},	//1009 QCPFinancial::twoColored() const
    {21, 258, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 13},	//1010 QCPFinancial::brushPositive() const
    {21, 257, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 14},	//1011 QCPFinancial::brushNegative() const
    {21, 1066, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 15},	//1012 QCPFinancial::penPositive() const
    {21, 1065, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 16},	//1013 QCPFinancial::penNegative() const
    {21, 1368, 395, 2, 0, 0, 17},	//1014 QCPFinancial::setData(QMap<double,QCPFinancialData>*, bool)
    {21, 1368, 398, 5, 0, 0, 18},	//1015 QCPFinancial::setData(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {21, 1336, 404, 1, Smoke::mf_property, 0, 19},	//1016 QCPFinancial::setChartStyle(QCPFinancial::ChartStyle)
    {21, 2243, 99, 1, Smoke::mf_property, 0, 20},	//1017 QCPFinancial::setWidth(double)
    {21, 2207, 16, 1, Smoke::mf_property, 0, 21},	//1018 QCPFinancial::setTwoColored(bool)
    {21, 1330, 68, 1, Smoke::mf_property, 0, 22},	//1019 QCPFinancial::setBrushPositive(const QBrush&)
    {21, 1328, 68, 1, Smoke::mf_property, 0, 23},	//1020 QCPFinancial::setBrushNegative(const QBrush&)
    {21, 2042, 66, 1, Smoke::mf_property, 0, 24},	//1021 QCPFinancial::setPenPositive(const QPen&)
    {21, 2040, 66, 1, Smoke::mf_property, 0, 25},	//1022 QCPFinancial::setPenNegative(const QPen&)
    {21, 129, 406, 1, 0, 0, 26},	//1023 QCPFinancial::addData(const QMap<double,QCPFinancialData>&)
    {21, 129, 408, 1, 0, 0, 27},	//1024 QCPFinancial::addData(const QCPFinancialData&)
    {21, 129, 410, 5, 0, 0, 28},	//1025 QCPFinancial::addData(double, double, double, double, double)
    {21, 129, 398, 5, 0, 0, 29},	//1026 QCPFinancial::addData(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {21, 1146, 99, 1, 0, 0, 30},	//1027 QCPFinancial::removeDataBefore(double)
    {21, 1144, 99, 1, 0, 0, 31},	//1028 QCPFinancial::removeDataAfter(double)
    {21, 1141, 83, 2, 0, 0, 32},	//1029 QCPFinancial::removeData(double, double)
    {21, 1141, 99, 1, 0, 0, 33},	//1030 QCPFinancial::removeData(double)
    {21, 285, 0, 0, Smoke::mf_virtual, 0, 34},	//1031 QCPFinancial::clearData()
    {21, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 35},	//1032 QCPFinancial::selectTest(const QPointF&, bool, QVariant*) const
    {21, 2364, 416, 4, Smoke::mf_static, 178, 36},	//1033 QCPFinancial::timeSeriesToOhlc(const QVector<double>&, const QVector<double>&, double, double)
    {21, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 37},	//1034 QCPFinancial::draw(QCPPainter*)
    {21, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 38},	//1035 QCPFinancial::drawLegendIcon(QCPPainter*, const QRectF&) const
    {21, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 39},	//1036 QCPFinancial::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {21, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 40},	//1037 QCPFinancial::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {21, 386, 421, 3, Smoke::mf_protected, 0, 41},	//1038 QCPFinancial::drawOhlcPlot(QCPPainter*, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&)
    {21, 367, 421, 3, Smoke::mf_protected, 0, 42},	//1039 QCPFinancial::drawCandlestickPlot(QCPPainter*, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&)
    {21, 1015, 425, 3, Smoke::mf_const|Smoke::mf_protected, 414, 43},	//1040 QCPFinancial::ohlcSelectTest(const QPointF&, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&) const
    {21, 268, 425, 3, Smoke::mf_const|Smoke::mf_protected, 414, 44},	//1041 QCPFinancial::candlestickSelectTest(const QPointF&, const QCPFinancialDataMap::const_iterator&, const QCPFinancialDataMap::const_iterator&) const
    {21, 539, 429, 2, Smoke::mf_const|Smoke::mf_protected, 0, 45},	//1042 QCPFinancial::getVisibleDataBounds(QCPFinancialDataMap::const_iterator&, QCPFinancialDataMap::const_iterator&) const
    {21, 2384, 1, 1, Smoke::mf_static, 222, 46},	//1043 QCPFinancial::tr(const char*)
    {21, 2388, 1, 1, Smoke::mf_static, 222, 47},	//1044 QCPFinancial::trUtf8(const char*)
    {21, 1368, 432, 1, 0, 0, 48},	//1045 QCPFinancial::setData(QMap<double,QCPFinancialData>*)
    {21, 1236, 48, 2, Smoke::mf_const, 414, 49},	//1046 QCPFinancial::selectTest(const QPointF&, bool) const
    {21, 2364, 434, 3, Smoke::mf_static, 178, 50},	//1047 QCPFinancial::timeSeriesToOhlc(const QVector<double>&, const QVector<double>&, double)
    {21, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 51},	//1048 QCPFinancial::getKeyRange(bool&) const
    {21, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 52},	//1049 QCPFinancial::getValueRange(bool&) const
    {21, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 53},	//1050 QCPFinancial::staticMetaObject() const
    {21, 744, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 179, 54},	//1051 QCPFinancial::mData() const
    {21, 1597, 432, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 55},	//1052 QCPFinancial::setMData(QMap<double,QCPFinancialData>*)
    {21, 727, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 51, 56},	//1053 QCPFinancial::mChartStyle() const
    {21, 1563, 404, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 57},	//1054 QCPFinancial::setMChartStyle(QCPFinancial::ChartStyle)
    {21, 928, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 58},	//1055 QCPFinancial::mWidth() const
    {21, 1967, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 59},	//1056 QCPFinancial::setMWidth(double)
    {21, 916, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 60},	//1057 QCPFinancial::mTwoColored() const
    {21, 1943, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 61},	//1058 QCPFinancial::setMTwoColored(bool)
    {21, 723, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 62},	//1059 QCPFinancial::mBrushPositive() const
    {21, 1555, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 63},	//1060 QCPFinancial::setMBrushPositive(const QBrush&)
    {21, 722, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 64},	//1061 QCPFinancial::mBrushNegative() const
    {21, 1553, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 65},	//1062 QCPFinancial::setMBrushNegative(const QBrush&)
    {21, 838, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 66},	//1063 QCPFinancial::mPenPositive() const
    {21, 1787, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 67},	//1064 QCPFinancial::setMPenPositive(const QPen&)
    {21, 837, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 68},	//1065 QCPFinancial::mPenNegative() const
    {21, 1785, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 69},	//1066 QCPFinancial::setMPenNegative(const QPen&)
    {21, 332, 0, 0, Smoke::mf_static|Smoke::mf_enum, 51, 70},	//1067 QCPFinancial::csOhlc (enum)
    {21, 331, 0, 0, Smoke::mf_static|Smoke::mf_enum, 51, 71},	//1068 QCPFinancial::csCandlestick (enum)
    {21, 2479, 0, 0, Smoke::mf_dtor, 0, 72 },	//1069 QCPFinancial::~QCPFinancial()
    {22, 42, 0, 0, Smoke::mf_ctor, 53, 1},	//1070 QCPFinancialData::QCPFinancialData()
    {22, 42, 410, 5, Smoke::mf_ctor, 53, 2},	//1071 QCPFinancialData::QCPFinancialData(double, double, double, double, double)
    {22, 42, 408, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 53, 3},	//1072 QCPFinancialData::QCPFinancialData(const QCPFinancialData&)
    {22, 622, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 4},	//1073 QCPFinancialData::key() const
    {22, 1439, 99, 1, Smoke::mf_attribute, 0, 5},	//1074 QCPFinancialData::setKey(double)
    {22, 1017, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 6},	//1075 QCPFinancialData::open() const
    {22, 2015, 99, 1, Smoke::mf_attribute, 0, 7},	//1076 QCPFinancialData::setOpen(double)
    {22, 578, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 8},	//1077 QCPFinancialData::high() const
    {22, 1413, 99, 1, Smoke::mf_attribute, 0, 9},	//1078 QCPFinancialData::setHigh(double)
    {22, 665, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 10},	//1079 QCPFinancialData::low() const
    {22, 1470, 99, 1, Smoke::mf_attribute, 0, 11},	//1080 QCPFinancialData::setLow(double)
    {22, 292, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 12},	//1081 QCPFinancialData::close() const
    {22, 1342, 99, 1, Smoke::mf_attribute, 0, 13},	//1082 QCPFinancialData::setClose(double)
    {22, 2480, 0, 0, Smoke::mf_dtor, 0, 14 },	//1083 QCPFinancialData::~QCPFinancialData()
    {23, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1084 QCPGraph::metaObject() const
    {23, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1085 QCPGraph::qt_metacast(const char*)
    {23, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1086 QCPGraph::tr(const char*, const char*)
    {23, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1087 QCPGraph::trUtf8(const char*, const char*)
    {23, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1088 QCPGraph::tr(const char*, const char*, int)
    {23, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1089 QCPGraph::trUtf8(const char*, const char*, int)
    {23, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1090 QCPGraph::qt_metacall(QMetaObject::Call, int, void**)
    {23, 45, 63, 2, Smoke::mf_ctor, 56, 8},	//1091 QCPGraph::QCPGraph(QCPAxis*, QCPAxis*)
    {23, 336, 0, 0, Smoke::mf_const, 177, 9},	//1092 QCPGraph::data() const
    {23, 662, 0, 0, Smoke::mf_const|Smoke::mf_property, 58, 10},	//1093 QCPGraph::lineStyle() const
    {23, 1228, 0, 0, Smoke::mf_const|Smoke::mf_property, 104, 11},	//1094 QCPGraph::scatterStyle() const
    {23, 417, 0, 0, Smoke::mf_const|Smoke::mf_property, 57, 12},	//1095 QCPGraph::errorType() const
    {23, 416, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 13},	//1096 QCPGraph::errorPen() const
    {23, 414, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 14},	//1097 QCPGraph::errorBarSize() const
    {23, 415, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 15},	//1098 QCPGraph::errorBarSkipSymbol() const
    {23, 277, 0, 0, Smoke::mf_const|Smoke::mf_property, 56, 16},	//1099 QCPGraph::channelFillGraph() const
    {23, 116, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 17},	//1100 QCPGraph::adaptiveSampling() const
    {23, 1368, 438, 2, 0, 0, 18},	//1101 QCPGraph::setData(QMap<double,QCPData>*, bool)
    {23, 1368, 202, 2, 0, 0, 19},	//1102 QCPGraph::setData(const QVector<double>&, const QVector<double>&)
    {23, 1381, 326, 3, 0, 0, 20},	//1103 QCPGraph::setDataKeyError(const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1381, 441, 4, 0, 0, 21},	//1104 QCPGraph::setDataKeyError(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1388, 326, 3, 0, 0, 22},	//1105 QCPGraph::setDataValueError(const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1388, 441, 4, 0, 0, 23},	//1106 QCPGraph::setDataValueError(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1378, 441, 4, 0, 0, 24},	//1107 QCPGraph::setDataBothError(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1378, 446, 6, 0, 0, 25},	//1108 QCPGraph::setDataBothError(const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&, const QVector<double>&)
    {23, 1468, 453, 1, Smoke::mf_property, 0, 26},	//1109 QCPGraph::setLineStyle(QCPGraph::LineStyle)
    {23, 2098, 330, 1, Smoke::mf_property, 0, 27},	//1110 QCPGraph::setScatterStyle(const QCPScatterStyle&)
    {23, 1401, 455, 1, Smoke::mf_property, 0, 28},	//1111 QCPGraph::setErrorType(QCPGraph::ErrorType)
    {23, 1399, 66, 1, Smoke::mf_property, 0, 29},	//1112 QCPGraph::setErrorPen(const QPen&)
    {23, 1395, 99, 1, Smoke::mf_property, 0, 30},	//1113 QCPGraph::setErrorBarSize(double)
    {23, 1397, 16, 1, Smoke::mf_property, 0, 31},	//1114 QCPGraph::setErrorBarSkipSymbol(bool)
    {23, 1334, 457, 1, Smoke::mf_property, 0, 32},	//1115 QCPGraph::setChannelFillGraph(QCPGraph*)
    {23, 1269, 16, 1, Smoke::mf_property, 0, 33},	//1116 QCPGraph::setAdaptiveSampling(bool)
    {23, 129, 459, 1, 0, 0, 34},	//1117 QCPGraph::addData(const QMap<double,QCPData>&)
    {23, 129, 393, 1, 0, 0, 35},	//1118 QCPGraph::addData(const QCPData&)
    {23, 129, 83, 2, 0, 0, 36},	//1119 QCPGraph::addData(double, double)
    {23, 129, 202, 2, 0, 0, 37},	//1120 QCPGraph::addData(const QVector<double>&, const QVector<double>&)
    {23, 1146, 99, 1, 0, 0, 38},	//1121 QCPGraph::removeDataBefore(double)
    {23, 1144, 99, 1, 0, 0, 39},	//1122 QCPGraph::removeDataAfter(double)
    {23, 1141, 83, 2, 0, 0, 40},	//1123 QCPGraph::removeData(double, double)
    {23, 1141, 99, 1, 0, 0, 41},	//1124 QCPGraph::removeData(double)
    {23, 285, 0, 0, Smoke::mf_virtual, 0, 42},	//1125 QCPGraph::clearData()
    {23, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 43},	//1126 QCPGraph::selectTest(const QPointF&, bool, QVariant*) const
    {23, 1166, 16, 1, Smoke::mf_const, 0, 44},	//1127 QCPGraph::rescaleAxes(bool) const
    {23, 1171, 16, 1, Smoke::mf_const, 0, 45},	//1128 QCPGraph::rescaleKeyAxis(bool) const
    {23, 1174, 16, 1, Smoke::mf_const, 0, 46},	//1129 QCPGraph::rescaleValueAxis(bool) const
    {23, 1166, 461, 2, Smoke::mf_const, 0, 47},	//1130 QCPGraph::rescaleAxes(bool, bool) const
    {23, 1171, 461, 2, Smoke::mf_const, 0, 48},	//1131 QCPGraph::rescaleKeyAxis(bool, bool) const
    {23, 1174, 461, 2, Smoke::mf_const, 0, 49},	//1132 QCPGraph::rescaleValueAxis(bool, bool) const
    {23, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 50},	//1133 QCPGraph::draw(QCPPainter*)
    {23, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 51},	//1134 QCPGraph::drawLegendIcon(QCPPainter*, const QRectF&) const
    {23, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 52},	//1135 QCPGraph::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {23, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 53},	//1136 QCPGraph::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {23, 480, 464, 3, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 54},	//1137 QCPGraph::getKeyRange(bool&, QCPAbstractPlottable::SignDomain, bool) const
    {23, 535, 464, 3, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 55},	//1138 QCPGraph::getValueRange(bool&, QCPAbstractPlottable::SignDomain, bool) const
    {23, 371, 468, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 56},	//1139 QCPGraph::drawFill(QCPPainter*, QVector<QPointF>*) const
    {23, 393, 471, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 57},	//1140 QCPGraph::drawScatterPlot(QCPPainter*, QVector<QCPData>*) const
    {23, 382, 468, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 58},	//1141 QCPGraph::drawLinePlot(QCPPainter*, QVector<QPointF>*) const
    {23, 375, 468, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 59},	//1142 QCPGraph::drawImpulsePlot(QCPPainter*, QVector<QPointF>*) const
    {23, 504, 474, 2, Smoke::mf_const|Smoke::mf_protected, 0, 60},	//1143 QCPGraph::getPreparedData(QVector<QCPData>*, QVector<QCPData>*) const
    {23, 502, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 61},	//1144 QCPGraph::getPlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 512, 480, 1, Smoke::mf_const|Smoke::mf_protected, 0, 62},	//1145 QCPGraph::getScatterPlotData(QVector<QCPData>*) const
    {23, 486, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 63},	//1146 QCPGraph::getLinePlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 520, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 64},	//1147 QCPGraph::getStepLeftPlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 522, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 65},	//1148 QCPGraph::getStepRightPlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 518, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 66},	//1149 QCPGraph::getStepCenterPlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 478, 477, 2, Smoke::mf_const|Smoke::mf_protected, 0, 67},	//1150 QCPGraph::getImpulsePlotData(QVector<QPointF>*, QVector<QCPData>*) const
    {23, 369, 482, 4, Smoke::mf_const|Smoke::mf_protected, 0, 68},	//1151 QCPGraph::drawError(QCPPainter*, double, double, const QCPData&) const
    {23, 539, 487, 2, Smoke::mf_const|Smoke::mf_protected, 0, 69},	//1152 QCPGraph::getVisibleDataBounds(QCPDataMap::const_iterator&, QCPDataMap::const_iterator&) const
    {23, 325, 490, 3, Smoke::mf_const|Smoke::mf_protected, 417, 70},	//1153 QCPGraph::countDataInBounds(const QCPDataMap::const_iterator&, const QCPDataMap::const_iterator&, int) const
    {23, 142, 341, 1, Smoke::mf_const|Smoke::mf_protected, 0, 71},	//1154 QCPGraph::addFillBasePoints(QVector<QPointF>*) const
    {23, 1148, 341, 1, Smoke::mf_const|Smoke::mf_protected, 0, 72},	//1155 QCPGraph::removeFillBasePoints(QVector<QPointF>*) const
    {23, 668, 99, 1, Smoke::mf_const|Smoke::mf_protected, 200, 73},	//1156 QCPGraph::lowerFillBasePoint(double) const
    {23, 2425, 99, 1, Smoke::mf_const|Smoke::mf_protected, 200, 74},	//1157 QCPGraph::upperFillBasePoint(double) const
    {23, 469, 494, 1, Smoke::mf_const|Smoke::mf_protected, 392, 75},	//1158 QCPGraph::getChannelFillPolygon(const QVector<QPointF>*) const
    {23, 446, 496, 2, Smoke::mf_const|Smoke::mf_protected, 417, 76},	//1159 QCPGraph::findIndexBelowX(const QVector<QPointF>*, double) const
    {23, 442, 496, 2, Smoke::mf_const|Smoke::mf_protected, 417, 77},	//1160 QCPGraph::findIndexAboveX(const QVector<QPointF>*, double) const
    {23, 448, 496, 2, Smoke::mf_const|Smoke::mf_protected, 417, 78},	//1161 QCPGraph::findIndexBelowY(const QVector<QPointF>*, double) const
    {23, 444, 496, 2, Smoke::mf_const|Smoke::mf_protected, 417, 79},	//1162 QCPGraph::findIndexAboveY(const QVector<QPointF>*, double) const
    {23, 1092, 127, 1, Smoke::mf_const|Smoke::mf_protected, 414, 80},	//1163 QCPGraph::pointDistance(const QPointF&) const
    {23, 2384, 1, 1, Smoke::mf_static, 222, 81},	//1164 QCPGraph::tr(const char*)
    {23, 2388, 1, 1, Smoke::mf_static, 222, 82},	//1165 QCPGraph::trUtf8(const char*)
    {23, 1368, 499, 1, 0, 0, 83},	//1166 QCPGraph::setData(QMap<double,QCPData>*)
    {23, 1236, 48, 2, Smoke::mf_const, 414, 84},	//1167 QCPGraph::selectTest(const QPointF&, bool) const
    {23, 1166, 0, 0, Smoke::mf_const, 0, 85},	//1168 QCPGraph::rescaleAxes() const
    {23, 1171, 0, 0, Smoke::mf_const, 0, 86},	//1169 QCPGraph::rescaleKeyAxis() const
    {23, 1174, 0, 0, Smoke::mf_const, 0, 87},	//1170 QCPGraph::rescaleValueAxis() const
    {23, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 88},	//1171 QCPGraph::getKeyRange(bool&) const
    {23, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 89},	//1172 QCPGraph::getValueRange(bool&) const
    {23, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 90},	//1173 QCPGraph::staticMetaObject() const
    {23, 744, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 177, 91},	//1174 QCPGraph::mData() const
    {23, 1597, 499, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 92},	//1175 QCPGraph::setMData(QMap<double,QCPData>*)
    {23, 758, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 93},	//1176 QCPGraph::mErrorPen() const
    {23, 1626, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 94},	//1177 QCPGraph::setMErrorPen(const QPen&)
    {23, 795, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 58, 95},	//1178 QCPGraph::mLineStyle() const
    {23, 1700, 453, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 96},	//1179 QCPGraph::setMLineStyle(QCPGraph::LineStyle)
    {23, 870, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 105, 97},	//1180 QCPGraph::mScatterStyle() const
    {23, 1851, 330, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 98},	//1181 QCPGraph::setMScatterStyle(const QCPScatterStyle&)
    {23, 759, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 57, 99},	//1182 QCPGraph::mErrorType() const
    {23, 1628, 455, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 100},	//1183 QCPGraph::setMErrorType(QCPGraph::ErrorType)
    {23, 756, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 101},	//1184 QCPGraph::mErrorBarSize() const
    {23, 1622, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 102},	//1185 QCPGraph::setMErrorBarSize(double)
    {23, 757, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 103},	//1186 QCPGraph::mErrorBarSkipSymbol() const
    {23, 1624, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 104},	//1187 QCPGraph::setMErrorBarSkipSymbol(bool)
    {23, 726, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 207, 105},	//1188 QCPGraph::mChannelFillGraph() const
    {23, 1561, 501, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 106},	//1189 QCPGraph::setMChannelFillGraph(const QPointer<QCPGraph>&)
    {23, 686, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 107},	//1190 QCPGraph::mAdaptiveSampling() const
    {23, 1480, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 108},	//1191 QCPGraph::setMAdaptiveSampling(bool)
    {23, 678, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 109},	//1192 QCPGraph::lsNone (enum)
    {23, 677, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 110},	//1193 QCPGraph::lsLine (enum)
    {23, 681, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 111},	//1194 QCPGraph::lsStepLeft (enum)
    {23, 682, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 112},	//1195 QCPGraph::lsStepRight (enum)
    {23, 680, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 113},	//1196 QCPGraph::lsStepCenter (enum)
    {23, 675, 0, 0, Smoke::mf_static|Smoke::mf_enum, 58, 114},	//1197 QCPGraph::lsImpulse (enum)
    {23, 430, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 115},	//1198 QCPGraph::etNone (enum)
    {23, 429, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 116},	//1199 QCPGraph::etKey (enum)
    {23, 431, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 117},	//1200 QCPGraph::etValue (enum)
    {23, 428, 0, 0, Smoke::mf_static|Smoke::mf_enum, 57, 118},	//1201 QCPGraph::etBoth (enum)
    {23, 2481, 0, 0, Smoke::mf_dtor, 0, 119 },	//1202 QCPGraph::~QCPGraph()
    {24, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1203 QCPGrid::metaObject() const
    {24, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1204 QCPGrid::qt_metacast(const char*)
    {24, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1205 QCPGrid::tr(const char*, const char*)
    {24, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1206 QCPGrid::trUtf8(const char*, const char*)
    {24, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1207 QCPGrid::tr(const char*, const char*, int)
    {24, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1208 QCPGrid::trUtf8(const char*, const char*, int)
    {24, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1209 QCPGrid::qt_metacall(QMetaObject::Call, int, void**)
    {24, 47, 70, 1, Smoke::mf_ctor, 59, 8},	//1210 QCPGrid::QCPGrid(QCPAxis*)
    {24, 2333, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 9},	//1211 QCPGrid::subGridVisible() const
    {24, 182, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 10},	//1212 QCPGrid::antialiasedSubGrid() const
    {24, 183, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 11},	//1213 QCPGrid::antialiasedZeroLine() const
    {24, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 12},	//1214 QCPGrid::pen() const
    {24, 2332, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 13},	//1215 QCPGrid::subGridPen() const
    {24, 2463, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 14},	//1216 QCPGrid::zeroLinePen() const
    {24, 2151, 16, 1, Smoke::mf_property, 0, 15},	//1217 QCPGrid::setSubGridVisible(bool)
    {24, 1284, 16, 1, Smoke::mf_property, 0, 16},	//1218 QCPGrid::setAntialiasedSubGrid(bool)
    {24, 1286, 16, 1, Smoke::mf_property, 0, 17},	//1219 QCPGrid::setAntialiasedZeroLine(bool)
    {24, 2037, 66, 1, Smoke::mf_property, 0, 18},	//1220 QCPGrid::setPen(const QPen&)
    {24, 2149, 66, 1, Smoke::mf_property, 0, 19},	//1221 QCPGrid::setSubGridPen(const QPen&)
    {24, 2255, 66, 1, Smoke::mf_property, 0, 20},	//1222 QCPGrid::setZeroLinePen(const QPen&)
    {24, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 21},	//1223 QCPGrid::applyDefaultAntialiasingHint(QCPPainter*) const
    {24, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 22},	//1224 QCPGrid::draw(QCPPainter*)
    {24, 373, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 23},	//1225 QCPGrid::drawGridLines(QCPPainter*) const
    {24, 398, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 24},	//1226 QCPGrid::drawSubGridLines(QCPPainter*) const
    {24, 2384, 1, 1, Smoke::mf_static, 222, 25},	//1227 QCPGrid::tr(const char*)
    {24, 2388, 1, 1, Smoke::mf_static, 222, 26},	//1228 QCPGrid::trUtf8(const char*)
    {24, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 27},	//1229 QCPGrid::staticMetaObject() const
    {24, 896, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 28},	//1230 QCPGrid::mSubGridVisible() const
    {24, 1903, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1231 QCPGrid::setMSubGridVisible(bool)
    {24, 694, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 30},	//1232 QCPGrid::mAntialiasedSubGrid() const
    {24, 1496, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1233 QCPGrid::setMAntialiasedSubGrid(bool)
    {24, 695, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 32},	//1234 QCPGrid::mAntialiasedZeroLine() const
    {24, 1498, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//1235 QCPGrid::setMAntialiasedZeroLine(bool)
    {24, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 34},	//1236 QCPGrid::mPen() const
    {24, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 35},	//1237 QCPGrid::setMPen(const QPen&)
    {24, 895, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 36},	//1238 QCPGrid::mSubGridPen() const
    {24, 1901, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 37},	//1239 QCPGrid::setMSubGridPen(const QPen&)
    {24, 930, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 38},	//1240 QCPGrid::mZeroLinePen() const
    {24, 1971, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//1241 QCPGrid::setMZeroLinePen(const QPen&)
    {24, 829, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 14, 40},	//1242 QCPGrid::mParentAxis() const
    {24, 1769, 70, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//1243 QCPGrid::setMParentAxis(QCPAxis*)
    {24, 2482, 0, 0, Smoke::mf_dtor, 0, 42 },	//1244 QCPGrid::~QCPGrid()
    {25, 49, 503, 4, Smoke::mf_ctor, 60, 1},	//1245 QCPItemAnchor::QCPItemAnchor(QCustomPlot*, QCPAbstractItem*, const QString, int)
    {25, 1000, 0, 0, Smoke::mf_const, 222, 2},	//1246 QCPItemAnchor::name() const
    {25, 1068, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 200, 3},	//1247 QCPItemAnchor::pixelPoint() const
    {25, 2380, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 70, 4},	//1248 QCPItemAnchor::toQCPItemPosition()
    {25, 125, 508, 1, Smoke::mf_protected, 0, 5},	//1249 QCPItemAnchor::addChildX(QCPItemPosition*)
    {25, 1137, 508, 1, Smoke::mf_protected, 0, 6},	//1250 QCPItemAnchor::removeChildX(QCPItemPosition*)
    {25, 127, 508, 1, Smoke::mf_protected, 0, 7},	//1251 QCPItemAnchor::addChildY(QCPItemPosition*)
    {25, 1139, 508, 1, Smoke::mf_protected, 0, 8},	//1252 QCPItemAnchor::removeChildY(QCPItemPosition*)
    {25, 49, 510, 3, Smoke::mf_ctor, 60, 9},	//1253 QCPItemAnchor::QCPItemAnchor(QCustomPlot*, QCPAbstractItem*, const QString)
    {25, 814, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 10},	//1254 QCPItemAnchor::mName() const
    {25, 1738, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 11},	//1255 QCPItemAnchor::setMName(const QString&)
    {25, 834, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 114, 12},	//1256 QCPItemAnchor::mParentPlot() const
    {25, 1779, 14, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 13},	//1257 QCPItemAnchor::setMParentPlot(QCustomPlot*)
    {25, 830, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 9, 14},	//1258 QCPItemAnchor::mParentItem() const
    {25, 1771, 514, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 15},	//1259 QCPItemAnchor::setMParentItem(QCPAbstractItem*)
    {25, 687, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 16},	//1260 QCPItemAnchor::mAnchorId() const
    {25, 1482, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 17},	//1261 QCPItemAnchor::setMAnchorId(int)
    {25, 729, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 217, 18},	//1262 QCPItemAnchor::mChildrenX() const
    {25, 1567, 516, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 19},	//1263 QCPItemAnchor::setMChildrenX(const QSet<QCPItemPosition*>&)
    {25, 730, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 217, 20},	//1264 QCPItemAnchor::mChildrenY() const
    {25, 1569, 516, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 21},	//1265 QCPItemAnchor::setMChildrenY(const QSet<QCPItemPosition*>&)
    {25, 2483, 0, 0, Smoke::mf_dtor, 0, 22 },	//1266 QCPItemAnchor::~QCPItemAnchor()
    {26, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1267 QCPItemBracket::metaObject() const
    {26, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1268 QCPItemBracket::qt_metacast(const char*)
    {26, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1269 QCPItemBracket::tr(const char*, const char*)
    {26, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1270 QCPItemBracket::trUtf8(const char*, const char*)
    {26, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1271 QCPItemBracket::tr(const char*, const char*, int)
    {26, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1272 QCPItemBracket::trUtf8(const char*, const char*, int)
    {26, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1273 QCPItemBracket::qt_metacall(QMetaObject::Call, int, void**)
    {26, 52, 14, 1, Smoke::mf_ctor, 61, 8},	//1274 QCPItemBracket::QCPItemBracket(QCustomPlot*)
    {26, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1275 QCPItemBracket::pen() const
    {26, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1276 QCPItemBracket::selectedPen() const
    {26, 658, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 11},	//1277 QCPItemBracket::length() const
    {26, 2330, 0, 0, Smoke::mf_const|Smoke::mf_property, 63, 12},	//1278 QCPItemBracket::style() const
    {26, 2037, 66, 1, Smoke::mf_property, 0, 13},	//1279 QCPItemBracket::setPen(const QPen&)
    {26, 2124, 66, 1, Smoke::mf_property, 0, 14},	//1280 QCPItemBracket::setSelectedPen(const QPen&)
    {26, 1464, 99, 1, Smoke::mf_property, 0, 15},	//1281 QCPItemBracket::setLength(double)
    {26, 2147, 518, 1, Smoke::mf_property, 0, 16},	//1282 QCPItemBracket::setStyle(QCPItemBracket::BracketStyle)
    {26, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 17},	//1283 QCPItemBracket::selectTest(const QPointF&, bool, QVariant*) const
    {26, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 18},	//1284 QCPItemBracket::draw(QCPPainter*)
    {26, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 19},	//1285 QCPItemBracket::anchorPixelPoint(int) const
    {26, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 20},	//1286 QCPItemBracket::mainPen() const
    {26, 2384, 1, 1, Smoke::mf_static, 222, 21},	//1287 QCPItemBracket::tr(const char*)
    {26, 2388, 1, 1, Smoke::mf_static, 222, 22},	//1288 QCPItemBracket::trUtf8(const char*)
    {26, 1236, 48, 2, Smoke::mf_const, 414, 23},	//1289 QCPItemBracket::selectTest(const QPointF&, bool) const
    {26, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 24},	//1290 QCPItemBracket::staticMetaObject() const
    {26, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 25},	//1291 QCPItemBracket::mPen() const
    {26, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 26},	//1292 QCPItemBracket::setMPen(const QPen&)
    {26, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 27},	//1293 QCPItemBracket::mSelectedPen() const
    {26, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 28},	//1294 QCPItemBracket::setMSelectedPen(const QPen&)
    {26, 793, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 29},	//1295 QCPItemBracket::mLength() const
    {26, 1696, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 30},	//1296 QCPItemBracket::setMLength(double)
    {26, 894, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 63, 31},	//1297 QCPItemBracket::mStyle() const
    {26, 1899, 518, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 32},	//1298 QCPItemBracket::setMStyle(QCPItemBracket::BracketStyle)
    {26, 262, 0, 0, Smoke::mf_static|Smoke::mf_enum, 63, 33},	//1299 QCPItemBracket::bsSquare (enum)
    {26, 261, 0, 0, Smoke::mf_static|Smoke::mf_enum, 63, 34},	//1300 QCPItemBracket::bsRound (enum)
    {26, 260, 0, 0, Smoke::mf_static|Smoke::mf_enum, 63, 35},	//1301 QCPItemBracket::bsCurly (enum)
    {26, 259, 0, 0, Smoke::mf_static|Smoke::mf_enum, 63, 36},	//1302 QCPItemBracket::bsCalligraphic (enum)
    {26, 164, 0, 0, Smoke::mf_static|Smoke::mf_enum, 62, 37},	//1303 QCPItemBracket::aiCenter (enum)
    {26, 2484, 0, 0, Smoke::mf_dtor, 0, 38 },	//1304 QCPItemBracket::~QCPItemBracket()
    {27, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1305 QCPItemCurve::metaObject() const
    {27, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1306 QCPItemCurve::qt_metacast(const char*)
    {27, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1307 QCPItemCurve::tr(const char*, const char*)
    {27, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1308 QCPItemCurve::trUtf8(const char*, const char*)
    {27, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1309 QCPItemCurve::tr(const char*, const char*, int)
    {27, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1310 QCPItemCurve::trUtf8(const char*, const char*, int)
    {27, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1311 QCPItemCurve::qt_metacall(QMetaObject::Call, int, void**)
    {27, 54, 14, 1, Smoke::mf_ctor, 64, 8},	//1312 QCPItemCurve::QCPItemCurve(QCustomPlot*)
    {27, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1313 QCPItemCurve::pen() const
    {27, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1314 QCPItemCurve::selectedPen() const
    {27, 572, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 11},	//1315 QCPItemCurve::head() const
    {27, 2340, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 12},	//1316 QCPItemCurve::tail() const
    {27, 2037, 66, 1, Smoke::mf_property, 0, 13},	//1317 QCPItemCurve::setPen(const QPen&)
    {27, 2124, 66, 1, Smoke::mf_property, 0, 14},	//1318 QCPItemCurve::setSelectedPen(const QPen&)
    {27, 1411, 122, 1, Smoke::mf_property, 0, 15},	//1319 QCPItemCurve::setHead(const QCPLineEnding&)
    {27, 2166, 122, 1, Smoke::mf_property, 0, 16},	//1320 QCPItemCurve::setTail(const QCPLineEnding&)
    {27, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 17},	//1321 QCPItemCurve::selectTest(const QPointF&, bool, QVariant*) const
    {27, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 18},	//1322 QCPItemCurve::draw(QCPPainter*)
    {27, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 19},	//1323 QCPItemCurve::mainPen() const
    {27, 2384, 1, 1, Smoke::mf_static, 222, 20},	//1324 QCPItemCurve::tr(const char*)
    {27, 2388, 1, 1, Smoke::mf_static, 222, 21},	//1325 QCPItemCurve::trUtf8(const char*)
    {27, 1236, 48, 2, Smoke::mf_const, 414, 22},	//1326 QCPItemCurve::selectTest(const QPointF&, bool) const
    {27, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 23},	//1327 QCPItemCurve::staticMetaObject() const
    {27, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 24},	//1328 QCPItemCurve::mPen() const
    {27, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 25},	//1329 QCPItemCurve::setMPen(const QPen&)
    {27, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 26},	//1330 QCPItemCurve::mSelectedPen() const
    {27, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 27},	//1331 QCPItemCurve::setMSelectedPen(const QPen&)
    {27, 766, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 93, 28},	//1332 QCPItemCurve::mHead() const
    {27, 1642, 122, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1333 QCPItemCurve::setMHead(const QCPLineEnding&)
    {27, 900, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 93, 30},	//1334 QCPItemCurve::mTail() const
    {27, 1911, 122, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1335 QCPItemCurve::setMTail(const QCPLineEnding&)
    {27, 2485, 0, 0, Smoke::mf_dtor, 0, 32 },	//1336 QCPItemCurve::~QCPItemCurve()
    {28, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1337 QCPItemEllipse::metaObject() const
    {28, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1338 QCPItemEllipse::qt_metacast(const char*)
    {28, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1339 QCPItemEllipse::tr(const char*, const char*)
    {28, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1340 QCPItemEllipse::trUtf8(const char*, const char*)
    {28, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1341 QCPItemEllipse::tr(const char*, const char*, int)
    {28, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1342 QCPItemEllipse::trUtf8(const char*, const char*, int)
    {28, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1343 QCPItemEllipse::qt_metacall(QMetaObject::Call, int, void**)
    {28, 56, 14, 1, Smoke::mf_ctor, 65, 8},	//1344 QCPItemEllipse::QCPItemEllipse(QCustomPlot*)
    {28, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1345 QCPItemEllipse::pen() const
    {28, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1346 QCPItemEllipse::selectedPen() const
    {28, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 11},	//1347 QCPItemEllipse::brush() const
    {28, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 12},	//1348 QCPItemEllipse::selectedBrush() const
    {28, 2037, 66, 1, Smoke::mf_property, 0, 13},	//1349 QCPItemEllipse::setPen(const QPen&)
    {28, 2124, 66, 1, Smoke::mf_property, 0, 14},	//1350 QCPItemEllipse::setSelectedPen(const QPen&)
    {28, 1326, 68, 1, Smoke::mf_property, 0, 15},	//1351 QCPItemEllipse::setBrush(const QBrush&)
    {28, 2110, 68, 1, Smoke::mf_property, 0, 16},	//1352 QCPItemEllipse::setSelectedBrush(const QBrush&)
    {28, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 17},	//1353 QCPItemEllipse::selectTest(const QPointF&, bool, QVariant*) const
    {28, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 18},	//1354 QCPItemEllipse::draw(QCPPainter*)
    {28, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 19},	//1355 QCPItemEllipse::anchorPixelPoint(int) const
    {28, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 20},	//1356 QCPItemEllipse::mainPen() const
    {28, 931, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 21},	//1357 QCPItemEllipse::mainBrush() const
    {28, 2384, 1, 1, Smoke::mf_static, 222, 22},	//1358 QCPItemEllipse::tr(const char*)
    {28, 2388, 1, 1, Smoke::mf_static, 222, 23},	//1359 QCPItemEllipse::trUtf8(const char*)
    {28, 1236, 48, 2, Smoke::mf_const, 414, 24},	//1360 QCPItemEllipse::selectTest(const QPointF&, bool) const
    {28, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 25},	//1361 QCPItemEllipse::staticMetaObject() const
    {28, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 26},	//1362 QCPItemEllipse::mPen() const
    {28, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 27},	//1363 QCPItemEllipse::setMPen(const QPen&)
    {28, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 28},	//1364 QCPItemEllipse::mSelectedPen() const
    {28, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1365 QCPItemEllipse::setMSelectedPen(const QPen&)
    {28, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 30},	//1366 QCPItemEllipse::mBrush() const
    {28, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1367 QCPItemEllipse::setMBrush(const QBrush&)
    {28, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 32},	//1368 QCPItemEllipse::mSelectedBrush() const
    {28, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//1369 QCPItemEllipse::setMSelectedBrush(const QBrush&)
    {28, 169, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 34},	//1370 QCPItemEllipse::aiTopLeftRim (enum)
    {28, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 35},	//1371 QCPItemEllipse::aiTop (enum)
    {28, 171, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 36},	//1372 QCPItemEllipse::aiTopRightRim (enum)
    {28, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 37},	//1373 QCPItemEllipse::aiRight (enum)
    {28, 163, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 38},	//1374 QCPItemEllipse::aiBottomRightRim (enum)
    {28, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 39},	//1375 QCPItemEllipse::aiBottom (enum)
    {28, 161, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 40},	//1376 QCPItemEllipse::aiBottomLeftRim (enum)
    {28, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 41},	//1377 QCPItemEllipse::aiLeft (enum)
    {28, 164, 0, 0, Smoke::mf_static|Smoke::mf_enum, 66, 42},	//1378 QCPItemEllipse::aiCenter (enum)
    {28, 2486, 0, 0, Smoke::mf_dtor, 0, 43 },	//1379 QCPItemEllipse::~QCPItemEllipse()
    {29, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1380 QCPItemLine::metaObject() const
    {29, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1381 QCPItemLine::qt_metacast(const char*)
    {29, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1382 QCPItemLine::tr(const char*, const char*)
    {29, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1383 QCPItemLine::trUtf8(const char*, const char*)
    {29, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1384 QCPItemLine::tr(const char*, const char*, int)
    {29, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1385 QCPItemLine::trUtf8(const char*, const char*, int)
    {29, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1386 QCPItemLine::qt_metacall(QMetaObject::Call, int, void**)
    {29, 58, 14, 1, Smoke::mf_ctor, 67, 8},	//1387 QCPItemLine::QCPItemLine(QCustomPlot*)
    {29, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1388 QCPItemLine::pen() const
    {29, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1389 QCPItemLine::selectedPen() const
    {29, 572, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 11},	//1390 QCPItemLine::head() const
    {29, 2340, 0, 0, Smoke::mf_const|Smoke::mf_property, 92, 12},	//1391 QCPItemLine::tail() const
    {29, 2037, 66, 1, Smoke::mf_property, 0, 13},	//1392 QCPItemLine::setPen(const QPen&)
    {29, 2124, 66, 1, Smoke::mf_property, 0, 14},	//1393 QCPItemLine::setSelectedPen(const QPen&)
    {29, 1411, 122, 1, Smoke::mf_property, 0, 15},	//1394 QCPItemLine::setHead(const QCPLineEnding&)
    {29, 2166, 122, 1, Smoke::mf_property, 0, 16},	//1395 QCPItemLine::setTail(const QCPLineEnding&)
    {29, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 17},	//1396 QCPItemLine::selectTest(const QPointF&, bool, QVariant*) const
    {29, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 18},	//1397 QCPItemLine::draw(QCPPainter*)
    {29, 506, 520, 3, Smoke::mf_const|Smoke::mf_protected, 146, 19},	//1398 QCPItemLine::getRectClippedLine(const QVector2D&, const QVector2D&, const QRect&) const
    {29, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 20},	//1399 QCPItemLine::mainPen() const
    {29, 2384, 1, 1, Smoke::mf_static, 222, 21},	//1400 QCPItemLine::tr(const char*)
    {29, 2388, 1, 1, Smoke::mf_static, 222, 22},	//1401 QCPItemLine::trUtf8(const char*)
    {29, 1236, 48, 2, Smoke::mf_const, 414, 23},	//1402 QCPItemLine::selectTest(const QPointF&, bool) const
    {29, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 24},	//1403 QCPItemLine::staticMetaObject() const
    {29, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 25},	//1404 QCPItemLine::mPen() const
    {29, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 26},	//1405 QCPItemLine::setMPen(const QPen&)
    {29, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 27},	//1406 QCPItemLine::mSelectedPen() const
    {29, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 28},	//1407 QCPItemLine::setMSelectedPen(const QPen&)
    {29, 766, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 93, 29},	//1408 QCPItemLine::mHead() const
    {29, 1642, 122, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 30},	//1409 QCPItemLine::setMHead(const QCPLineEnding&)
    {29, 900, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 93, 31},	//1410 QCPItemLine::mTail() const
    {29, 1911, 122, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 32},	//1411 QCPItemLine::setMTail(const QCPLineEnding&)
    {29, 2487, 0, 0, Smoke::mf_dtor, 0, 33 },	//1412 QCPItemLine::~QCPItemLine()
    {30, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1413 QCPItemPixmap::metaObject() const
    {30, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1414 QCPItemPixmap::qt_metacast(const char*)
    {30, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1415 QCPItemPixmap::tr(const char*, const char*)
    {30, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1416 QCPItemPixmap::trUtf8(const char*, const char*)
    {30, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1417 QCPItemPixmap::tr(const char*, const char*, int)
    {30, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1418 QCPItemPixmap::trUtf8(const char*, const char*, int)
    {30, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1419 QCPItemPixmap::qt_metacall(QMetaObject::Call, int, void**)
    {30, 60, 14, 1, Smoke::mf_ctor, 68, 8},	//1420 QCPItemPixmap::QCPItemPixmap(QCustomPlot*)
    {30, 1074, 0, 0, Smoke::mf_const|Smoke::mf_property, 196, 9},	//1421 QCPItemPixmap::pixmap() const
    {30, 1227, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 10},	//1422 QCPItemPixmap::scaled() const
    {30, 199, 0, 0, Smoke::mf_const|Smoke::mf_property, 250, 11},	//1423 QCPItemPixmap::aspectRatioMode() const
    {30, 2392, 0, 0, Smoke::mf_const|Smoke::mf_property, 310, 12},	//1424 QCPItemPixmap::transformationMode() const
    {30, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 13},	//1425 QCPItemPixmap::pen() const
    {30, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 14},	//1426 QCPItemPixmap::selectedPen() const
    {30, 2048, 158, 1, Smoke::mf_property, 0, 15},	//1427 QCPItemPixmap::setPixmap(const QPixmap&)
    {30, 2094, 524, 3, 0, 0, 16},	//1428 QCPItemPixmap::setScaled(bool, Qt::AspectRatioMode, Qt::TransformationMode)
    {30, 2037, 66, 1, Smoke::mf_property, 0, 17},	//1429 QCPItemPixmap::setPen(const QPen&)
    {30, 2124, 66, 1, Smoke::mf_property, 0, 18},	//1430 QCPItemPixmap::setSelectedPen(const QPen&)
    {30, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 19},	//1431 QCPItemPixmap::selectTest(const QPointF&, bool, QVariant*) const
    {30, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 20},	//1432 QCPItemPixmap::draw(QCPPainter*)
    {30, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 21},	//1433 QCPItemPixmap::anchorPixelPoint(int) const
    {30, 2419, 528, 3, Smoke::mf_protected, 0, 22},	//1434 QCPItemPixmap::updateScaledPixmap(QRect, bool, bool)
    {30, 473, 532, 2, Smoke::mf_const|Smoke::mf_protected, 211, 23},	//1435 QCPItemPixmap::getFinalRect(bool*, bool*) const
    {30, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 24},	//1436 QCPItemPixmap::mainPen() const
    {30, 2384, 1, 1, Smoke::mf_static, 222, 25},	//1437 QCPItemPixmap::tr(const char*)
    {30, 2388, 1, 1, Smoke::mf_static, 222, 26},	//1438 QCPItemPixmap::trUtf8(const char*)
    {30, 2094, 16, 1, 0, 0, 27},	//1439 QCPItemPixmap::setScaled(bool)
    {30, 2094, 535, 2, 0, 0, 28},	//1440 QCPItemPixmap::setScaled(bool, Qt::AspectRatioMode)
    {30, 1236, 48, 2, Smoke::mf_const, 414, 29},	//1441 QCPItemPixmap::selectTest(const QPointF&, bool) const
    {30, 2419, 0, 0, Smoke::mf_protected, 0, 30},	//1442 QCPItemPixmap::updateScaledPixmap()
    {30, 2419, 538, 1, Smoke::mf_protected, 0, 31},	//1443 QCPItemPixmap::updateScaledPixmap(QRect)
    {30, 2419, 540, 2, Smoke::mf_protected, 0, 32},	//1444 QCPItemPixmap::updateScaledPixmap(QRect, bool)
    {30, 473, 0, 0, Smoke::mf_const|Smoke::mf_protected, 211, 33},	//1445 QCPItemPixmap::getFinalRect() const
    {30, 473, 33, 1, Smoke::mf_const|Smoke::mf_protected, 211, 34},	//1446 QCPItemPixmap::getFinalRect(bool*) const
    {30, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 35},	//1447 QCPItemPixmap::staticMetaObject() const
    {30, 840, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 36},	//1448 QCPItemPixmap::mPixmap() const
    {30, 1791, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 37},	//1449 QCPItemPixmap::setMPixmap(const QPixmap&)
    {30, 869, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 38},	//1450 QCPItemPixmap::mScaledPixmap() const
    {30, 1849, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//1451 QCPItemPixmap::setMScaledPixmap(const QPixmap&)
    {30, 867, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 40},	//1452 QCPItemPixmap::mScaled() const
    {30, 1845, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//1453 QCPItemPixmap::setMScaled(bool)
    {30, 697, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 250, 42},	//1454 QCPItemPixmap::mAspectRatioMode() const
    {30, 1502, 164, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//1455 QCPItemPixmap::setMAspectRatioMode(Qt::AspectRatioMode)
    {30, 915, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 310, 44},	//1456 QCPItemPixmap::mTransformationMode() const
    {30, 1941, 288, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//1457 QCPItemPixmap::setMTransformationMode(Qt::TransformationMode)
    {30, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 46},	//1458 QCPItemPixmap::mPen() const
    {30, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//1459 QCPItemPixmap::setMPen(const QPen&)
    {30, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 48},	//1460 QCPItemPixmap::mSelectedPen() const
    {30, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//1461 QCPItemPixmap::setMSelectedPen(const QPen&)
    {30, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 50},	//1462 QCPItemPixmap::aiTop (enum)
    {30, 170, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 51},	//1463 QCPItemPixmap::aiTopRight (enum)
    {30, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 52},	//1464 QCPItemPixmap::aiRight (enum)
    {30, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 53},	//1465 QCPItemPixmap::aiBottom (enum)
    {30, 160, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 54},	//1466 QCPItemPixmap::aiBottomLeft (enum)
    {30, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 69, 55},	//1467 QCPItemPixmap::aiLeft (enum)
    {30, 2488, 0, 0, Smoke::mf_dtor, 0, 56 },	//1468 QCPItemPixmap::~QCPItemPixmap()
    {31, 62, 510, 3, Smoke::mf_ctor, 70, 1},	//1469 QCPItemPosition::QCPItemPosition(QCustomPlot*, QCPAbstractItem*, const QString)
    {31, 2399, 0, 0, Smoke::mf_const, 71, 2},	//1470 QCPItemPosition::type() const
    {31, 2400, 0, 0, Smoke::mf_const, 71, 3},	//1471 QCPItemPosition::typeX() const
    {31, 2401, 0, 0, Smoke::mf_const, 71, 4},	//1472 QCPItemPosition::typeY() const
    {31, 1056, 0, 0, Smoke::mf_const, 60, 5},	//1473 QCPItemPosition::parentAnchor() const
    {31, 1057, 0, 0, Smoke::mf_const, 60, 6},	//1474 QCPItemPosition::parentAnchorX() const
    {31, 1058, 0, 0, Smoke::mf_const, 60, 7},	//1475 QCPItemPosition::parentAnchorY() const
    {31, 622, 0, 0, Smoke::mf_const, 414, 8},	//1476 QCPItemPosition::key() const
    {31, 2435, 0, 0, Smoke::mf_const, 414, 9},	//1477 QCPItemPosition::value() const
    {31, 321, 0, 0, Smoke::mf_const, 200, 10},	//1478 QCPItemPosition::coords() const
    {31, 623, 0, 0, Smoke::mf_const, 14, 11},	//1479 QCPItemPosition::keyAxis() const
    {31, 2436, 0, 0, Smoke::mf_const, 14, 12},	//1480 QCPItemPosition::valueAxis() const
    {31, 222, 0, 0, Smoke::mf_const, 23, 13},	//1481 QCPItemPosition::axisRect() const
    {31, 1068, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 200, 14},	//1482 QCPItemPosition::pixelPoint() const
    {31, 2209, 543, 1, 0, 0, 15},	//1483 QCPItemPosition::setType(QCPItemPosition::PositionType)
    {31, 2211, 543, 1, 0, 0, 16},	//1484 QCPItemPosition::setTypeX(QCPItemPosition::PositionType)
    {31, 2213, 543, 1, 0, 0, 17},	//1485 QCPItemPosition::setTypeY(QCPItemPosition::PositionType)
    {31, 2026, 545, 2, 0, 318, 18},	//1486 QCPItemPosition::setParentAnchor(QCPItemAnchor*, bool)
    {31, 2029, 545, 2, 0, 318, 19},	//1487 QCPItemPosition::setParentAnchorX(QCPItemAnchor*, bool)
    {31, 2032, 545, 2, 0, 318, 20},	//1488 QCPItemPosition::setParentAnchorY(QCPItemAnchor*, bool)
    {31, 1360, 83, 2, 0, 0, 21},	//1489 QCPItemPosition::setCoords(double, double)
    {31, 1360, 127, 1, 0, 0, 22},	//1490 QCPItemPosition::setCoords(const QPointF&)
    {31, 1304, 63, 2, 0, 0, 23},	//1491 QCPItemPosition::setAxes(QCPAxis*, QCPAxis*)
    {31, 1306, 18, 1, 0, 0, 24},	//1492 QCPItemPosition::setAxisRect(QCPAxisRect*)
    {31, 2046, 127, 1, 0, 0, 25},	//1493 QCPItemPosition::setPixelPoint(const QPointF&)
    {31, 2380, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 70, 26},	//1494 QCPItemPosition::toQCPItemPosition()
    {31, 2026, 548, 1, 0, 318, 27},	//1495 QCPItemPosition::setParentAnchor(QCPItemAnchor*)
    {31, 2029, 548, 1, 0, 318, 28},	//1496 QCPItemPosition::setParentAnchorX(QCPItemAnchor*)
    {31, 2032, 548, 1, 0, 318, 29},	//1497 QCPItemPosition::setParentAnchorY(QCPItemAnchor*)
    {31, 846, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 71, 30},	//1498 QCPItemPosition::mPositionTypeX() const
    {31, 1803, 543, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1499 QCPItemPosition::setMPositionTypeX(QCPItemPosition::PositionType)
    {31, 847, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 71, 32},	//1500 QCPItemPosition::mPositionTypeY() const
    {31, 1805, 543, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//1501 QCPItemPosition::setMPositionTypeY(QCPItemPosition::PositionType)
    {31, 784, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 34},	//1502 QCPItemPosition::mKeyAxis() const
    {31, 1678, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 35},	//1503 QCPItemPosition::setMKeyAxis(const QPointer<QCPAxis>&)
    {31, 920, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 202, 36},	//1504 QCPItemPosition::mValueAxis() const
    {31, 1951, 92, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 37},	//1505 QCPItemPosition::setMValueAxis(const QPointer<QCPAxis>&)
    {31, 707, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 203, 38},	//1506 QCPItemPosition::mAxisRect() const
    {31, 1522, 51, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//1507 QCPItemPosition::setMAxisRect(const QPointer<QCPAxisRect>&)
    {31, 783, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 40},	//1508 QCPItemPosition::mKey() const
    {31, 1676, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//1509 QCPItemPosition::setMKey(double)
    {31, 919, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 42},	//1510 QCPItemPosition::mValue() const
    {31, 1949, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//1511 QCPItemPosition::setMValue(double)
    {31, 827, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 60, 44},	//1512 QCPItemPosition::mParentAnchorX() const
    {31, 1765, 548, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//1513 QCPItemPosition::setMParentAnchorX(QCPItemAnchor*)
    {31, 828, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 60, 46},	//1514 QCPItemPosition::mParentAnchorY() const
    {31, 1767, 548, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//1515 QCPItemPosition::setMParentAnchorY(QCPItemAnchor*)
    {31, 1097, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 48},	//1516 QCPItemPosition::ptAbsolute (enum)
    {31, 1100, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 49},	//1517 QCPItemPosition::ptViewportRatio (enum)
    {31, 1098, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 50},	//1518 QCPItemPosition::ptAxisRectRatio (enum)
    {31, 1099, 0, 0, Smoke::mf_static|Smoke::mf_enum, 71, 51},	//1519 QCPItemPosition::ptPlotCoords (enum)
    {31, 2489, 0, 0, Smoke::mf_dtor, 0, 52 },	//1520 QCPItemPosition::~QCPItemPosition()
    {32, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1521 QCPItemRect::metaObject() const
    {32, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1522 QCPItemRect::qt_metacast(const char*)
    {32, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1523 QCPItemRect::tr(const char*, const char*)
    {32, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1524 QCPItemRect::trUtf8(const char*, const char*)
    {32, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1525 QCPItemRect::tr(const char*, const char*, int)
    {32, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1526 QCPItemRect::trUtf8(const char*, const char*, int)
    {32, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1527 QCPItemRect::qt_metacall(QMetaObject::Call, int, void**)
    {32, 64, 14, 1, Smoke::mf_ctor, 72, 8},	//1528 QCPItemRect::QCPItemRect(QCustomPlot*)
    {32, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1529 QCPItemRect::pen() const
    {32, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1530 QCPItemRect::selectedPen() const
    {32, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 11},	//1531 QCPItemRect::brush() const
    {32, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 12},	//1532 QCPItemRect::selectedBrush() const
    {32, 2037, 66, 1, Smoke::mf_property, 0, 13},	//1533 QCPItemRect::setPen(const QPen&)
    {32, 2124, 66, 1, Smoke::mf_property, 0, 14},	//1534 QCPItemRect::setSelectedPen(const QPen&)
    {32, 1326, 68, 1, Smoke::mf_property, 0, 15},	//1535 QCPItemRect::setBrush(const QBrush&)
    {32, 2110, 68, 1, Smoke::mf_property, 0, 16},	//1536 QCPItemRect::setSelectedBrush(const QBrush&)
    {32, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 17},	//1537 QCPItemRect::selectTest(const QPointF&, bool, QVariant*) const
    {32, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 18},	//1538 QCPItemRect::draw(QCPPainter*)
    {32, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 19},	//1539 QCPItemRect::anchorPixelPoint(int) const
    {32, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 20},	//1540 QCPItemRect::mainPen() const
    {32, 931, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 21},	//1541 QCPItemRect::mainBrush() const
    {32, 2384, 1, 1, Smoke::mf_static, 222, 22},	//1542 QCPItemRect::tr(const char*)
    {32, 2388, 1, 1, Smoke::mf_static, 222, 23},	//1543 QCPItemRect::trUtf8(const char*)
    {32, 1236, 48, 2, Smoke::mf_const, 414, 24},	//1544 QCPItemRect::selectTest(const QPointF&, bool) const
    {32, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 25},	//1545 QCPItemRect::staticMetaObject() const
    {32, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 26},	//1546 QCPItemRect::mPen() const
    {32, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 27},	//1547 QCPItemRect::setMPen(const QPen&)
    {32, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 28},	//1548 QCPItemRect::mSelectedPen() const
    {32, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1549 QCPItemRect::setMSelectedPen(const QPen&)
    {32, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 30},	//1550 QCPItemRect::mBrush() const
    {32, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1551 QCPItemRect::setMBrush(const QBrush&)
    {32, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 32},	//1552 QCPItemRect::mSelectedBrush() const
    {32, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//1553 QCPItemRect::setMSelectedBrush(const QBrush&)
    {32, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 34},	//1554 QCPItemRect::aiTop (enum)
    {32, 170, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 35},	//1555 QCPItemRect::aiTopRight (enum)
    {32, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 36},	//1556 QCPItemRect::aiRight (enum)
    {32, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 37},	//1557 QCPItemRect::aiBottom (enum)
    {32, 160, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 38},	//1558 QCPItemRect::aiBottomLeft (enum)
    {32, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 73, 39},	//1559 QCPItemRect::aiLeft (enum)
    {32, 2490, 0, 0, Smoke::mf_dtor, 0, 40 },	//1560 QCPItemRect::~QCPItemRect()
    {33, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1561 QCPItemStraightLine::metaObject() const
    {33, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1562 QCPItemStraightLine::qt_metacast(const char*)
    {33, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1563 QCPItemStraightLine::tr(const char*, const char*)
    {33, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1564 QCPItemStraightLine::trUtf8(const char*, const char*)
    {33, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1565 QCPItemStraightLine::tr(const char*, const char*, int)
    {33, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1566 QCPItemStraightLine::trUtf8(const char*, const char*, int)
    {33, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1567 QCPItemStraightLine::qt_metacall(QMetaObject::Call, int, void**)
    {33, 66, 14, 1, Smoke::mf_ctor, 74, 8},	//1568 QCPItemStraightLine::QCPItemStraightLine(QCustomPlot*)
    {33, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1569 QCPItemStraightLine::pen() const
    {33, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1570 QCPItemStraightLine::selectedPen() const
    {33, 2037, 66, 1, Smoke::mf_property, 0, 11},	//1571 QCPItemStraightLine::setPen(const QPen&)
    {33, 2124, 66, 1, Smoke::mf_property, 0, 12},	//1572 QCPItemStraightLine::setSelectedPen(const QPen&)
    {33, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 13},	//1573 QCPItemStraightLine::selectTest(const QPointF&, bool, QVariant*) const
    {33, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 14},	//1574 QCPItemStraightLine::draw(QCPPainter*)
    {33, 356, 550, 3, Smoke::mf_const|Smoke::mf_protected, 414, 15},	//1575 QCPItemStraightLine::distToStraightLine(const QVector2D&, const QVector2D&, const QVector2D&) const
    {33, 508, 520, 3, Smoke::mf_const|Smoke::mf_protected, 146, 16},	//1576 QCPItemStraightLine::getRectClippedStraightLine(const QVector2D&, const QVector2D&, const QRect&) const
    {33, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 17},	//1577 QCPItemStraightLine::mainPen() const
    {33, 2384, 1, 1, Smoke::mf_static, 222, 18},	//1578 QCPItemStraightLine::tr(const char*)
    {33, 2388, 1, 1, Smoke::mf_static, 222, 19},	//1579 QCPItemStraightLine::trUtf8(const char*)
    {33, 1236, 48, 2, Smoke::mf_const, 414, 20},	//1580 QCPItemStraightLine::selectTest(const QPointF&, bool) const
    {33, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 21},	//1581 QCPItemStraightLine::staticMetaObject() const
    {33, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 22},	//1582 QCPItemStraightLine::mPen() const
    {33, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 23},	//1583 QCPItemStraightLine::setMPen(const QPen&)
    {33, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 24},	//1584 QCPItemStraightLine::mSelectedPen() const
    {33, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 25},	//1585 QCPItemStraightLine::setMSelectedPen(const QPen&)
    {33, 2491, 0, 0, Smoke::mf_dtor, 0, 26 },	//1586 QCPItemStraightLine::~QCPItemStraightLine()
    {34, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1587 QCPItemText::metaObject() const
    {34, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1588 QCPItemText::qt_metacast(const char*)
    {34, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1589 QCPItemText::tr(const char*, const char*)
    {34, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1590 QCPItemText::trUtf8(const char*, const char*)
    {34, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1591 QCPItemText::tr(const char*, const char*, int)
    {34, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1592 QCPItemText::trUtf8(const char*, const char*, int)
    {34, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1593 QCPItemText::qt_metacall(QMetaObject::Call, int, void**)
    {34, 68, 14, 1, Smoke::mf_ctor, 75, 8},	//1594 QCPItemText::QCPItemText(QCustomPlot*)
    {34, 294, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 9},	//1595 QCPItemText::color() const
    {34, 1248, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 10},	//1596 QCPItemText::selectedColor() const
    {34, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 11},	//1597 QCPItemText::pen() const
    {34, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 12},	//1598 QCPItemText::selectedPen() const
    {34, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 13},	//1599 QCPItemText::brush() const
    {34, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 14},	//1600 QCPItemText::selectedBrush() const
    {34, 457, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 15},	//1601 QCPItemText::font() const
    {34, 1249, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 16},	//1602 QCPItemText::selectedFont() const
    {34, 2345, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 17},	//1603 QCPItemText::text() const
    {34, 2346, 0, 0, Smoke::mf_const, 131, 18},	//1604 QCPItemText::textAlignment() const
    {34, 1184, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 19},	//1605 QCPItemText::rotation() const
    {34, 1051, 0, 0, Smoke::mf_const|Smoke::mf_property, 182, 20},	//1606 QCPItemText::padding() const
    {34, 1344, 61, 1, Smoke::mf_property, 0, 21},	//1607 QCPItemText::setColor(const QColor&)
    {34, 2112, 61, 1, Smoke::mf_property, 0, 22},	//1608 QCPItemText::setSelectedColor(const QColor&)
    {34, 2037, 66, 1, Smoke::mf_property, 0, 23},	//1609 QCPItemText::setPen(const QPen&)
    {34, 2124, 66, 1, Smoke::mf_property, 0, 24},	//1610 QCPItemText::setSelectedPen(const QPen&)
    {34, 1326, 68, 1, Smoke::mf_property, 0, 25},	//1611 QCPItemText::setBrush(const QBrush&)
    {34, 2110, 68, 1, Smoke::mf_property, 0, 26},	//1612 QCPItemText::setSelectedBrush(const QBrush&)
    {34, 1403, 59, 1, Smoke::mf_property, 0, 27},	//1613 QCPItemText::setFont(const QFont&)
    {34, 2114, 59, 1, Smoke::mf_property, 0, 28},	//1614 QCPItemText::setSelectedFont(const QFont&)
    {34, 2168, 24, 1, Smoke::mf_property, 0, 29},	//1615 QCPItemText::setText(const QString&)
    {34, 2055, 554, 1, 0, 0, 30},	//1616 QCPItemText::setPositionAlignment(QFlags<Qt::AlignmentFlag>)
    {34, 2170, 554, 1, 0, 0, 31},	//1617 QCPItemText::setTextAlignment(QFlags<Qt::AlignmentFlag>)
    {34, 2079, 99, 1, Smoke::mf_property, 0, 32},	//1618 QCPItemText::setRotation(double)
    {34, 2023, 556, 1, Smoke::mf_property, 0, 33},	//1619 QCPItemText::setPadding(const QMargins&)
    {34, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 34},	//1620 QCPItemText::selectTest(const QPointF&, bool, QVariant*) const
    {34, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//1621 QCPItemText::draw(QCPPainter*)
    {34, 174, 35, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 200, 36},	//1622 QCPItemText::anchorPixelPoint(int) const
    {34, 526, 558, 3, Smoke::mf_const|Smoke::mf_protected, 200, 37},	//1623 QCPItemText::getTextDrawPoint(const QPointF&, const QRectF&, QFlags<Qt::AlignmentFlag>) const
    {34, 933, 0, 0, Smoke::mf_const|Smoke::mf_protected, 134, 38},	//1624 QCPItemText::mainFont() const
    {34, 932, 0, 0, Smoke::mf_const|Smoke::mf_protected, 111, 39},	//1625 QCPItemText::mainColor() const
    {34, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 40},	//1626 QCPItemText::mainPen() const
    {34, 931, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 41},	//1627 QCPItemText::mainBrush() const
    {34, 2384, 1, 1, Smoke::mf_static, 222, 42},	//1628 QCPItemText::tr(const char*)
    {34, 2388, 1, 1, Smoke::mf_static, 222, 43},	//1629 QCPItemText::trUtf8(const char*)
    {34, 1236, 48, 2, Smoke::mf_const, 414, 44},	//1630 QCPItemText::selectTest(const QPointF&, bool) const
    {34, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 45},	//1631 QCPItemText::staticMetaObject() const
    {34, 733, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 46},	//1632 QCPItemText::mColor() const
    {34, 1575, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//1633 QCPItemText::setMColor(const QColor&)
    {34, 877, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 48},	//1634 QCPItemText::mSelectedColor() const
    {34, 1865, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//1635 QCPItemText::setMSelectedColor(const QColor&)
    {34, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 50},	//1636 QCPItemText::mPen() const
    {34, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//1637 QCPItemText::setMPen(const QPen&)
    {34, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 52},	//1638 QCPItemText::mSelectedPen() const
    {34, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 53},	//1639 QCPItemText::setMSelectedPen(const QPen&)
    {34, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 54},	//1640 QCPItemText::mBrush() const
    {34, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 55},	//1641 QCPItemText::setMBrush(const QBrush&)
    {34, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 56},	//1642 QCPItemText::mSelectedBrush() const
    {34, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 57},	//1643 QCPItemText::setMSelectedBrush(const QBrush&)
    {34, 760, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 58},	//1644 QCPItemText::mFont() const
    {34, 1630, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 59},	//1645 QCPItemText::setMFont(const QFont&)
    {34, 878, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 60},	//1646 QCPItemText::mSelectedFont() const
    {34, 1867, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 61},	//1647 QCPItemText::setMSelectedFont(const QFont&)
    {34, 901, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 62},	//1648 QCPItemText::mText() const
    {34, 1913, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 63},	//1649 QCPItemText::setMText(const QString&)
    {34, 845, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 131, 64},	//1650 QCPItemText::mPositionAlignment() const
    {34, 1801, 554, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 65},	//1651 QCPItemText::setMPositionAlignment(QFlags<Qt::AlignmentFlag>)
    {34, 902, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 131, 66},	//1652 QCPItemText::mTextAlignment() const
    {34, 1915, 554, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 67},	//1653 QCPItemText::setMTextAlignment(QFlags<Qt::AlignmentFlag>)
    {34, 861, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 68},	//1654 QCPItemText::mRotation() const
    {34, 1833, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 69},	//1655 QCPItemText::setMRotation(double)
    {34, 825, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 183, 70},	//1656 QCPItemText::mPadding() const
    {34, 1760, 556, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 71},	//1657 QCPItemText::setMPadding(const QMargins&)
    {34, 168, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 72},	//1658 QCPItemText::aiTopLeft (enum)
    {34, 167, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 73},	//1659 QCPItemText::aiTop (enum)
    {34, 170, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 74},	//1660 QCPItemText::aiTopRight (enum)
    {34, 166, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 75},	//1661 QCPItemText::aiRight (enum)
    {34, 162, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 76},	//1662 QCPItemText::aiBottomRight (enum)
    {34, 159, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 77},	//1663 QCPItemText::aiBottom (enum)
    {34, 160, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 78},	//1664 QCPItemText::aiBottomLeft (enum)
    {34, 165, 0, 0, Smoke::mf_static|Smoke::mf_enum, 76, 79},	//1665 QCPItemText::aiLeft (enum)
    {34, 2492, 0, 0, Smoke::mf_dtor, 0, 80 },	//1666 QCPItemText::~QCPItemText()
    {35, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1667 QCPItemTracer::metaObject() const
    {35, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1668 QCPItemTracer::qt_metacast(const char*)
    {35, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1669 QCPItemTracer::tr(const char*, const char*)
    {35, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1670 QCPItemTracer::trUtf8(const char*, const char*)
    {35, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1671 QCPItemTracer::tr(const char*, const char*, int)
    {35, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1672 QCPItemTracer::trUtf8(const char*, const char*, int)
    {35, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1673 QCPItemTracer::qt_metacall(QMetaObject::Call, int, void**)
    {35, 70, 14, 1, Smoke::mf_ctor, 77, 8},	//1674 QCPItemTracer::QCPItemTracer(QCustomPlot*)
    {35, 1064, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1675 QCPItemTracer::pen() const
    {35, 1257, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 10},	//1676 QCPItemTracer::selectedPen() const
    {35, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 11},	//1677 QCPItemTracer::brush() const
    {35, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 12},	//1678 QCPItemTracer::selectedBrush() const
    {35, 2265, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 13},	//1679 QCPItemTracer::size() const
    {35, 2330, 0, 0, Smoke::mf_const|Smoke::mf_property, 78, 14},	//1680 QCPItemTracer::style() const
    {35, 556, 0, 0, Smoke::mf_const|Smoke::mf_property, 56, 15},	//1681 QCPItemTracer::graph() const
    {35, 559, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 16},	//1682 QCPItemTracer::graphKey() const
    {35, 602, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 17},	//1683 QCPItemTracer::interpolating() const
    {35, 2037, 66, 1, Smoke::mf_property, 0, 18},	//1684 QCPItemTracer::setPen(const QPen&)
    {35, 2124, 66, 1, Smoke::mf_property, 0, 19},	//1685 QCPItemTracer::setSelectedPen(const QPen&)
    {35, 1326, 68, 1, Smoke::mf_property, 0, 20},	//1686 QCPItemTracer::setBrush(const QBrush&)
    {35, 2110, 68, 1, Smoke::mf_property, 0, 21},	//1687 QCPItemTracer::setSelectedBrush(const QBrush&)
    {35, 2140, 99, 1, Smoke::mf_property, 0, 22},	//1688 QCPItemTracer::setSize(double)
    {35, 2147, 562, 1, Smoke::mf_property, 0, 23},	//1689 QCPItemTracer::setStyle(QCPItemTracer::TracerStyle)
    {35, 1407, 457, 1, Smoke::mf_property, 0, 24},	//1690 QCPItemTracer::setGraph(QCPGraph*)
    {35, 1409, 99, 1, Smoke::mf_property, 0, 25},	//1691 QCPItemTracer::setGraphKey(double)
    {35, 1435, 16, 1, Smoke::mf_property, 0, 26},	//1692 QCPItemTracer::setInterpolating(bool)
    {35, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 27},	//1693 QCPItemTracer::selectTest(const QPointF&, bool, QVariant*) const
    {35, 2418, 0, 0, 0, 0, 28},	//1694 QCPItemTracer::updatePosition()
    {35, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 29},	//1695 QCPItemTracer::draw(QCPPainter*)
    {35, 934, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 30},	//1696 QCPItemTracer::mainPen() const
    {35, 931, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 31},	//1697 QCPItemTracer::mainBrush() const
    {35, 2384, 1, 1, Smoke::mf_static, 222, 32},	//1698 QCPItemTracer::tr(const char*)
    {35, 2388, 1, 1, Smoke::mf_static, 222, 33},	//1699 QCPItemTracer::trUtf8(const char*)
    {35, 1236, 48, 2, Smoke::mf_const, 414, 34},	//1700 QCPItemTracer::selectTest(const QPointF&, bool) const
    {35, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 35},	//1701 QCPItemTracer::staticMetaObject() const
    {35, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 36},	//1702 QCPItemTracer::mPen() const
    {35, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 37},	//1703 QCPItemTracer::setMPen(const QPen&)
    {35, 883, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 38},	//1704 QCPItemTracer::mSelectedPen() const
    {35, 1877, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//1705 QCPItemTracer::setMSelectedPen(const QPen&)
    {35, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 40},	//1706 QCPItemTracer::mBrush() const
    {35, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//1707 QCPItemTracer::setMBrush(const QBrush&)
    {35, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 42},	//1708 QCPItemTracer::mSelectedBrush() const
    {35, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//1709 QCPItemTracer::setMSelectedBrush(const QBrush&)
    {35, 891, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 44},	//1710 QCPItemTracer::mSize() const
    {35, 1893, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//1711 QCPItemTracer::setMSize(double)
    {35, 894, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 78, 46},	//1712 QCPItemTracer::mStyle() const
    {35, 1899, 562, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//1713 QCPItemTracer::setMStyle(QCPItemTracer::TracerStyle)
    {35, 762, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 56, 48},	//1714 QCPItemTracer::mGraph() const
    {35, 1634, 457, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 49},	//1715 QCPItemTracer::setMGraph(QCPGraph*)
    {35, 763, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 50},	//1716 QCPItemTracer::mGraphKey() const
    {35, 1636, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 51},	//1717 QCPItemTracer::setMGraphKey(double)
    {35, 778, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 52},	//1718 QCPItemTracer::mInterpolating() const
    {35, 1666, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 53},	//1719 QCPItemTracer::setMInterpolating(bool)
    {35, 2395, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 54},	//1720 QCPItemTracer::tsNone (enum)
    {35, 2396, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 55},	//1721 QCPItemTracer::tsPlus (enum)
    {35, 2394, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 56},	//1722 QCPItemTracer::tsCrosshair (enum)
    {35, 2393, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 57},	//1723 QCPItemTracer::tsCircle (enum)
    {35, 2397, 0, 0, Smoke::mf_static|Smoke::mf_enum, 78, 58},	//1724 QCPItemTracer::tsSquare (enum)
    {35, 2493, 0, 0, Smoke::mf_dtor, 0, 59 },	//1725 QCPItemTracer::~QCPItemTracer()
    {36, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1726 QCPLayer::metaObject() const
    {36, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1727 QCPLayer::qt_metacast(const char*)
    {36, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1728 QCPLayer::tr(const char*, const char*)
    {36, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1729 QCPLayer::trUtf8(const char*, const char*)
    {36, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1730 QCPLayer::tr(const char*, const char*, int)
    {36, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1731 QCPLayer::trUtf8(const char*, const char*, int)
    {36, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1732 QCPLayer::qt_metacall(QMetaObject::Call, int, void**)
    {36, 72, 564, 2, Smoke::mf_ctor, 79, 8},	//1733 QCPLayer::QCPLayer(QCustomPlot*, const QString&)
    {36, 1061, 0, 0, Smoke::mf_const|Smoke::mf_property, 114, 9},	//1734 QCPLayer::parentPlot() const
    {36, 1000, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 10},	//1735 QCPLayer::name() const
    {36, 582, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 11},	//1736 QCPLayer::index() const
    {36, 280, 0, 0, Smoke::mf_const|Smoke::mf_property, 164, 12},	//1737 QCPLayer::children() const
    {36, 2442, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 13},	//1738 QCPLayer::visible() const
    {36, 2235, 16, 1, Smoke::mf_property, 0, 14},	//1739 QCPLayer::setVisible(bool)
    {36, 122, 567, 2, Smoke::mf_protected, 0, 15},	//1740 QCPLayer::addChild(QCPLayerable*, bool)
    {36, 1134, 570, 1, Smoke::mf_protected, 0, 16},	//1741 QCPLayer::removeChild(QCPLayerable*)
    {36, 2384, 1, 1, Smoke::mf_static, 222, 17},	//1742 QCPLayer::tr(const char*)
    {36, 2388, 1, 1, Smoke::mf_static, 222, 18},	//1743 QCPLayer::trUtf8(const char*)
    {36, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 19},	//1744 QCPLayer::staticMetaObject() const
    {36, 834, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 114, 20},	//1745 QCPLayer::mParentPlot() const
    {36, 1779, 14, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 21},	//1746 QCPLayer::setMParentPlot(QCustomPlot*)
    {36, 814, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 22},	//1747 QCPLayer::mName() const
    {36, 1738, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 23},	//1748 QCPLayer::setMName(const QString&)
    {36, 771, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 24},	//1749 QCPLayer::mIndex() const
    {36, 1652, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 25},	//1750 QCPLayer::setMIndex(int)
    {36, 728, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 165, 26},	//1751 QCPLayer::mChildren() const
    {36, 1565, 572, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 27},	//1752 QCPLayer::setMChildren(const QList<QCPLayerable*>&)
    {36, 924, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 28},	//1753 QCPLayer::mVisible() const
    {36, 1959, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1754 QCPLayer::setMVisible(bool)
    {36, 2494, 0, 0, Smoke::mf_dtor, 0, 30 },	//1755 QCPLayer::~QCPLayer()
    {37, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1756 QCPLayerable::metaObject() const
    {37, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1757 QCPLayerable::qt_metacast(const char*)
    {37, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1758 QCPLayerable::tr(const char*, const char*)
    {37, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1759 QCPLayerable::trUtf8(const char*, const char*)
    {37, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1760 QCPLayerable::tr(const char*, const char*, int)
    {37, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1761 QCPLayerable::trUtf8(const char*, const char*, int)
    {37, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1762 QCPLayerable::qt_metacall(QMetaObject::Call, int, void**)
    {37, 74, 574, 3, Smoke::mf_ctor, 81, 8},	//1763 QCPLayerable::QCPLayerable(QCustomPlot*, QString, QCPLayerable*)
    {37, 2442, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 9},	//1764 QCPLayerable::visible() const
    {37, 1061, 0, 0, Smoke::mf_const|Smoke::mf_property, 114, 10},	//1765 QCPLayerable::parentPlot() const
    {37, 1059, 0, 0, Smoke::mf_const|Smoke::mf_property, 81, 11},	//1766 QCPLayerable::parentLayerable() const
    {37, 637, 0, 0, Smoke::mf_const|Smoke::mf_property, 79, 12},	//1767 QCPLayerable::layer() const
    {37, 177, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 13},	//1768 QCPLayerable::antialiased() const
    {37, 2235, 16, 1, Smoke::mf_property, 0, 14},	//1769 QCPLayerable::setVisible(bool)
    {37, 1459, 578, 1, Smoke::mf_property, 318, 15},	//1770 QCPLayerable::setLayer(QCPLayer*)
    {37, 1459, 24, 1, 0, 318, 16},	//1771 QCPLayerable::setLayer(const QString&)
    {37, 1271, 16, 1, Smoke::mf_property, 0, 17},	//1772 QCPLayerable::setAntialiased(bool)
    {37, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 18},	//1773 QCPLayerable::selectTest(const QPointF&, bool, QVariant*) const
    {37, 1119, 0, 0, Smoke::mf_const, 318, 19},	//1774 QCPLayerable::realVisibility() const
    {37, 639, 578, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 20},	//1775 QCPLayerable::layerChanged(QCPLayer*)
    {37, 1062, 14, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 21},	//1776 QCPLayerable::parentPlotInitialized(QCustomPlot*)
    {37, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 22},	//1777 QCPLayerable::selectionCategory() const
    {37, 290, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 211, 23},	//1778 QCPLayerable::clipRect() const
    {37, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 24},	//1779 QCPLayerable::applyDefaultAntialiasingHint(QCPPainter*) const [pure virtual]
    {37, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual|Smoke::mf_purevirtual, 0, 25},	//1780 QCPLayerable::draw(QCPPainter*) [pure virtual]
    {37, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 26},	//1781 QCPLayerable::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {37, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 27},	//1782 QCPLayerable::deselectEvent(bool*)
    {37, 583, 14, 1, Smoke::mf_protected, 0, 28},	//1783 QCPLayerable::initializeParentPlot(QCustomPlot*)
    {37, 2035, 570, 1, Smoke::mf_protected, 0, 29},	//1784 QCPLayerable::setParentLayerable(QCPLayerable*)
    {37, 997, 580, 2, Smoke::mf_protected, 318, 30},	//1785 QCPLayerable::moveToLayer(QCPLayer*, bool)
    {37, 187, 583, 3, Smoke::mf_const|Smoke::mf_protected, 0, 31},	//1786 QCPLayerable::applyAntialiasingHint(QCPPainter*, bool, QCP::AntialiasedElement) const
    {37, 2384, 1, 1, Smoke::mf_static, 222, 32},	//1787 QCPLayerable::tr(const char*)
    {37, 2388, 1, 1, Smoke::mf_static, 222, 33},	//1788 QCPLayerable::trUtf8(const char*)
    {37, 74, 14, 1, Smoke::mf_ctor, 81, 34},	//1789 QCPLayerable::QCPLayerable(QCustomPlot*)
    {37, 74, 587, 2, Smoke::mf_ctor, 81, 35},	//1790 QCPLayerable::QCPLayerable(QCustomPlot*, QString)
    {37, 1236, 48, 2, Smoke::mf_const, 414, 36},	//1791 QCPLayerable::selectTest(const QPointF&, bool) const
    {37, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 37},	//1792 QCPLayerable::staticMetaObject() const
    {37, 924, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 38},	//1793 QCPLayerable::mVisible() const
    {37, 1959, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//1794 QCPLayerable::setMVisible(bool)
    {37, 834, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 114, 40},	//1795 QCPLayerable::mParentPlot() const
    {37, 1779, 14, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//1796 QCPLayerable::setMParentPlot(QCustomPlot*)
    {37, 831, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 208, 42},	//1797 QCPLayerable::mParentLayerable() const
    {37, 1773, 590, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//1798 QCPLayerable::setMParentLayerable(const QPointer<QCPLayerable>&)
    {37, 790, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 79, 44},	//1799 QCPLayerable::mLayer() const
    {37, 1690, 578, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 45},	//1800 QCPLayerable::setMLayer(QCPLayer*)
    {37, 689, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 46},	//1801 QCPLayerable::mAntialiased() const
    {37, 1486, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 47},	//1802 QCPLayerable::setMAntialiased(bool)
    {37, 2495, 0, 0, Smoke::mf_dtor, 0, 48 },	//1803 QCPLayerable::~QCPLayerable()
    {38, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1804 QCPLayout::metaObject() const
    {38, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1805 QCPLayout::qt_metacast(const char*)
    {38, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1806 QCPLayout::tr(const char*, const char*)
    {38, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1807 QCPLayout::trUtf8(const char*, const char*)
    {38, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1808 QCPLayout::tr(const char*, const char*, int)
    {38, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1809 QCPLayout::trUtf8(const char*, const char*, int)
    {38, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1810 QCPLayout::qt_metacall(QMetaObject::Call, int, void**)
    {38, 78, 0, 0, Smoke::mf_ctor, 82, 8},	//1811 QCPLayout::QCPLayout()
    {38, 2407, 176, 1, Smoke::mf_virtual, 0, 9},	//1812 QCPLayout::update(QCPLayoutElement::UpdatePhase)
    {38, 408, 16, 1, Smoke::mf_const|Smoke::mf_virtual, 166, 10},	//1813 QCPLayout::elements(bool) const
    {38, 407, 0, 0, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 417, 11},	//1814 QCPLayout::elementCount() const [pure virtual]
    {38, 405, 35, 1, Smoke::mf_const|Smoke::mf_virtual|Smoke::mf_purevirtual, 84, 12},	//1815 QCPLayout::elementAt(int) const [pure virtual]
    {38, 2343, 35, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 84, 13},	//1816 QCPLayout::takeAt(int) [pure virtual]
    {38, 2341, 592, 1, Smoke::mf_virtual|Smoke::mf_purevirtual, 318, 14},	//1817 QCPLayout::take(QCPLayoutElement*) [pure virtual]
    {38, 2264, 0, 0, Smoke::mf_virtual, 0, 15},	//1818 QCPLayout::simplify()
    {38, 1130, 35, 1, 0, 318, 16},	//1819 QCPLayout::removeAt(int)
    {38, 1128, 592, 1, 0, 318, 17},	//1820 QCPLayout::remove(QCPLayoutElement*)
    {38, 283, 0, 0, 0, 0, 18},	//1821 QCPLayout::clear()
    {38, 2413, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 19},	//1822 QCPLayout::updateLayout()
    {38, 2266, 0, 0, Smoke::mf_const|Smoke::mf_protected, 0, 20},	//1823 QCPLayout::sizeConstraintsChanged() const
    {38, 156, 592, 1, Smoke::mf_protected, 0, 21},	//1824 QCPLayout::adoptElement(QCPLayoutElement*)
    {38, 1126, 592, 1, Smoke::mf_protected, 0, 22},	//1825 QCPLayout::releaseElement(QCPLayoutElement*)
    {38, 514, 594, 4, Smoke::mf_const|Smoke::mf_protected, 240, 23},	//1826 QCPLayout::getSectionSizes(QVector<int>, QVector<int>, QVector<double>, int) const
    {38, 2384, 1, 1, Smoke::mf_static, 222, 24},	//1827 QCPLayout::tr(const char*)
    {38, 2388, 1, 1, Smoke::mf_static, 222, 25},	//1828 QCPLayout::trUtf8(const char*)
    {38, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 26},	//1829 QCPLayout::staticMetaObject() const
    {38, 2496, 0, 0, Smoke::mf_dtor, 0, 27 },	//1830 QCPLayout::~QCPLayout()
    {39, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1831 QCPLayoutElement::metaObject() const
    {39, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1832 QCPLayoutElement::qt_metacast(const char*)
    {39, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1833 QCPLayoutElement::tr(const char*, const char*)
    {39, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1834 QCPLayoutElement::trUtf8(const char*, const char*)
    {39, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1835 QCPLayoutElement::tr(const char*, const char*, int)
    {39, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1836 QCPLayoutElement::trUtf8(const char*, const char*, int)
    {39, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1837 QCPLayoutElement::qt_metacall(QMetaObject::Call, int, void**)
    {39, 79, 14, 1, Smoke::mf_ctor, 84, 8},	//1838 QCPLayoutElement::QCPLayoutElement(QCustomPlot*)
    {39, 645, 0, 0, Smoke::mf_const|Smoke::mf_property, 82, 9},	//1839 QCPLayoutElement::layout() const
    {39, 1121, 0, 0, Smoke::mf_const|Smoke::mf_property, 211, 10},	//1840 QCPLayoutElement::rect() const
    {39, 1048, 0, 0, Smoke::mf_const|Smoke::mf_property, 211, 11},	//1841 QCPLayoutElement::outerRect() const
    {39, 942, 0, 0, Smoke::mf_const|Smoke::mf_property, 182, 12},	//1842 QCPLayoutElement::margins() const
    {39, 965, 0, 0, Smoke::mf_const|Smoke::mf_property, 182, 13},	//1843 QCPLayoutElement::minimumMargins() const
    {39, 205, 0, 0, Smoke::mf_const, 125, 14},	//1844 QCPLayoutElement::autoMargins() const
    {39, 966, 0, 0, Smoke::mf_const|Smoke::mf_property, 219, 15},	//1845 QCPLayoutElement::minimumSize() const
    {39, 945, 0, 0, Smoke::mf_const|Smoke::mf_property, 219, 16},	//1846 QCPLayoutElement::maximumSize() const
    {39, 937, 129, 1, Smoke::mf_const, 96, 17},	//1847 QCPLayoutElement::marginGroup(QCP::MarginSide) const
    {39, 939, 0, 0, Smoke::mf_const, 136, 18},	//1848 QCPLayoutElement::marginGroups() const
    {39, 2017, 599, 1, Smoke::mf_property, 0, 19},	//1849 QCPLayoutElement::setOuterRect(const QRect&)
    {39, 1975, 556, 1, Smoke::mf_property, 0, 20},	//1850 QCPLayoutElement::setMargins(const QMargins&)
    {39, 1988, 556, 1, Smoke::mf_property, 0, 21},	//1851 QCPLayoutElement::setMinimumMargins(const QMargins&)
    {39, 1292, 601, 1, 0, 0, 22},	//1852 QCPLayoutElement::setAutoMargins(QFlags<QCP::MarginSide>)
    {39, 1990, 603, 1, Smoke::mf_property, 0, 23},	//1853 QCPLayoutElement::setMinimumSize(const QSize&)
    {39, 1990, 117, 2, 0, 0, 24},	//1854 QCPLayoutElement::setMinimumSize(int, int)
    {39, 1979, 603, 1, Smoke::mf_property, 0, 25},	//1855 QCPLayoutElement::setMaximumSize(const QSize&)
    {39, 1979, 117, 2, 0, 0, 26},	//1856 QCPLayoutElement::setMaximumSize(int, int)
    {39, 1973, 605, 2, 0, 0, 27},	//1857 QCPLayoutElement::setMarginGroup(QFlags<QCP::MarginSide>, QCPMarginGroup*)
    {39, 2407, 176, 1, Smoke::mf_virtual, 0, 28},	//1858 QCPLayoutElement::update(QCPLayoutElement::UpdatePhase)
    {39, 967, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 219, 29},	//1859 QCPLayoutElement::minimumSizeHint() const
    {39, 946, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 219, 30},	//1860 QCPLayoutElement::maximumSizeHint() const
    {39, 408, 16, 1, Smoke::mf_const|Smoke::mf_virtual, 166, 31},	//1861 QCPLayoutElement::elements(bool) const
    {39, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 32},	//1862 QCPLayoutElement::selectTest(const QPointF&, bool, QVariant*) const
    {39, 263, 129, 1, Smoke::mf_protected|Smoke::mf_virtual, 417, 33},	//1863 QCPLayoutElement::calculateAutoMargin(QCP::MarginSide)
    {39, 979, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 34},	//1864 QCPLayoutElement::mousePressEvent(QMouseEvent*)
    {39, 975, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 35},	//1865 QCPLayoutElement::mouseMoveEvent(QMouseEvent*)
    {39, 983, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 36},	//1866 QCPLayoutElement::mouseReleaseEvent(QMouseEvent*)
    {39, 971, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 37},	//1867 QCPLayoutElement::mouseDoubleClickEvent(QMouseEvent*)
    {39, 2445, 180, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 38},	//1868 QCPLayoutElement::wheelEvent(QWheelEvent*)
    {39, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 39},	//1869 QCPLayoutElement::applyDefaultAntialiasingHint(QCPPainter*) const
    {39, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 40},	//1870 QCPLayoutElement::draw(QCPPainter*)
    {39, 1062, 14, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 41},	//1871 QCPLayoutElement::parentPlotInitialized(QCustomPlot*)
    {39, 2384, 1, 1, Smoke::mf_static, 222, 42},	//1872 QCPLayoutElement::tr(const char*)
    {39, 2388, 1, 1, Smoke::mf_static, 222, 43},	//1873 QCPLayoutElement::trUtf8(const char*)
    {39, 79, 0, 0, Smoke::mf_ctor, 84, 44},	//1874 QCPLayoutElement::QCPLayoutElement()
    {39, 1236, 48, 2, Smoke::mf_const, 414, 45},	//1875 QCPLayoutElement::selectTest(const QPointF&, bool) const
    {39, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 46},	//1876 QCPLayoutElement::staticMetaObject() const
    {39, 832, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 82, 47},	//1877 QCPLayoutElement::mParentLayout() const
    {39, 1775, 608, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 48},	//1878 QCPLayoutElement::setMParentLayout(QCPLayout*)
    {39, 809, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 220, 49},	//1879 QCPLayoutElement::mMinimumSize() const
    {39, 1728, 603, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 50},	//1880 QCPLayoutElement::setMMinimumSize(const QSize&)
    {39, 804, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 220, 51},	//1881 QCPLayoutElement::mMaximumSize() const
    {39, 1718, 603, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 52},	//1882 QCPLayoutElement::setMMaximumSize(const QSize&)
    {39, 859, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 212, 53},	//1883 QCPLayoutElement::mRect() const
    {39, 1829, 599, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 54},	//1884 QCPLayoutElement::setMRect(const QRect&)
    {39, 822, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 212, 55},	//1885 QCPLayoutElement::mOuterRect() const
    {39, 1754, 599, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 56},	//1886 QCPLayoutElement::setMOuterRect(const QRect&)
    {39, 802, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 183, 57},	//1887 QCPLayoutElement::mMargins() const
    {39, 1714, 556, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 58},	//1888 QCPLayoutElement::setMMargins(const QMargins&)
    {39, 808, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 183, 59},	//1889 QCPLayoutElement::mMinimumMargins() const
    {39, 1726, 556, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 60},	//1890 QCPLayoutElement::setMMinimumMargins(const QMargins&)
    {39, 699, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 125, 61},	//1891 QCPLayoutElement::mAutoMargins() const
    {39, 1506, 601, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 62},	//1892 QCPLayoutElement::setMAutoMargins(QFlags<QCP::MarginSide>)
    {39, 801, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 137, 63},	//1893 QCPLayoutElement::mMarginGroups() const
    {39, 1712, 610, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 64},	//1894 QCPLayoutElement::setMMarginGroups(const QHash<QCP::MarginSide,QCPMarginGroup*>&)
    {39, 2406, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 65},	//1895 QCPLayoutElement::upPreparation (enum)
    {39, 2405, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 66},	//1896 QCPLayoutElement::upMargins (enum)
    {39, 2404, 0, 0, Smoke::mf_static|Smoke::mf_enum, 85, 67},	//1897 QCPLayoutElement::upLayout (enum)
    {39, 2497, 0, 0, Smoke::mf_dtor, 0, 68 },	//1898 QCPLayoutElement::~QCPLayoutElement()
    {40, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1899 QCPLayoutGrid::metaObject() const
    {40, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1900 QCPLayoutGrid::qt_metacast(const char*)
    {40, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1901 QCPLayoutGrid::tr(const char*, const char*)
    {40, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1902 QCPLayoutGrid::trUtf8(const char*, const char*)
    {40, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1903 QCPLayoutGrid::tr(const char*, const char*, int)
    {40, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1904 QCPLayoutGrid::trUtf8(const char*, const char*, int)
    {40, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1905 QCPLayoutGrid::qt_metacall(QMetaObject::Call, int, void**)
    {40, 81, 0, 0, Smoke::mf_ctor, 86, 8},	//1906 QCPLayoutGrid::QCPLayoutGrid()
    {40, 1185, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 9},	//1907 QCPLayoutGrid::rowCount() const
    {40, 305, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 10},	//1908 QCPLayoutGrid::columnCount() const
    {40, 307, 0, 0, Smoke::mf_const|Smoke::mf_property, 173, 11},	//1909 QCPLayoutGrid::columnStretchFactors() const
    {40, 1187, 0, 0, Smoke::mf_const|Smoke::mf_property, 173, 12},	//1910 QCPLayoutGrid::rowStretchFactors() const
    {40, 306, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 13},	//1911 QCPLayoutGrid::columnSpacing() const
    {40, 1186, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 14},	//1912 QCPLayoutGrid::rowSpacing() const
    {40, 1356, 612, 2, 0, 0, 15},	//1913 QCPLayoutGrid::setColumnStretchFactor(int, double)
    {40, 1358, 615, 1, Smoke::mf_property, 0, 16},	//1914 QCPLayoutGrid::setColumnStretchFactors(const QList<double>&)
    {40, 2083, 612, 2, 0, 0, 17},	//1915 QCPLayoutGrid::setRowStretchFactor(int, double)
    {40, 2085, 615, 1, Smoke::mf_property, 0, 18},	//1916 QCPLayoutGrid::setRowStretchFactors(const QList<double>&)
    {40, 1354, 35, 1, Smoke::mf_property, 0, 19},	//1917 QCPLayoutGrid::setColumnSpacing(int)
    {40, 2081, 35, 1, Smoke::mf_property, 0, 20},	//1918 QCPLayoutGrid::setRowSpacing(int)
    {40, 2413, 0, 0, Smoke::mf_virtual, 0, 21},	//1919 QCPLayoutGrid::updateLayout()
    {40, 407, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 417, 22},	//1920 QCPLayoutGrid::elementCount() const
    {40, 405, 35, 1, Smoke::mf_const|Smoke::mf_virtual, 84, 23},	//1921 QCPLayoutGrid::elementAt(int) const
    {40, 2343, 35, 1, Smoke::mf_virtual, 84, 24},	//1922 QCPLayoutGrid::takeAt(int)
    {40, 2341, 592, 1, Smoke::mf_virtual, 318, 25},	//1923 QCPLayoutGrid::take(QCPLayoutElement*)
    {40, 408, 16, 1, Smoke::mf_const|Smoke::mf_virtual, 166, 26},	//1924 QCPLayoutGrid::elements(bool) const
    {40, 2264, 0, 0, Smoke::mf_virtual, 0, 27},	//1925 QCPLayoutGrid::simplify()
    {40, 967, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 219, 28},	//1926 QCPLayoutGrid::minimumSizeHint() const
    {40, 946, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 219, 29},	//1927 QCPLayoutGrid::maximumSizeHint() const
    {40, 403, 117, 2, Smoke::mf_const, 84, 30},	//1928 QCPLayoutGrid::element(int, int) const
    {40, 138, 617, 3, 0, 318, 31},	//1929 QCPLayoutGrid::addElement(int, int, QCPLayoutElement*)
    {40, 564, 117, 2, 0, 318, 32},	//1930 QCPLayoutGrid::hasElement(int, int)
    {40, 436, 117, 2, 0, 0, 33},	//1931 QCPLayoutGrid::expandTo(int, int)
    {40, 591, 35, 1, 0, 0, 34},	//1932 QCPLayoutGrid::insertRow(int)
    {40, 589, 35, 1, 0, 0, 35},	//1933 QCPLayoutGrid::insertColumn(int)
    {40, 490, 621, 2, Smoke::mf_const|Smoke::mf_protected, 0, 36},	//1934 QCPLayoutGrid::getMinimumRowColSizes(QVector<int>*, QVector<int>*) const
    {40, 488, 621, 2, Smoke::mf_const|Smoke::mf_protected, 0, 37},	//1935 QCPLayoutGrid::getMaximumRowColSizes(QVector<int>*, QVector<int>*) const
    {40, 2384, 1, 1, Smoke::mf_static, 222, 38},	//1936 QCPLayoutGrid::tr(const char*)
    {40, 2388, 1, 1, Smoke::mf_static, 222, 39},	//1937 QCPLayoutGrid::trUtf8(const char*)
    {40, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 40},	//1938 QCPLayoutGrid::staticMetaObject() const
    {40, 755, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 171, 41},	//1939 QCPLayoutGrid::mElements() const
    {40, 1620, 624, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 42},	//1940 QCPLayoutGrid::setMElements(const QList<QList<QCPLayoutElement*> >&)
    {40, 741, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 174, 43},	//1941 QCPLayoutGrid::mColumnStretchFactors() const
    {40, 1591, 615, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 44},	//1942 QCPLayoutGrid::setMColumnStretchFactors(const QList<double>&)
    {40, 863, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 174, 45},	//1943 QCPLayoutGrid::mRowStretchFactors() const
    {40, 1837, 615, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 46},	//1944 QCPLayoutGrid::setMRowStretchFactors(const QList<double>&)
    {40, 740, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 47},	//1945 QCPLayoutGrid::mColumnSpacing() const
    {40, 1589, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 48},	//1946 QCPLayoutGrid::setMColumnSpacing(int)
    {40, 862, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 49},	//1947 QCPLayoutGrid::mRowSpacing() const
    {40, 1835, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 50},	//1948 QCPLayoutGrid::setMRowSpacing(int)
    {40, 2498, 0, 0, Smoke::mf_dtor, 0, 51 },	//1949 QCPLayoutGrid::~QCPLayoutGrid()
    {41, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1950 QCPLayoutInset::metaObject() const
    {41, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1951 QCPLayoutInset::qt_metacast(const char*)
    {41, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1952 QCPLayoutInset::tr(const char*, const char*)
    {41, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1953 QCPLayoutInset::trUtf8(const char*, const char*)
    {41, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1954 QCPLayoutInset::tr(const char*, const char*, int)
    {41, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1955 QCPLayoutInset::trUtf8(const char*, const char*, int)
    {41, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1956 QCPLayoutInset::qt_metacall(QMetaObject::Call, int, void**)
    {41, 82, 0, 0, Smoke::mf_ctor, 87, 8},	//1957 QCPLayoutInset::QCPLayoutInset()
    {41, 596, 35, 1, Smoke::mf_const, 88, 9},	//1958 QCPLayoutInset::insetPlacement(int) const
    {41, 593, 35, 1, Smoke::mf_const, 131, 10},	//1959 QCPLayoutInset::insetAlignment(int) const
    {41, 598, 35, 1, Smoke::mf_const, 213, 11},	//1960 QCPLayoutInset::insetRect(int) const
    {41, 1424, 626, 2, 0, 0, 12},	//1961 QCPLayoutInset::setInsetPlacement(int, QCPLayoutInset::InsetPlacement)
    {41, 1422, 629, 2, 0, 0, 13},	//1962 QCPLayoutInset::setInsetAlignment(int, QFlags<Qt::AlignmentFlag>)
    {41, 1426, 632, 2, 0, 0, 14},	//1963 QCPLayoutInset::setInsetRect(int, const QRectF&)
    {41, 2413, 0, 0, Smoke::mf_virtual, 0, 15},	//1964 QCPLayoutInset::updateLayout()
    {41, 407, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 417, 16},	//1965 QCPLayoutInset::elementCount() const
    {41, 405, 35, 1, Smoke::mf_const|Smoke::mf_virtual, 84, 17},	//1966 QCPLayoutInset::elementAt(int) const
    {41, 2343, 35, 1, Smoke::mf_virtual, 84, 18},	//1967 QCPLayoutInset::takeAt(int)
    {41, 2341, 592, 1, Smoke::mf_virtual, 318, 19},	//1968 QCPLayoutInset::take(QCPLayoutElement*)
    {41, 2264, 0, 0, Smoke::mf_virtual, 0, 20},	//1969 QCPLayoutInset::simplify()
    {41, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 21},	//1970 QCPLayoutInset::selectTest(const QPointF&, bool, QVariant*) const
    {41, 138, 635, 2, 0, 0, 22},	//1971 QCPLayoutInset::addElement(QCPLayoutElement*, QFlags<Qt::AlignmentFlag>)
    {41, 138, 638, 2, 0, 0, 23},	//1972 QCPLayoutInset::addElement(QCPLayoutElement*, const QRectF&)
    {41, 2384, 1, 1, Smoke::mf_static, 222, 24},	//1973 QCPLayoutInset::tr(const char*)
    {41, 2388, 1, 1, Smoke::mf_static, 222, 25},	//1974 QCPLayoutInset::trUtf8(const char*)
    {41, 1236, 48, 2, Smoke::mf_const, 414, 26},	//1975 QCPLayoutInset::selectTest(const QPointF&, bool) const
    {41, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 27},	//1976 QCPLayoutInset::staticMetaObject() const
    {41, 755, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 167, 28},	//1977 QCPLayoutInset::mElements() const
    {41, 1620, 641, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 29},	//1978 QCPLayoutInset::setMElements(const QList<QCPLayoutElement*>&)
    {41, 774, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 168, 30},	//1979 QCPLayoutInset::mInsetPlacement() const
    {41, 1658, 643, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//1980 QCPLayoutInset::setMInsetPlacement(const QList<QCPLayoutInset::InsetPlacement>&)
    {41, 772, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 170, 32},	//1981 QCPLayoutInset::mInsetAlignment() const
    {41, 1654, 645, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//1982 QCPLayoutInset::setMInsetAlignment(const QList<QFlags<Qt::AlignmentFlag> >&)
    {41, 775, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 172, 34},	//1983 QCPLayoutInset::mInsetRect() const
    {41, 1660, 647, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 35},	//1984 QCPLayoutInset::setMInsetRect(const QList<QRectF>&)
    {41, 605, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 36},	//1985 QCPLayoutInset::ipFree (enum)
    {41, 604, 0, 0, Smoke::mf_static|Smoke::mf_enum, 88, 37},	//1986 QCPLayoutInset::ipBorderAligned (enum)
    {41, 2499, 0, 0, Smoke::mf_dtor, 0, 38 },	//1987 QCPLayoutInset::~QCPLayoutInset()
    {42, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//1988 QCPLegend::metaObject() const
    {42, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//1989 QCPLegend::qt_metacast(const char*)
    {42, 2384, 3, 2, Smoke::mf_static, 222, 3},	//1990 QCPLegend::tr(const char*, const char*)
    {42, 2388, 3, 2, Smoke::mf_static, 222, 4},	//1991 QCPLegend::trUtf8(const char*, const char*)
    {42, 2384, 6, 3, Smoke::mf_static, 222, 5},	//1992 QCPLegend::tr(const char*, const char*, int)
    {42, 2388, 6, 3, Smoke::mf_static, 222, 6},	//1993 QCPLegend::trUtf8(const char*, const char*, int)
    {42, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//1994 QCPLegend::qt_metacall(QMetaObject::Call, int, void**)
    {42, 83, 0, 0, Smoke::mf_ctor, 89, 8},	//1995 QCPLegend::QCPLegend()
    {42, 251, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 9},	//1996 QCPLegend::borderPen() const
    {42, 256, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 10},	//1997 QCPLegend::brush() const
    {42, 457, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 11},	//1998 QCPLegend::font() const
    {42, 2347, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 12},	//1999 QCPLegend::textColor() const
    {42, 580, 0, 0, Smoke::mf_const|Smoke::mf_property, 219, 13},	//2000 QCPLegend::iconSize() const
    {42, 581, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 14},	//2001 QCPLegend::iconTextPadding() const
    {42, 579, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 15},	//2002 QCPLegend::iconBorderPen() const
    {42, 1242, 0, 0, Smoke::mf_const, 129, 16},	//2003 QCPLegend::selectableParts() const
    {42, 1256, 0, 0, Smoke::mf_const, 129, 17},	//2004 QCPLegend::selectedParts() const
    {42, 1246, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 18},	//2005 QCPLegend::selectedBorderPen() const
    {42, 1251, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 19},	//2006 QCPLegend::selectedIconBorderPen() const
    {42, 1247, 0, 0, Smoke::mf_const|Smoke::mf_property, 3, 20},	//2007 QCPLegend::selectedBrush() const
    {42, 1249, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 21},	//2008 QCPLegend::selectedFont() const
    {42, 1260, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 22},	//2009 QCPLegend::selectedTextColor() const
    {42, 1324, 66, 1, Smoke::mf_property, 0, 23},	//2010 QCPLegend::setBorderPen(const QPen&)
    {42, 1326, 68, 1, Smoke::mf_property, 0, 24},	//2011 QCPLegend::setBrush(const QBrush&)
    {42, 1403, 59, 1, Smoke::mf_property, 0, 25},	//2012 QCPLegend::setFont(const QFont&)
    {42, 2172, 61, 1, Smoke::mf_property, 0, 26},	//2013 QCPLegend::setTextColor(const QColor&)
    {42, 1417, 603, 1, Smoke::mf_property, 0, 27},	//2014 QCPLegend::setIconSize(const QSize&)
    {42, 1417, 117, 2, 0, 0, 28},	//2015 QCPLegend::setIconSize(int, int)
    {42, 1420, 35, 1, Smoke::mf_property, 0, 29},	//2016 QCPLegend::setIconTextPadding(int)
    {42, 1415, 66, 1, Smoke::mf_property, 0, 30},	//2017 QCPLegend::setIconBorderPen(const QPen&)
    {42, 2102, 649, 1, 0, 0, 31},	//2018 QCPLegend::setSelectableParts(const QFlags<QCPLegend::SelectablePart>&)
    {42, 2122, 649, 1, 0, 0, 32},	//2019 QCPLegend::setSelectedParts(const QFlags<QCPLegend::SelectablePart>&)
    {42, 2108, 66, 1, Smoke::mf_property, 0, 33},	//2020 QCPLegend::setSelectedBorderPen(const QPen&)
    {42, 2116, 66, 1, Smoke::mf_property, 0, 34},	//2021 QCPLegend::setSelectedIconBorderPen(const QPen&)
    {42, 2110, 68, 1, Smoke::mf_property, 0, 35},	//2022 QCPLegend::setSelectedBrush(const QBrush&)
    {42, 2114, 59, 1, Smoke::mf_property, 0, 36},	//2023 QCPLegend::setSelectedFont(const QFont&)
    {42, 2128, 61, 1, Smoke::mf_property, 0, 37},	//2024 QCPLegend::setSelectedTextColor(const QColor&)
    {42, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 38},	//2025 QCPLegend::selectTest(const QPointF&, bool, QVariant*) const
    {42, 609, 35, 1, Smoke::mf_const, 10, 39},	//2026 QCPLegend::item(int) const
    {42, 619, 651, 1, Smoke::mf_const, 100, 40},	//2027 QCPLegend::itemWithPlottable(const QCPAbstractPlottable*) const
    {42, 616, 0, 0, Smoke::mf_const, 417, 41},	//2028 QCPLegend::itemCount() const
    {42, 566, 653, 1, Smoke::mf_const, 318, 42},	//2029 QCPLegend::hasItem(QCPAbstractLegendItem*) const
    {42, 568, 651, 1, Smoke::mf_const, 318, 43},	//2030 QCPLegend::hasItemWithPlottable(const QCPAbstractPlottable*) const
    {42, 147, 653, 1, 0, 318, 44},	//2031 QCPLegend::addItem(QCPAbstractLegendItem*)
    {42, 1154, 35, 1, 0, 318, 45},	//2032 QCPLegend::removeItem(int)
    {42, 1154, 653, 1, 0, 318, 46},	//2033 QCPLegend::removeItem(QCPAbstractLegendItem*)
    {42, 287, 0, 0, 0, 0, 47},	//2034 QCPLegend::clearItems()
    {42, 1252, 0, 0, Smoke::mf_const, 149, 48},	//2035 QCPLegend::selectedItems() const
    {42, 1265, 655, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 49},	//2036 QCPLegend::selectionChanged(QCPLegend::SelectableParts)
    {42, 1240, 655, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 50},	//2037 QCPLegend::selectableChanged(QCPLegend::SelectableParts)
    {42, 1062, 14, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 51},	//2038 QCPLegend::parentPlotInitialized(QCustomPlot*)
    {42, 1264, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 6, 52},	//2039 QCPLegend::selectionCategory() const
    {42, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 53},	//2040 QCPLegend::applyDefaultAntialiasingHint(QCPPainter*) const
    {42, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 54},	//2041 QCPLegend::draw(QCPPainter*)
    {42, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 55},	//2042 QCPLegend::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {42, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 56},	//2043 QCPLegend::deselectEvent(bool*)
    {42, 467, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 57},	//2044 QCPLegend::getBorderPen() const
    {42, 468, 0, 0, Smoke::mf_const|Smoke::mf_protected, 3, 58},	//2045 QCPLegend::getBrush() const
    {42, 2384, 1, 1, Smoke::mf_static, 222, 59},	//2046 QCPLegend::tr(const char*)
    {42, 2388, 1, 1, Smoke::mf_static, 222, 60},	//2047 QCPLegend::trUtf8(const char*)
    {42, 1236, 48, 2, Smoke::mf_const, 414, 61},	//2048 QCPLegend::selectTest(const QPointF&, bool) const
    {42, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 62},	//2049 QCPLegend::staticMetaObject() const
    {42, 720, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 63},	//2050 QCPLegend::mBorderPen() const
    {42, 1549, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 64},	//2051 QCPLegend::setMBorderPen(const QPen&)
    {42, 768, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 65},	//2052 QCPLegend::mIconBorderPen() const
    {42, 1646, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 66},	//2053 QCPLegend::setMIconBorderPen(const QPen&)
    {42, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 67},	//2054 QCPLegend::mBrush() const
    {42, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 68},	//2055 QCPLegend::setMBrush(const QBrush&)
    {42, 760, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 69},	//2056 QCPLegend::mFont() const
    {42, 1630, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 70},	//2057 QCPLegend::setMFont(const QFont&)
    {42, 904, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 71},	//2058 QCPLegend::mTextColor() const
    {42, 1919, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 72},	//2059 QCPLegend::setMTextColor(const QColor&)
    {42, 769, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 220, 73},	//2060 QCPLegend::mIconSize() const
    {42, 1648, 603, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 74},	//2061 QCPLegend::setMIconSize(const QSize&)
    {42, 770, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 75},	//2062 QCPLegend::mIconTextPadding() const
    {42, 1650, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 76},	//2063 QCPLegend::setMIconTextPadding(int)
    {42, 882, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 129, 77},	//2064 QCPLegend::mSelectedParts() const
    {42, 1875, 657, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 78},	//2065 QCPLegend::setMSelectedParts(QFlags<QCPLegend::SelectablePart>)
    {42, 872, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 129, 79},	//2066 QCPLegend::mSelectableParts() const
    {42, 1855, 657, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 80},	//2067 QCPLegend::setMSelectableParts(QFlags<QCPLegend::SelectablePart>)
    {42, 875, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 81},	//2068 QCPLegend::mSelectedBorderPen() const
    {42, 1861, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 82},	//2069 QCPLegend::setMSelectedBorderPen(const QPen&)
    {42, 879, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 83},	//2070 QCPLegend::mSelectedIconBorderPen() const
    {42, 1869, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 84},	//2071 QCPLegend::setMSelectedIconBorderPen(const QPen&)
    {42, 876, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 85},	//2072 QCPLegend::mSelectedBrush() const
    {42, 1863, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 86},	//2073 QCPLegend::setMSelectedBrush(const QBrush&)
    {42, 878, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 87},	//2074 QCPLegend::mSelectedFont() const
    {42, 1867, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 88},	//2075 QCPLegend::setMSelectedFont(const QFont&)
    {42, 885, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 89},	//2076 QCPLegend::mSelectedTextColor() const
    {42, 1881, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 90},	//2077 QCPLegend::setMSelectedTextColor(const QColor&)
    {42, 2272, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 91},	//2078 QCPLegend::spNone (enum)
    {42, 2271, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 92},	//2079 QCPLegend::spLegendBox (enum)
    {42, 2270, 0, 0, Smoke::mf_static|Smoke::mf_enum, 90, 93},	//2080 QCPLegend::spItems (enum)
    {42, 2500, 0, 0, Smoke::mf_dtor, 0, 94 },	//2081 QCPLegend::~QCPLegend()
    {43, 84, 0, 0, Smoke::mf_ctor, 94, 1},	//2082 QCPLineEnding::QCPLineEnding()
    {43, 84, 659, 4, Smoke::mf_ctor, 94, 2},	//2083 QCPLineEnding::QCPLineEnding(QCPLineEnding::EndingStyle, double, double, bool)
    {43, 2330, 0, 0, Smoke::mf_const, 95, 3},	//2084 QCPLineEnding::style() const
    {43, 2450, 0, 0, Smoke::mf_const, 414, 4},	//2085 QCPLineEnding::width() const
    {43, 658, 0, 0, Smoke::mf_const, 414, 5},	//2086 QCPLineEnding::length() const
    {43, 603, 0, 0, Smoke::mf_const, 318, 6},	//2087 QCPLineEnding::inverted() const
    {43, 2147, 664, 1, 0, 0, 7},	//2088 QCPLineEnding::setStyle(QCPLineEnding::EndingStyle)
    {43, 2243, 99, 1, 0, 0, 8},	//2089 QCPLineEnding::setWidth(double)
    {43, 1464, 99, 1, 0, 0, 9},	//2090 QCPLineEnding::setLength(double)
    {43, 1437, 16, 1, 0, 0, 10},	//2091 QCPLineEnding::setInverted(bool)
    {43, 255, 0, 0, Smoke::mf_const, 414, 11},	//2092 QCPLineEnding::boundingDistance() const
    {43, 1118, 0, 0, Smoke::mf_const, 414, 12},	//2093 QCPLineEnding::realLength() const
    {43, 361, 666, 3, Smoke::mf_const, 0, 13},	//2094 QCPLineEnding::draw(QCPPainter*, const QVector2D&, const QVector2D&) const
    {43, 361, 670, 3, Smoke::mf_const, 0, 14},	//2095 QCPLineEnding::draw(QCPPainter*, const QVector2D&, double) const
    {43, 84, 122, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 94, 15},	//2096 QCPLineEnding::QCPLineEnding(const QCPLineEnding&)
    {43, 84, 664, 1, Smoke::mf_ctor, 94, 16},	//2097 QCPLineEnding::QCPLineEnding(QCPLineEnding::EndingStyle)
    {43, 84, 674, 2, Smoke::mf_ctor, 94, 17},	//2098 QCPLineEnding::QCPLineEnding(QCPLineEnding::EndingStyle, double)
    {43, 84, 677, 3, Smoke::mf_ctor, 94, 18},	//2099 QCPLineEnding::QCPLineEnding(QCPLineEnding::EndingStyle, double, double)
    {43, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 19},	//2100 QCPLineEnding::staticMetaObject() const
    {43, 894, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 95, 20},	//2101 QCPLineEnding::mStyle() const
    {43, 1899, 664, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 21},	//2102 QCPLineEnding::setMStyle(QCPLineEnding::EndingStyle)
    {43, 928, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 22},	//2103 QCPLineEnding::mWidth() const
    {43, 1967, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 23},	//2104 QCPLineEnding::setMWidth(double)
    {43, 793, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 24},	//2105 QCPLineEnding::mLength() const
    {43, 1696, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 25},	//2106 QCPLineEnding::setMLength(double)
    {43, 779, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 26},	//2107 QCPLineEnding::mInverted() const
    {43, 1668, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 27},	//2108 QCPLineEnding::setMInverted(bool)
    {43, 424, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 28},	//2109 QCPLineEnding::esNone (enum)
    {43, 421, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 29},	//2110 QCPLineEnding::esFlatArrow (enum)
    {43, 426, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 30},	//2111 QCPLineEnding::esSpikeArrow (enum)
    {43, 423, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 31},	//2112 QCPLineEnding::esLineArrow (enum)
    {43, 420, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 32},	//2113 QCPLineEnding::esDisc (enum)
    {43, 427, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 33},	//2114 QCPLineEnding::esSquare (enum)
    {43, 419, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 34},	//2115 QCPLineEnding::esDiamond (enum)
    {43, 418, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 35},	//2116 QCPLineEnding::esBar (enum)
    {43, 422, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 36},	//2117 QCPLineEnding::esHalfBar (enum)
    {43, 425, 0, 0, Smoke::mf_static|Smoke::mf_enum, 95, 37},	//2118 QCPLineEnding::esSkewedBar (enum)
    {43, 2501, 0, 0, Smoke::mf_dtor, 0, 38 },	//2119 QCPLineEnding::~QCPLineEnding()
    {44, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//2120 QCPMarginGroup::metaObject() const
    {44, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2121 QCPMarginGroup::qt_metacast(const char*)
    {44, 2384, 3, 2, Smoke::mf_static, 222, 3},	//2122 QCPMarginGroup::tr(const char*, const char*)
    {44, 2388, 3, 2, Smoke::mf_static, 222, 4},	//2123 QCPMarginGroup::trUtf8(const char*, const char*)
    {44, 2384, 6, 3, Smoke::mf_static, 222, 5},	//2124 QCPMarginGroup::tr(const char*, const char*, int)
    {44, 2388, 6, 3, Smoke::mf_static, 222, 6},	//2125 QCPMarginGroup::trUtf8(const char*, const char*, int)
    {44, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//2126 QCPMarginGroup::qt_metacall(QMetaObject::Call, int, void**)
    {44, 90, 14, 1, Smoke::mf_ctor, 96, 8},	//2127 QCPMarginGroup::QCPMarginGroup(QCustomPlot*)
    {44, 408, 129, 1, Smoke::mf_const, 166, 9},	//2128 QCPMarginGroup::elements(QCP::MarginSide) const
    {44, 606, 0, 0, Smoke::mf_const, 318, 10},	//2129 QCPMarginGroup::isEmpty() const
    {44, 283, 0, 0, 0, 0, 11},	//2130 QCPMarginGroup::clear()
    {44, 308, 129, 1, Smoke::mf_const|Smoke::mf_protected, 417, 12},	//2131 QCPMarginGroup::commonMargin(QCP::MarginSide) const
    {44, 122, 681, 2, Smoke::mf_protected, 0, 13},	//2132 QCPMarginGroup::addChild(QCP::MarginSide, QCPLayoutElement*)
    {44, 1134, 681, 2, Smoke::mf_protected, 0, 14},	//2133 QCPMarginGroup::removeChild(QCP::MarginSide, QCPLayoutElement*)
    {44, 2384, 1, 1, Smoke::mf_static, 222, 15},	//2134 QCPMarginGroup::tr(const char*)
    {44, 2388, 1, 1, Smoke::mf_static, 222, 16},	//2135 QCPMarginGroup::trUtf8(const char*)
    {44, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 17},	//2136 QCPMarginGroup::staticMetaObject() const
    {44, 834, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 114, 18},	//2137 QCPMarginGroup::mParentPlot() const
    {44, 1779, 14, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 19},	//2138 QCPMarginGroup::setMParentPlot(QCustomPlot*)
    {44, 728, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 138, 20},	//2139 QCPMarginGroup::mChildren() const
    {44, 1565, 684, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 21},	//2140 QCPMarginGroup::setMChildren(const QHash<QCP::MarginSide,QList<QCPLayoutElement*> >&)
    {44, 2502, 0, 0, Smoke::mf_dtor, 0, 22 },	//2141 QCPMarginGroup::~QCPMarginGroup()
    {45, 92, 0, 0, Smoke::mf_ctor, 97, 1},	//2142 QCPPainter::QCPPainter()
    {45, 92, 686, 1, Smoke::mf_ctor, 97, 2},	//2143 QCPPainter::QCPPainter(QPaintDevice*)
    {45, 184, 0, 0, Smoke::mf_const, 318, 3},	//2144 QCPPainter::antialiasing() const
    {45, 968, 0, 0, Smoke::mf_const, 130, 4},	//2145 QCPPainter::modes() const
    {45, 1288, 16, 1, 0, 0, 5},	//2146 QCPPainter::setAntialiasing(bool)
    {45, 1993, 688, 2, 0, 0, 6},	//2147 QCPPainter::setMode(QCPPainter::PainterMode, bool)
    {45, 1996, 691, 1, 0, 0, 7},	//2148 QCPPainter::setModes(QFlags<QCPPainter::PainterMode>)
    {45, 245, 686, 1, 0, 318, 8},	//2149 QCPPainter::begin(QPaintDevice*)
    {45, 2037, 66, 1, 0, 0, 9},	//2150 QCPPainter::setPen(const QPen&)
    {45, 2037, 61, 1, 0, 0, 10},	//2151 QCPPainter::setPen(const QColor&)
    {45, 2037, 693, 1, 0, 0, 11},	//2152 QCPPainter::setPen(Qt::PenStyle)
    {45, 379, 695, 1, 0, 0, 12},	//2153 QCPPainter::drawLine(const QLineF&)
    {45, 379, 697, 2, 0, 0, 13},	//2154 QCPPainter::drawLine(const QPointF&, const QPointF&)
    {45, 1193, 0, 0, 0, 0, 14},	//2155 QCPPainter::save()
    {45, 1181, 0, 0, 0, 0, 15},	//2156 QCPPainter::restore()
    {45, 936, 0, 0, 0, 0, 16},	//2157 QCPPainter::makeNonCosmetic()
    {45, 1993, 700, 1, 0, 0, 17},	//2158 QCPPainter::setMode(QCPPainter::PainterMode)
    {45, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 18},	//2159 QCPPainter::staticMetaObject() const
    {45, 810, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 130, 19},	//2160 QCPPainter::mModes() const
    {45, 1730, 691, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 20},	//2161 QCPPainter::setMModes(QFlags<QCPPainter::PainterMode>)
    {45, 780, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 21},	//2162 QCPPainter::mIsAntialiasing() const
    {45, 1670, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 22},	//2163 QCPPainter::setMIsAntialiasing(bool)
    {45, 696, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 221, 23},	//2164 QCPPainter::mAntialiasingStack() const
    {45, 1500, 702, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 24},	//2165 QCPPainter::setMAntialiasingStack(const QStack<bool>&)
    {45, 1088, 0, 0, Smoke::mf_static|Smoke::mf_enum, 98, 25},	//2166 QCPPainter::pmDefault (enum)
    {45, 1091, 0, 0, Smoke::mf_static|Smoke::mf_enum, 98, 26},	//2167 QCPPainter::pmVectorized (enum)
    {45, 1089, 0, 0, Smoke::mf_static|Smoke::mf_enum, 98, 27},	//2168 QCPPainter::pmNoCaching (enum)
    {45, 1090, 0, 0, Smoke::mf_static|Smoke::mf_enum, 98, 28},	//2169 QCPPainter::pmNonCosmetic (enum)
    {45, 2503, 0, 0, Smoke::mf_dtor, 0, 29 },	//2170 QCPPainter::~QCPPainter()
    {46, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//2171 QCPPlotTitle::metaObject() const
    {46, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2172 QCPPlotTitle::qt_metacast(const char*)
    {46, 2384, 3, 2, Smoke::mf_static, 222, 3},	//2173 QCPPlotTitle::tr(const char*, const char*)
    {46, 2388, 3, 2, Smoke::mf_static, 222, 4},	//2174 QCPPlotTitle::trUtf8(const char*, const char*)
    {46, 2384, 6, 3, Smoke::mf_static, 222, 5},	//2175 QCPPlotTitle::tr(const char*, const char*, int)
    {46, 2388, 6, 3, Smoke::mf_static, 222, 6},	//2176 QCPPlotTitle::trUtf8(const char*, const char*, int)
    {46, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//2177 QCPPlotTitle::qt_metacall(QMetaObject::Call, int, void**)
    {46, 94, 14, 1, Smoke::mf_ctor, 99, 8},	//2178 QCPPlotTitle::QCPPlotTitle(QCustomPlot*)
    {46, 94, 564, 2, Smoke::mf_ctor, 99, 9},	//2179 QCPPlotTitle::QCPPlotTitle(QCustomPlot*, const QString&)
    {46, 2345, 0, 0, Smoke::mf_const|Smoke::mf_property, 222, 10},	//2180 QCPPlotTitle::text() const
    {46, 457, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 11},	//2181 QCPPlotTitle::font() const
    {46, 2347, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 12},	//2182 QCPPlotTitle::textColor() const
    {46, 1249, 0, 0, Smoke::mf_const|Smoke::mf_property, 134, 13},	//2183 QCPPlotTitle::selectedFont() const
    {46, 1260, 0, 0, Smoke::mf_const|Smoke::mf_property, 111, 14},	//2184 QCPPlotTitle::selectedTextColor() const
    {46, 1239, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 15},	//2185 QCPPlotTitle::selectable() const
    {46, 1243, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 16},	//2186 QCPPlotTitle::selected() const
    {46, 2168, 24, 1, Smoke::mf_property, 0, 17},	//2187 QCPPlotTitle::setText(const QString&)
    {46, 1403, 59, 1, Smoke::mf_property, 0, 18},	//2188 QCPPlotTitle::setFont(const QFont&)
    {46, 2172, 61, 1, Smoke::mf_property, 0, 19},	//2189 QCPPlotTitle::setTextColor(const QColor&)
    {46, 2114, 59, 1, Smoke::mf_property, 0, 20},	//2190 QCPPlotTitle::setSelectedFont(const QFont&)
    {46, 2128, 61, 1, Smoke::mf_property, 0, 21},	//2191 QCPPlotTitle::setSelectedTextColor(const QColor&)
    {46, 2100, 16, 1, Smoke::mf_property, 0, 22},	//2192 QCPPlotTitle::setSelectable(bool)
    {46, 2104, 16, 1, Smoke::mf_property, 0, 23},	//2193 QCPPlotTitle::setSelected(bool)
    {46, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 24},	//2194 QCPPlotTitle::selectTest(const QPointF&, bool, QVariant*) const
    {46, 1265, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 25},	//2195 QCPPlotTitle::selectionChanged(bool)
    {46, 1240, 16, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 26},	//2196 QCPPlotTitle::selectableChanged(bool)
    {46, 189, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 27},	//2197 QCPPlotTitle::applyDefaultAntialiasingHint(QCPPainter*) const
    {46, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 28},	//2198 QCPPlotTitle::draw(QCPPainter*)
    {46, 967, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 219, 29},	//2199 QCPPlotTitle::minimumSizeHint() const
    {46, 946, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 219, 30},	//2200 QCPPlotTitle::maximumSizeHint() const
    {46, 1234, 28, 4, Smoke::mf_protected|Smoke::mf_virtual, 0, 31},	//2201 QCPPlotTitle::selectEvent(QMouseEvent*, bool, const QVariant&, bool*)
    {46, 350, 33, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 32},	//2202 QCPPlotTitle::deselectEvent(bool*)
    {46, 933, 0, 0, Smoke::mf_const|Smoke::mf_protected, 134, 33},	//2203 QCPPlotTitle::mainFont() const
    {46, 935, 0, 0, Smoke::mf_const|Smoke::mf_protected, 111, 34},	//2204 QCPPlotTitle::mainTextColor() const
    {46, 2384, 1, 1, Smoke::mf_static, 222, 35},	//2205 QCPPlotTitle::tr(const char*)
    {46, 2388, 1, 1, Smoke::mf_static, 222, 36},	//2206 QCPPlotTitle::trUtf8(const char*)
    {46, 1236, 48, 2, Smoke::mf_const, 414, 37},	//2207 QCPPlotTitle::selectTest(const QPointF&, bool) const
    {46, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 38},	//2208 QCPPlotTitle::staticMetaObject() const
    {46, 901, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 223, 39},	//2209 QCPPlotTitle::mText() const
    {46, 1913, 24, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 40},	//2210 QCPPlotTitle::setMText(const QString&)
    {46, 760, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 41},	//2211 QCPPlotTitle::mFont() const
    {46, 1630, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 42},	//2212 QCPPlotTitle::setMFont(const QFont&)
    {46, 904, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 43},	//2213 QCPPlotTitle::mTextColor() const
    {46, 1919, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 44},	//2214 QCPPlotTitle::setMTextColor(const QColor&)
    {46, 878, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 135, 45},	//2215 QCPPlotTitle::mSelectedFont() const
    {46, 1867, 59, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 46},	//2216 QCPPlotTitle::setMSelectedFont(const QFont&)
    {46, 885, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 112, 47},	//2217 QCPPlotTitle::mSelectedTextColor() const
    {46, 1881, 61, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 48},	//2218 QCPPlotTitle::setMSelectedTextColor(const QColor&)
    {46, 903, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 212, 49},	//2219 QCPPlotTitle::mTextBoundingRect() const
    {46, 1917, 599, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 50},	//2220 QCPPlotTitle::setMTextBoundingRect(const QRect&)
    {46, 871, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 51},	//2221 QCPPlotTitle::mSelectable() const
    {46, 1853, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 52},	//2222 QCPPlotTitle::setMSelectable(bool)
    {46, 873, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 53},	//2223 QCPPlotTitle::mSelected() const
    {46, 1857, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 54},	//2224 QCPPlotTitle::setMSelected(bool)
    {46, 2504, 0, 0, Smoke::mf_dtor, 0, 55 },	//2225 QCPPlotTitle::~QCPPlotTitle()
    {47, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//2226 QCPPlottableLegendItem::metaObject() const
    {47, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2227 QCPPlottableLegendItem::qt_metacast(const char*)
    {47, 2384, 3, 2, Smoke::mf_static, 222, 3},	//2228 QCPPlottableLegendItem::tr(const char*, const char*)
    {47, 2388, 3, 2, Smoke::mf_static, 222, 4},	//2229 QCPPlottableLegendItem::trUtf8(const char*, const char*)
    {47, 2384, 6, 3, Smoke::mf_static, 222, 5},	//2230 QCPPlottableLegendItem::tr(const char*, const char*, int)
    {47, 2388, 6, 3, Smoke::mf_static, 222, 6},	//2231 QCPPlottableLegendItem::trUtf8(const char*, const char*, int)
    {47, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//2232 QCPPlottableLegendItem::qt_metacall(QMetaObject::Call, int, void**)
    {47, 97, 704, 2, Smoke::mf_ctor, 100, 8},	//2233 QCPPlottableLegendItem::QCPPlottableLegendItem(QCPLegend*, QCPAbstractPlottable*)
    {47, 1076, 0, 0, 0, 11, 9},	//2234 QCPPlottableLegendItem::plottable()
    {47, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 10},	//2235 QCPPlottableLegendItem::draw(QCPPainter*)
    {47, 967, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 219, 11},	//2236 QCPPlottableLegendItem::minimumSizeHint() const
    {47, 477, 0, 0, Smoke::mf_const|Smoke::mf_protected, 194, 12},	//2237 QCPPlottableLegendItem::getIconBorderPen() const
    {47, 525, 0, 0, Smoke::mf_const|Smoke::mf_protected, 111, 13},	//2238 QCPPlottableLegendItem::getTextColor() const
    {47, 476, 0, 0, Smoke::mf_const|Smoke::mf_protected, 134, 14},	//2239 QCPPlottableLegendItem::getFont() const
    {47, 2384, 1, 1, Smoke::mf_static, 222, 15},	//2240 QCPPlottableLegendItem::tr(const char*)
    {47, 2388, 1, 1, Smoke::mf_static, 222, 16},	//2241 QCPPlottableLegendItem::trUtf8(const char*)
    {47, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 17},	//2242 QCPPlottableLegendItem::staticMetaObject() const
    {47, 842, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 11, 18},	//2243 QCPPlottableLegendItem::mPlottable() const
    {47, 1795, 707, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 19},	//2244 QCPPlottableLegendItem::setMPlottable(QCPAbstractPlottable*)
    {47, 2505, 0, 0, Smoke::mf_dtor, 0, 20 },	//2245 QCPPlottableLegendItem::~QCPPlottableLegendItem()
    {48, 99, 0, 0, Smoke::mf_ctor, 103, 1},	//2246 QCPRange::QCPRange()
    {48, 99, 83, 2, Smoke::mf_ctor, 103, 2},	//2247 QCPRange::QCPRange(double, double)
    {48, 1040, 101, 1, Smoke::mf_const, 318, 3},	//2248 QCPRange::operator==(const QCPRange&) const
    {48, 1018, 101, 1, Smoke::mf_const, 318, 4},	//2249 QCPRange::operator!=(const QCPRange&) const
    {48, 1028, 709, 1, 0, 102, 5},	//2250 QCPRange::operator+=(const double&)
    {48, 1032, 709, 1, 0, 102, 6},	//2251 QCPRange::operator-=(const double&)
    {48, 1023, 709, 1, 0, 102, 7},	//2252 QCPRange::operator*=(const double&)
    {48, 1036, 709, 1, 0, 102, 8},	//2253 QCPRange::operator/=(const double&)
    {48, 2265, 0, 0, Smoke::mf_const, 414, 9},	//2254 QCPRange::size() const
    {48, 274, 0, 0, Smoke::mf_const, 414, 10},	//2255 QCPRange::center() const
    {48, 1006, 0, 0, 0, 0, 11},	//2256 QCPRange::normalize()
    {48, 434, 101, 1, 0, 0, 12},	//2257 QCPRange::expand(const QCPRange&)
    {48, 438, 101, 1, Smoke::mf_const, 101, 13},	//2258 QCPRange::expanded(const QCPRange&) const
    {48, 1192, 0, 0, Smoke::mf_const, 101, 14},	//2259 QCPRange::sanitizedForLogScale() const
    {48, 1191, 0, 0, Smoke::mf_const, 101, 15},	//2260 QCPRange::sanitizedForLinScale() const
    {48, 313, 99, 1, Smoke::mf_const, 318, 16},	//2261 QCPRange::contains(double) const
    {48, 2432, 83, 2, Smoke::mf_static, 318, 17},	//2262 QCPRange::validRange(double, double)
    {48, 2432, 101, 1, Smoke::mf_static, 318, 18},	//2263 QCPRange::validRange(const QCPRange&)
    {48, 99, 101, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 103, 19},	//2264 QCPRange::QCPRange(const QCPRange&)
    {48, 666, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 20},	//2265 QCPRange::lower() const
    {48, 1472, 99, 1, Smoke::mf_attribute, 0, 21},	//2266 QCPRange::setLower(double)
    {48, 2423, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 414, 22},	//2267 QCPRange::upper() const
    {48, 2215, 99, 1, Smoke::mf_attribute, 0, 23},	//2268 QCPRange::setUpper(double)
    {48, 963, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 410, 24},	//2269 QCPRange::minRange() const
    {48, 943, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 410, 25},	//2270 QCPRange::maxRange() const
    {48, 2506, 0, 0, Smoke::mf_dtor, 0, 26 },	//2271 QCPRange::~QCPRange()
    {49, 102, 0, 0, Smoke::mf_ctor, 106, 1},	//2272 QCPScatterStyle::QCPScatterStyle()
    {49, 102, 711, 2, Smoke::mf_ctor, 106, 2},	//2273 QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, double)
    {49, 102, 714, 3, Smoke::mf_ctor, 106, 3},	//2274 QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, const QColor&, double)
    {49, 102, 718, 4, Smoke::mf_ctor, 106, 4},	//2275 QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, const QColor&, const QColor&, double)
    {49, 102, 723, 4, Smoke::mf_ctor, 106, 5},	//2276 QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, const QPen&, const QBrush&, double)
    {49, 102, 158, 1, Smoke::mf_ctor, 106, 6},	//2277 QCPScatterStyle::QCPScatterStyle(const QPixmap&)
    {49, 102, 728, 4, Smoke::mf_ctor, 106, 7},	//2278 QCPScatterStyle::QCPScatterStyle(const QPainterPath&, const QPen&, const QBrush&, double)
    {49, 2265, 0, 0, Smoke::mf_const, 414, 8},	//2279 QCPScatterStyle::size() const
    {49, 2260, 0, 0, Smoke::mf_const, 107, 9},	//2280 QCPScatterStyle::shape() const
    {49, 1064, 0, 0, Smoke::mf_const, 194, 10},	//2281 QCPScatterStyle::pen() const
    {49, 256, 0, 0, Smoke::mf_const, 3, 11},	//2282 QCPScatterStyle::brush() const
    {49, 1074, 0, 0, Smoke::mf_const, 196, 12},	//2283 QCPScatterStyle::pixmap() const
    {49, 335, 0, 0, Smoke::mf_const, 192, 13},	//2284 QCPScatterStyle::customPath() const
    {49, 2140, 99, 1, 0, 0, 14},	//2285 QCPScatterStyle::setSize(double)
    {49, 2138, 733, 1, 0, 0, 15},	//2286 QCPScatterStyle::setShape(QCPScatterStyle::ScatterShape)
    {49, 2037, 66, 1, 0, 0, 16},	//2287 QCPScatterStyle::setPen(const QPen&)
    {49, 1326, 68, 1, 0, 0, 17},	//2288 QCPScatterStyle::setBrush(const QBrush&)
    {49, 2048, 158, 1, 0, 0, 18},	//2289 QCPScatterStyle::setPixmap(const QPixmap&)
    {49, 1366, 735, 1, 0, 0, 19},	//2290 QCPScatterStyle::setCustomPath(const QPainterPath&)
    {49, 607, 0, 0, Smoke::mf_const, 318, 20},	//2291 QCPScatterStyle::isNone() const
    {49, 608, 0, 0, Smoke::mf_const, 318, 21},	//2292 QCPScatterStyle::isPenDefined() const
    {49, 197, 737, 2, Smoke::mf_const, 0, 22},	//2293 QCPScatterStyle::applyTo(QCPPainter*, const QPen&) const
    {49, 395, 740, 2, Smoke::mf_const, 0, 23},	//2294 QCPScatterStyle::drawShape(QCPPainter*, QPointF) const
    {49, 395, 743, 3, Smoke::mf_const, 0, 24},	//2295 QCPScatterStyle::drawShape(QCPPainter*, double, double) const
    {49, 102, 330, 1, Smoke::mf_ctor|Smoke::mf_copyctor, 106, 25},	//2296 QCPScatterStyle::QCPScatterStyle(const QCPScatterStyle&)
    {49, 102, 733, 1, Smoke::mf_ctor, 106, 26},	//2297 QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape)
    {49, 102, 747, 2, Smoke::mf_ctor, 106, 27},	//2298 QCPScatterStyle::QCPScatterStyle(const QPainterPath&, const QPen&)
    {49, 102, 750, 3, Smoke::mf_ctor, 106, 28},	//2299 QCPScatterStyle::QCPScatterStyle(const QPainterPath&, const QPen&, const QBrush&)
    {49, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 29},	//2300 QCPScatterStyle::staticMetaObject() const
    {49, 891, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 30},	//2301 QCPScatterStyle::mSize() const
    {49, 1893, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 31},	//2302 QCPScatterStyle::setMSize(double)
    {49, 890, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 107, 32},	//2303 QCPScatterStyle::mShape() const
    {49, 1891, 733, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 33},	//2304 QCPScatterStyle::setMShape(QCPScatterStyle::ScatterShape)
    {49, 835, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 34},	//2305 QCPScatterStyle::mPen() const
    {49, 1781, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 35},	//2306 QCPScatterStyle::setMPen(const QPen&)
    {49, 721, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 36},	//2307 QCPScatterStyle::mBrush() const
    {49, 1551, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 37},	//2308 QCPScatterStyle::setMBrush(const QBrush&)
    {49, 840, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 38},	//2309 QCPScatterStyle::mPixmap() const
    {49, 1791, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 39},	//2310 QCPScatterStyle::setMPixmap(const QPixmap&)
    {49, 743, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 193, 40},	//2311 QCPScatterStyle::mCustomPath() const
    {49, 1595, 735, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 41},	//2312 QCPScatterStyle::setMCustomPath(const QPainterPath&)
    {49, 836, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 42},	//2313 QCPScatterStyle::mPenDefined() const
    {49, 1783, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 43},	//2314 QCPScatterStyle::setMPenDefined(bool)
    {49, 2284, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 44},	//2315 QCPScatterStyle::ssNone (enum)
    {49, 2283, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 45},	//2316 QCPScatterStyle::ssDot (enum)
    {49, 2277, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 46},	//2317 QCPScatterStyle::ssCross (enum)
    {49, 2287, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 47},	//2318 QCPScatterStyle::ssPlus (enum)
    {49, 2276, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 48},	//2319 QCPScatterStyle::ssCircle (enum)
    {49, 2282, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 49},	//2320 QCPScatterStyle::ssDisc (enum)
    {49, 2290, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 50},	//2321 QCPScatterStyle::ssSquare (enum)
    {49, 2281, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 51},	//2322 QCPScatterStyle::ssDiamond (enum)
    {49, 2291, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 52},	//2323 QCPScatterStyle::ssStar (enum)
    {49, 2292, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 53},	//2324 QCPScatterStyle::ssTriangle (enum)
    {49, 2293, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 54},	//2325 QCPScatterStyle::ssTriangleInverted (enum)
    {49, 2279, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 55},	//2326 QCPScatterStyle::ssCrossSquare (enum)
    {49, 2289, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 56},	//2327 QCPScatterStyle::ssPlusSquare (enum)
    {49, 2278, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 57},	//2328 QCPScatterStyle::ssCrossCircle (enum)
    {49, 2288, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 58},	//2329 QCPScatterStyle::ssPlusCircle (enum)
    {49, 2285, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 59},	//2330 QCPScatterStyle::ssPeace (enum)
    {49, 2286, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 60},	//2331 QCPScatterStyle::ssPixmap (enum)
    {49, 2280, 0, 0, Smoke::mf_static|Smoke::mf_enum, 107, 61},	//2332 QCPScatterStyle::ssCustom (enum)
    {49, 2507, 0, 0, Smoke::mf_dtor, 0, 62 },	//2333 QCPScatterStyle::~QCPScatterStyle()
    {50, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//2334 QCPStatisticalBox::metaObject() const
    {50, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2335 QCPStatisticalBox::qt_metacast(const char*)
    {50, 2384, 3, 2, Smoke::mf_static, 222, 3},	//2336 QCPStatisticalBox::tr(const char*, const char*)
    {50, 2388, 3, 2, Smoke::mf_static, 222, 4},	//2337 QCPStatisticalBox::trUtf8(const char*, const char*)
    {50, 2384, 6, 3, Smoke::mf_static, 222, 5},	//2338 QCPStatisticalBox::tr(const char*, const char*, int)
    {50, 2388, 6, 3, Smoke::mf_static, 222, 6},	//2339 QCPStatisticalBox::trUtf8(const char*, const char*, int)
    {50, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//2340 QCPStatisticalBox::qt_metacall(QMetaObject::Call, int, void**)
    {50, 111, 63, 2, Smoke::mf_ctor, 108, 8},	//2341 QCPStatisticalBox::QCPStatisticalBox(QCPAxis*, QCPAxis*)
    {50, 622, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 9},	//2342 QCPStatisticalBox::key() const
    {50, 964, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 10},	//2343 QCPStatisticalBox::minimum() const
    {50, 670, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 11},	//2344 QCPStatisticalBox::lowerQuartile() const
    {50, 949, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 12},	//2345 QCPStatisticalBox::median() const
    {50, 2427, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 13},	//2346 QCPStatisticalBox::upperQuartile() const
    {50, 944, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 14},	//2347 QCPStatisticalBox::maximum() const
    {50, 1050, 0, 0, Smoke::mf_const|Smoke::mf_property, 238, 15},	//2348 QCPStatisticalBox::outliers() const
    {50, 2450, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 16},	//2349 QCPStatisticalBox::width() const
    {50, 2449, 0, 0, Smoke::mf_const|Smoke::mf_property, 414, 17},	//2350 QCPStatisticalBox::whiskerWidth() const
    {50, 2448, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 18},	//2351 QCPStatisticalBox::whiskerPen() const
    {50, 2447, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 19},	//2352 QCPStatisticalBox::whiskerBarPen() const
    {50, 950, 0, 0, Smoke::mf_const|Smoke::mf_property, 194, 20},	//2353 QCPStatisticalBox::medianPen() const
    {50, 1049, 0, 0, Smoke::mf_const|Smoke::mf_property, 104, 21},	//2354 QCPStatisticalBox::outlierStyle() const
    {50, 1439, 99, 1, Smoke::mf_property, 0, 22},	//2355 QCPStatisticalBox::setKey(double)
    {50, 1986, 99, 1, Smoke::mf_property, 0, 23},	//2356 QCPStatisticalBox::setMinimum(double)
    {50, 1476, 99, 1, Smoke::mf_property, 0, 24},	//2357 QCPStatisticalBox::setLowerQuartile(double)
    {50, 1982, 99, 1, Smoke::mf_property, 0, 25},	//2358 QCPStatisticalBox::setMedian(double)
    {50, 2219, 99, 1, Smoke::mf_property, 0, 26},	//2359 QCPStatisticalBox::setUpperQuartile(double)
    {50, 1977, 99, 1, Smoke::mf_property, 0, 27},	//2360 QCPStatisticalBox::setMaximum(double)
    {50, 2021, 113, 1, Smoke::mf_property, 0, 28},	//2361 QCPStatisticalBox::setOutliers(const QVector<double>&)
    {50, 1368, 343, 6, 0, 0, 29},	//2362 QCPStatisticalBox::setData(double, double, double, double, double, double)
    {50, 2243, 99, 1, Smoke::mf_property, 0, 30},	//2363 QCPStatisticalBox::setWidth(double)
    {50, 2241, 99, 1, Smoke::mf_property, 0, 31},	//2364 QCPStatisticalBox::setWhiskerWidth(double)
    {50, 2239, 66, 1, Smoke::mf_property, 0, 32},	//2365 QCPStatisticalBox::setWhiskerPen(const QPen&)
    {50, 2237, 66, 1, Smoke::mf_property, 0, 33},	//2366 QCPStatisticalBox::setWhiskerBarPen(const QPen&)
    {50, 1984, 66, 1, Smoke::mf_property, 0, 34},	//2367 QCPStatisticalBox::setMedianPen(const QPen&)
    {50, 2019, 330, 1, Smoke::mf_property, 0, 35},	//2368 QCPStatisticalBox::setOutlierStyle(const QCPScatterStyle&)
    {50, 285, 0, 0, Smoke::mf_virtual, 0, 36},	//2369 QCPStatisticalBox::clearData()
    {50, 1236, 20, 3, Smoke::mf_const|Smoke::mf_virtual, 414, 37},	//2370 QCPStatisticalBox::selectTest(const QPointF&, bool, QVariant*) const
    {50, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 38},	//2371 QCPStatisticalBox::draw(QCPPainter*)
    {50, 377, 72, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 39},	//2372 QCPStatisticalBox::drawLegendIcon(QCPPainter*, const QRectF&) const
    {50, 480, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 40},	//2373 QCPStatisticalBox::getKeyRange(bool&, QCPAbstractPlottable::SignDomain) const
    {50, 535, 75, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 101, 41},	//2374 QCPStatisticalBox::getValueRange(bool&, QCPAbstractPlottable::SignDomain) const
    {50, 390, 754, 2, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 42},	//2375 QCPStatisticalBox::drawQuartileBox(QCPPainter*, QRectF*) const
    {50, 384, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 43},	//2376 QCPStatisticalBox::drawMedian(QCPPainter*) const
    {50, 400, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 44},	//2377 QCPStatisticalBox::drawWhiskers(QCPPainter*) const
    {50, 388, 26, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 0, 45},	//2378 QCPStatisticalBox::drawOutliers(QCPPainter*) const
    {50, 2384, 1, 1, Smoke::mf_static, 222, 46},	//2379 QCPStatisticalBox::tr(const char*)
    {50, 2388, 1, 1, Smoke::mf_static, 222, 47},	//2380 QCPStatisticalBox::trUtf8(const char*)
    {50, 1236, 48, 2, Smoke::mf_const, 414, 48},	//2381 QCPStatisticalBox::selectTest(const QPointF&, bool) const
    {50, 480, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 49},	//2382 QCPStatisticalBox::getKeyRange(bool&) const
    {50, 535, 90, 1, Smoke::mf_const|Smoke::mf_protected, 101, 50},	//2383 QCPStatisticalBox::getValueRange(bool&) const
    {50, 390, 26, 1, Smoke::mf_const|Smoke::mf_protected, 0, 51},	//2384 QCPStatisticalBox::drawQuartileBox(QCPPainter*) const
    {50, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 52},	//2385 QCPStatisticalBox::staticMetaObject() const
    {50, 824, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 239, 53},	//2386 QCPStatisticalBox::mOutliers() const
    {50, 1758, 113, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 54},	//2387 QCPStatisticalBox::setMOutliers(const QVector<double>&)
    {50, 783, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 55},	//2388 QCPStatisticalBox::mKey() const
    {50, 1676, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 56},	//2389 QCPStatisticalBox::setMKey(double)
    {50, 807, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 57},	//2390 QCPStatisticalBox::mMinimum() const
    {50, 1724, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 58},	//2391 QCPStatisticalBox::setMMinimum(double)
    {50, 796, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 59},	//2392 QCPStatisticalBox::mLowerQuartile() const
    {50, 1702, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 60},	//2393 QCPStatisticalBox::setMLowerQuartile(double)
    {50, 805, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 61},	//2394 QCPStatisticalBox::mMedian() const
    {50, 1720, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 62},	//2395 QCPStatisticalBox::setMMedian(double)
    {50, 918, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 63},	//2396 QCPStatisticalBox::mUpperQuartile() const
    {50, 1947, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 64},	//2397 QCPStatisticalBox::setMUpperQuartile(double)
    {50, 803, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 65},	//2398 QCPStatisticalBox::mMaximum() const
    {50, 1716, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 66},	//2399 QCPStatisticalBox::setMMaximum(double)
    {50, 928, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 67},	//2400 QCPStatisticalBox::mWidth() const
    {50, 1967, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 68},	//2401 QCPStatisticalBox::setMWidth(double)
    {50, 927, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 414, 69},	//2402 QCPStatisticalBox::mWhiskerWidth() const
    {50, 1965, 99, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 70},	//2403 QCPStatisticalBox::setMWhiskerWidth(double)
    {50, 926, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 71},	//2404 QCPStatisticalBox::mWhiskerPen() const
    {50, 1963, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 72},	//2405 QCPStatisticalBox::setMWhiskerPen(const QPen&)
    {50, 925, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 73},	//2406 QCPStatisticalBox::mWhiskerBarPen() const
    {50, 1961, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 74},	//2407 QCPStatisticalBox::setMWhiskerBarPen(const QPen&)
    {50, 806, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 195, 75},	//2408 QCPStatisticalBox::mMedianPen() const
    {50, 1722, 66, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 76},	//2409 QCPStatisticalBox::setMMedianPen(const QPen&)
    {50, 823, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 105, 77},	//2410 QCPStatisticalBox::mOutlierStyle() const
    {50, 1756, 330, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 78},	//2411 QCPStatisticalBox::setMOutlierStyle(const QCPScatterStyle&)
    {50, 2508, 0, 0, Smoke::mf_dtor, 0, 79 },	//2412 QCPStatisticalBox::~QCPStatisticalBox()
    {55, 961, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 376, 1},	//2413 QCustomPlot::metaObject() const
    {55, 1103, 1, 1, Smoke::mf_virtual, 423, 2},	//2414 QCustomPlot::qt_metacast(const char*)
    {55, 2384, 3, 2, Smoke::mf_static, 222, 3},	//2415 QCustomPlot::tr(const char*, const char*)
    {55, 2388, 3, 2, Smoke::mf_static, 222, 4},	//2416 QCustomPlot::trUtf8(const char*, const char*)
    {55, 2384, 6, 3, Smoke::mf_static, 222, 5},	//2417 QCustomPlot::tr(const char*, const char*, int)
    {55, 2388, 6, 3, Smoke::mf_static, 222, 6},	//2418 QCustomPlot::trUtf8(const char*, const char*, int)
    {55, 1101, 10, 3, Smoke::mf_virtual, 417, 7},	//2419 QCustomPlot::qt_metacall(QMetaObject::Call, int, void**)
    {55, 113, 757, 1, Smoke::mf_ctor, 114, 8},	//2420 QCustomPlot::QCustomPlot(QWidget*)
    {55, 2441, 0, 0, Smoke::mf_const|Smoke::mf_property, 211, 9},	//2421 QCustomPlot::viewport() const
    {55, 229, 0, 0, Smoke::mf_const|Smoke::mf_property, 196, 10},	//2422 QCustomPlot::background() const
    {55, 230, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 11},	//2423 QCustomPlot::backgroundScaled() const
    {55, 231, 0, 0, Smoke::mf_const|Smoke::mf_property, 250, 12},	//2424 QCustomPlot::backgroundScaledMode() const
    {55, 1075, 0, 0, Smoke::mf_const|Smoke::mf_property, 86, 13},	//2425 QCustomPlot::plotLayout() const
    {55, 178, 0, 0, Smoke::mf_const, 123, 14},	//2426 QCustomPlot::antialiasedElements() const
    {55, 1009, 0, 0, Smoke::mf_const, 123, 15},	//2427 QCustomPlot::notAntialiasedElements() const
    {55, 204, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 16},	//2428 QCustomPlot::autoAddPlottableToLegend() const
    {55, 600, 0, 0, Smoke::mf_const, 343, 17},	//2429 QCustomPlot::interactions() const
    {55, 1268, 0, 0, Smoke::mf_const|Smoke::mf_property, 417, 18},	//2430 QCustomPlot::selectionTolerance() const
    {55, 1001, 0, 0, Smoke::mf_const|Smoke::mf_property, 318, 19},	//2431 QCustomPlot::noAntialiasingOnDrag() const
    {55, 1087, 0, 0, Smoke::mf_const, 126, 20},	//2432 QCustomPlot::plottingHints() const
    {55, 999, 0, 0, Smoke::mf_const|Smoke::mf_property, 284, 21},	//2433 QCustomPlot::multiSelectModifier() const
    {55, 2233, 599, 1, Smoke::mf_property, 0, 22},	//2434 QCustomPlot::setViewport(const QRect&)
    {55, 1308, 158, 1, Smoke::mf_property, 0, 23},	//2435 QCustomPlot::setBackground(const QPixmap&)
    {55, 1308, 160, 3, 0, 0, 24},	//2436 QCustomPlot::setBackground(const QPixmap&, bool, Qt::AspectRatioMode)
    {55, 1308, 68, 1, 0, 0, 25},	//2437 QCustomPlot::setBackground(const QBrush&)
    {55, 1312, 16, 1, Smoke::mf_property, 0, 26},	//2438 QCustomPlot::setBackgroundScaled(bool)
    {55, 1314, 164, 1, Smoke::mf_property, 0, 27},	//2439 QCustomPlot::setBackgroundScaledMode(Qt::AspectRatioMode)
    {55, 1276, 759, 1, 0, 0, 28},	//2440 QCustomPlot::setAntialiasedElements(const QFlags<QCP::AntialiasedElement>&)
    {55, 1273, 761, 2, 0, 0, 29},	//2441 QCustomPlot::setAntialiasedElement(QCP::AntialiasedElement, bool)
    {55, 2007, 759, 1, 0, 0, 30},	//2442 QCustomPlot::setNotAntialiasedElements(const QFlags<QCP::AntialiasedElement>&)
    {55, 2004, 761, 2, 0, 0, 31},	//2443 QCustomPlot::setNotAntialiasedElement(QCP::AntialiasedElement, bool)
    {55, 1290, 16, 1, Smoke::mf_property, 0, 32},	//2444 QCustomPlot::setAutoAddPlottableToLegend(bool)
    {55, 1431, 764, 1, 0, 0, 33},	//2445 QCustomPlot::setInteractions(const QFlags<QCP::Interaction>&)
    {55, 1428, 766, 2, 0, 0, 34},	//2446 QCustomPlot::setInteraction(const QCP::Interaction&, bool)
    {55, 2136, 35, 1, Smoke::mf_property, 0, 35},	//2447 QCustomPlot::setSelectionTolerance(int)
    {55, 2002, 16, 1, Smoke::mf_property, 0, 36},	//2448 QCustomPlot::setNoAntialiasingOnDrag(bool)
    {55, 2053, 769, 1, 0, 0, 37},	//2449 QCustomPlot::setPlottingHints(const QFlags<QCP::PlottingHint>&)
    {55, 2050, 771, 2, 0, 0, 38},	//2450 QCustomPlot::setPlottingHint(QCP::PlottingHint, bool)
    {55, 1998, 774, 1, Smoke::mf_property, 0, 39},	//2451 QCustomPlot::setMultiSelectModifier(Qt::KeyboardModifier)
    {55, 1076, 35, 1, 0, 11, 40},	//2452 QCustomPlot::plottable(int)
    {55, 1076, 0, 0, 0, 11, 41},	//2453 QCustomPlot::plottable()
    {55, 153, 707, 1, 0, 318, 42},	//2454 QCustomPlot::addPlottable(QCPAbstractPlottable*)
    {55, 1159, 707, 1, 0, 318, 43},	//2455 QCustomPlot::removePlottable(QCPAbstractPlottable*)
    {55, 1159, 35, 1, 0, 318, 44},	//2456 QCustomPlot::removePlottable(int)
    {55, 288, 0, 0, 0, 417, 45},	//2457 QCustomPlot::clearPlottables()
    {55, 1083, 0, 0, Smoke::mf_const, 417, 46},	//2458 QCustomPlot::plottableCount() const
    {55, 1258, 0, 0, Smoke::mf_const, 150, 47},	//2459 QCustomPlot::selectedPlottables() const
    {55, 1078, 48, 2, Smoke::mf_const, 11, 48},	//2460 QCustomPlot::plottableAt(const QPointF&, bool) const
    {55, 570, 707, 1, Smoke::mf_const, 318, 49},	//2461 QCustomPlot::hasPlottable(QCPAbstractPlottable*) const
    {55, 556, 35, 1, Smoke::mf_const, 56, 50},	//2462 QCustomPlot::graph(int) const
    {55, 556, 0, 0, Smoke::mf_const, 56, 51},	//2463 QCustomPlot::graph() const
    {55, 144, 63, 2, 0, 56, 52},	//2464 QCustomPlot::addGraph(QCPAxis*, QCPAxis*)
    {55, 1151, 457, 1, 0, 318, 53},	//2465 QCustomPlot::removeGraph(QCPGraph*)
    {55, 1151, 35, 1, 0, 318, 54},	//2466 QCustomPlot::removeGraph(int)
    {55, 286, 0, 0, 0, 417, 55},	//2467 QCustomPlot::clearGraphs()
    {55, 558, 0, 0, Smoke::mf_const, 417, 56},	//2468 QCustomPlot::graphCount() const
    {55, 1250, 0, 0, Smoke::mf_const, 157, 57},	//2469 QCustomPlot::selectedGraphs() const
    {55, 609, 35, 1, Smoke::mf_const, 9, 58},	//2470 QCustomPlot::item(int) const
    {55, 609, 0, 0, Smoke::mf_const, 9, 59},	//2471 QCustomPlot::item() const
    {55, 147, 514, 1, 0, 318, 60},	//2472 QCustomPlot::addItem(QCPAbstractItem*)
    {55, 1154, 514, 1, 0, 318, 61},	//2473 QCustomPlot::removeItem(QCPAbstractItem*)
    {55, 1154, 35, 1, 0, 318, 62},	//2474 QCustomPlot::removeItem(int)
    {55, 287, 0, 0, 0, 417, 63},	//2475 QCustomPlot::clearItems()
    {55, 616, 0, 0, Smoke::mf_const, 417, 64},	//2476 QCustomPlot::itemCount() const
    {55, 1252, 0, 0, Smoke::mf_const, 147, 65},	//2477 QCustomPlot::selectedItems() const
    {55, 611, 48, 2, Smoke::mf_const, 9, 66},	//2478 QCustomPlot::itemAt(const QPointF&, bool) const
    {55, 566, 514, 1, Smoke::mf_const, 318, 67},	//2479 QCustomPlot::hasItem(QCPAbstractItem*) const
    {55, 637, 24, 1, Smoke::mf_const, 79, 68},	//2480 QCustomPlot::layer(const QString&) const
    {55, 637, 35, 1, Smoke::mf_const, 79, 69},	//2481 QCustomPlot::layer(int) const
    {55, 333, 0, 0, Smoke::mf_const, 79, 70},	//2482 QCustomPlot::currentLayer() const
    {55, 1363, 24, 1, 0, 318, 71},	//2483 QCustomPlot::setCurrentLayer(const QString&)
    {55, 1363, 578, 1, 0, 318, 72},	//2484 QCustomPlot::setCurrentLayer(QCPLayer*)
    {55, 641, 0, 0, Smoke::mf_const, 417, 73},	//2485 QCustomPlot::layerCount() const
    {55, 149, 776, 3, 0, 318, 74},	//2486 QCustomPlot::addLayer(const QString&, QCPLayer*, QCustomPlot::LayerInsertMode)
    {55, 1157, 578, 1, 0, 318, 75},	//2487 QCustomPlot::removeLayer(QCPLayer*)
    {55, 992, 780, 3, 0, 318, 76},	//2488 QCustomPlot::moveLayer(QCPLayer*, QCPLayer*, QCustomPlot::LayerInsertMode)
    {55, 224, 0, 0, Smoke::mf_const, 417, 77},	//2489 QCustomPlot::axisRectCount() const
    {55, 222, 35, 1, Smoke::mf_const, 23, 78},	//2490 QCustomPlot::axisRect(int) const
    {55, 225, 0, 0, Smoke::mf_const, 153, 79},	//2491 QCustomPlot::axisRects() const
    {55, 646, 127, 1, Smoke::mf_const, 84, 80},	//2492 QCustomPlot::layoutElementAt(const QPointF&) const
    {55, 1166, 16, 1, 0, 0, 81},	//2493 QCustomPlot::rescaleAxes(bool)
    {55, 1244, 0, 0, Smoke::mf_const, 152, 82},	//2494 QCustomPlot::selectedAxes() const
    {55, 1255, 0, 0, Smoke::mf_const, 169, 83},	//2495 QCustomPlot::selectedLegends() const
    {55, 349, 0, 0, 0, 0, 84},	//2496 QCustomPlot::deselectAll()
    {55, 1205, 784, 6, 0, 318, 85},	//2497 QCustomPlot::savePdf(const QString&, bool, int, int, const QString&, const QString&)
    {55, 1212, 791, 5, 0, 318, 86},	//2498 QCustomPlot::savePng(const QString&, int, int, double, int)
    {55, 1199, 791, 5, 0, 318, 87},	//2499 QCustomPlot::saveJpg(const QString&, int, int, double, int)
    {55, 1194, 797, 4, 0, 318, 88},	//2500 QCustomPlot::saveBmp(const QString&, int, int, double)
    {55, 1218, 802, 6, 0, 318, 89},	//2501 QCustomPlot::saveRastered(const QString&, int, int, double, const char*, int)
    {55, 2376, 305, 3, 0, 196, 90},	//2502 QCustomPlot::toPixmap(int, int, double)
    {55, 2372, 809, 3, 0, 0, 91},	//2503 QCustomPlot::toPainter(QCPPainter*, int, int)
    {55, 1162, 813, 1, 0, 0, 92},	//2504 QCustomPlot::replot(QCustomPlot::RefreshPriority)
    {55, 969, 178, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 93},	//2505 QCustomPlot::mouseDoubleClick(QMouseEvent*)
    {55, 977, 178, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 94},	//2506 QCustomPlot::mousePress(QMouseEvent*)
    {55, 973, 178, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 95},	//2507 QCustomPlot::mouseMove(QMouseEvent*)
    {55, 981, 178, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 96},	//2508 QCustomPlot::mouseRelease(QMouseEvent*)
    {55, 985, 180, 1, Smoke::mf_protected|Smoke::mf_signal, 0, 97},	//2509 QCustomPlot::mouseWheel(QWheelEvent*)
    {55, 1081, 815, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 98},	//2510 QCustomPlot::plottableClick(QCPAbstractPlottable*, QMouseEvent*)
    {55, 1084, 815, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 99},	//2511 QCustomPlot::plottableDoubleClick(QCPAbstractPlottable*, QMouseEvent*)
    {55, 614, 818, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 100},	//2512 QCustomPlot::itemClick(QCPAbstractItem*, QMouseEvent*)
    {55, 617, 818, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 101},	//2513 QCustomPlot::itemDoubleClick(QCPAbstractItem*, QMouseEvent*)
    {55, 216, 821, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 102},	//2514 QCustomPlot::axisClick(QCPAxis*, QCPAxis::SelectablePart, QMouseEvent*)
    {55, 220, 821, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 103},	//2515 QCustomPlot::axisDoubleClick(QCPAxis*, QCPAxis::SelectablePart, QMouseEvent*)
    {55, 652, 825, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 104},	//2516 QCustomPlot::legendClick(QCPLegend*, QCPAbstractLegendItem*, QMouseEvent*)
    {55, 654, 825, 3, Smoke::mf_protected|Smoke::mf_signal, 0, 105},	//2517 QCustomPlot::legendDoubleClick(QCPLegend*, QCPAbstractLegendItem*, QMouseEvent*)
    {55, 2368, 829, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 106},	//2518 QCustomPlot::titleClick(QMouseEvent*, QCPPlotTitle*)
    {55, 2370, 829, 2, Smoke::mf_protected|Smoke::mf_signal, 0, 107},	//2519 QCustomPlot::titleDoubleClick(QMouseEvent*, QCPPlotTitle*)
    {55, 1267, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 108},	//2520 QCustomPlot::selectionChangedByUser()
    {55, 244, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 109},	//2521 QCustomPlot::beforeReplot()
    {55, 158, 0, 0, Smoke::mf_protected|Smoke::mf_signal, 0, 110},	//2522 QCustomPlot::afterReplot()
    {55, 967, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 219, 111},	//2523 QCustomPlot::minimumSizeHint() const
    {55, 2267, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 219, 112},	//2524 QCustomPlot::sizeHint() const
    {55, 1053, 832, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 113},	//2525 QCustomPlot::paintEvent(QPaintEvent*)
    {55, 1179, 834, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 114},	//2526 QCustomPlot::resizeEvent(QResizeEvent*)
    {55, 971, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 115},	//2527 QCustomPlot::mouseDoubleClickEvent(QMouseEvent*)
    {55, 979, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 116},	//2528 QCustomPlot::mousePressEvent(QMouseEvent*)
    {55, 975, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 117},	//2529 QCustomPlot::mouseMoveEvent(QMouseEvent*)
    {55, 983, 178, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 118},	//2530 QCustomPlot::mouseReleaseEvent(QMouseEvent*)
    {55, 2445, 180, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 119},	//2531 QCustomPlot::wheelEvent(QWheelEvent*)
    {55, 361, 26, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 120},	//2532 QCustomPlot::draw(QCPPainter*)
    {55, 226, 70, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 121},	//2533 QCustomPlot::axisRemoved(QCPAxis*)
    {55, 656, 57, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 122},	//2534 QCustomPlot::legendRemoved(QCPLegend*)
    {55, 2412, 0, 0, Smoke::mf_const|Smoke::mf_protected, 0, 123},	//2535 QCustomPlot::updateLayerIndices() const
    {55, 642, 20, 3, Smoke::mf_const|Smoke::mf_protected, 81, 124},	//2536 QCustomPlot::layerableAt(const QPointF&, bool, QVariant*) const
    {55, 365, 26, 1, Smoke::mf_protected, 0, 125},	//2537 QCustomPlot::drawBackground(QCPPainter*)
    {55, 2384, 1, 1, Smoke::mf_static, 222, 126},	//2538 QCustomPlot::tr(const char*)
    {55, 2388, 1, 1, Smoke::mf_static, 222, 127},	//2539 QCustomPlot::trUtf8(const char*)
    {55, 113, 0, 0, Smoke::mf_ctor, 114, 128},	//2540 QCustomPlot::QCustomPlot()
    {55, 1308, 182, 2, 0, 0, 129},	//2541 QCustomPlot::setBackground(const QPixmap&, bool)
    {55, 1273, 836, 1, 0, 0, 130},	//2542 QCustomPlot::setAntialiasedElement(QCP::AntialiasedElement)
    {55, 2004, 836, 1, 0, 0, 131},	//2543 QCustomPlot::setNotAntialiasedElement(QCP::AntialiasedElement)
    {55, 1428, 838, 1, 0, 0, 132},	//2544 QCustomPlot::setInteraction(const QCP::Interaction&)
    {55, 2050, 840, 1, 0, 0, 133},	//2545 QCustomPlot::setPlottingHint(QCP::PlottingHint)
    {55, 1078, 127, 1, Smoke::mf_const, 11, 134},	//2546 QCustomPlot::plottableAt(const QPointF&) const
    {55, 144, 0, 0, 0, 56, 135},	//2547 QCustomPlot::addGraph()
    {55, 144, 70, 1, 0, 56, 136},	//2548 QCustomPlot::addGraph(QCPAxis*)
    {55, 611, 127, 1, Smoke::mf_const, 9, 137},	//2549 QCustomPlot::itemAt(const QPointF&) const
    {55, 149, 24, 1, 0, 318, 138},	//2550 QCustomPlot::addLayer(const QString&)
    {55, 149, 842, 2, 0, 318, 139},	//2551 QCustomPlot::addLayer(const QString&, QCPLayer*)
    {55, 992, 845, 2, 0, 318, 140},	//2552 QCustomPlot::moveLayer(QCPLayer*, QCPLayer*)
    {55, 222, 0, 0, Smoke::mf_const, 23, 141},	//2553 QCustomPlot::axisRect() const
    {55, 1166, 0, 0, 0, 0, 142},	//2554 QCustomPlot::rescaleAxes()
    {55, 1205, 24, 1, 0, 318, 143},	//2555 QCustomPlot::savePdf(const QString&)
    {55, 1205, 848, 2, 0, 318, 144},	//2556 QCustomPlot::savePdf(const QString&, bool)
    {55, 1205, 851, 3, 0, 318, 145},	//2557 QCustomPlot::savePdf(const QString&, bool, int)
    {55, 1205, 855, 4, 0, 318, 146},	//2558 QCustomPlot::savePdf(const QString&, bool, int, int)
    {55, 1205, 860, 5, 0, 318, 147},	//2559 QCustomPlot::savePdf(const QString&, bool, int, int, const QString&)
    {55, 1212, 24, 1, 0, 318, 148},	//2560 QCustomPlot::savePng(const QString&)
    {55, 1212, 45, 2, 0, 318, 149},	//2561 QCustomPlot::savePng(const QString&, int)
    {55, 1212, 866, 3, 0, 318, 150},	//2562 QCustomPlot::savePng(const QString&, int, int)
    {55, 1212, 797, 4, 0, 318, 151},	//2563 QCustomPlot::savePng(const QString&, int, int, double)
    {55, 1199, 24, 1, 0, 318, 152},	//2564 QCustomPlot::saveJpg(const QString&)
    {55, 1199, 45, 2, 0, 318, 153},	//2565 QCustomPlot::saveJpg(const QString&, int)
    {55, 1199, 866, 3, 0, 318, 154},	//2566 QCustomPlot::saveJpg(const QString&, int, int)
    {55, 1199, 797, 4, 0, 318, 155},	//2567 QCustomPlot::saveJpg(const QString&, int, int, double)
    {55, 1194, 24, 1, 0, 318, 156},	//2568 QCustomPlot::saveBmp(const QString&)
    {55, 1194, 45, 2, 0, 318, 157},	//2569 QCustomPlot::saveBmp(const QString&, int)
    {55, 1194, 866, 3, 0, 318, 158},	//2570 QCustomPlot::saveBmp(const QString&, int, int)
    {55, 1218, 870, 5, 0, 318, 159},	//2571 QCustomPlot::saveRastered(const QString&, int, int, double, const char*)
    {55, 2376, 0, 0, 0, 196, 160},	//2572 QCustomPlot::toPixmap()
    {55, 2376, 35, 1, 0, 196, 161},	//2573 QCustomPlot::toPixmap(int)
    {55, 2376, 117, 2, 0, 196, 162},	//2574 QCustomPlot::toPixmap(int, int)
    {55, 2372, 26, 1, 0, 0, 163},	//2575 QCustomPlot::toPainter(QCPPainter*)
    {55, 2372, 876, 2, 0, 0, 164},	//2576 QCustomPlot::toPainter(QCPPainter*, int)
    {55, 1162, 0, 0, 0, 0, 165},	//2577 QCustomPlot::replot()
    {55, 642, 48, 2, Smoke::mf_const|Smoke::mf_protected, 81, 166},	//2578 QCustomPlot::layerableAt(const QPointF&, bool) const
    {55, 2299, 0, 0, Smoke::mf_const|Smoke::mf_static|Smoke::mf_attribute, 375, 167},	//2579 QCustomPlot::staticMetaObject() const
    {55, 2459, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 14, 168},	//2580 QCustomPlot::xAxis() const
    {55, 2247, 70, 1, Smoke::mf_attribute, 0, 169},	//2581 QCustomPlot::setXAxis(QCPAxis*)
    {55, 2461, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 14, 170},	//2582 QCustomPlot::yAxis() const
    {55, 2251, 70, 1, Smoke::mf_attribute, 0, 171},	//2583 QCustomPlot::setYAxis(QCPAxis*)
    {55, 2460, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 14, 172},	//2584 QCustomPlot::xAxis2() const
    {55, 2249, 70, 1, Smoke::mf_attribute, 0, 173},	//2585 QCustomPlot::setXAxis2(QCPAxis*)
    {55, 2462, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 14, 174},	//2586 QCustomPlot::yAxis2() const
    {55, 2253, 70, 1, Smoke::mf_attribute, 0, 175},	//2587 QCustomPlot::setYAxis2(QCPAxis*)
    {55, 651, 0, 0, Smoke::mf_const|Smoke::mf_attribute, 89, 176},	//2588 QCustomPlot::legend() const
    {55, 1462, 57, 1, Smoke::mf_attribute, 0, 177},	//2589 QCustomPlot::setLegend(QCPLegend*)
    {55, 923, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 212, 178},	//2590 QCustomPlot::mViewport() const
    {55, 1957, 599, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 179},	//2591 QCustomPlot::setMViewport(const QRect&)
    {55, 841, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 86, 180},	//2592 QCustomPlot::mPlotLayout() const
    {55, 1793, 879, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 181},	//2593 QCustomPlot::setMPlotLayout(QCPLayoutGrid*)
    {55, 698, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 182},	//2594 QCustomPlot::mAutoAddPlottableToLegend() const
    {55, 1504, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 183},	//2595 QCustomPlot::setMAutoAddPlottableToLegend(bool)
    {55, 843, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 151, 184},	//2596 QCustomPlot::mPlottables() const
    {55, 1797, 881, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 185},	//2597 QCustomPlot::setMPlottables(const QList<QCPAbstractPlottable*>&)
    {55, 764, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 158, 186},	//2598 QCustomPlot::mGraphs() const
    {55, 1638, 883, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 187},	//2599 QCustomPlot::setMGraphs(const QList<QCPGraph*>&)
    {55, 782, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 148, 188},	//2600 QCustomPlot::mItems() const
    {55, 1674, 885, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 189},	//2601 QCustomPlot::setMItems(const QList<QCPAbstractItem*>&)
    {55, 791, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 163, 190},	//2602 QCustomPlot::mLayers() const
    {55, 1692, 887, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 191},	//2603 QCustomPlot::setMLayers(const QList<QCPLayer*>&)
    {55, 690, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 123, 192},	//2604 QCustomPlot::mAntialiasedElements() const
    {55, 1488, 187, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 193},	//2605 QCustomPlot::setMAntialiasedElements(QFlags<QCP::AntialiasedElement>)
    {55, 817, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 123, 194},	//2606 QCustomPlot::mNotAntialiasedElements() const
    {55, 1744, 187, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 195},	//2607 QCustomPlot::setMNotAntialiasedElements(QFlags<QCP::AntialiasedElement>)
    {55, 776, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 124, 196},	//2608 QCustomPlot::mInteractions() const
    {55, 1662, 889, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 197},	//2609 QCustomPlot::setMInteractions(QFlags<QCP::Interaction>)
    {55, 889, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 417, 198},	//2610 QCustomPlot::mSelectionTolerance() const
    {55, 1889, 35, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 199},	//2611 QCustomPlot::setMSelectionTolerance(int)
    {55, 815, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 200},	//2612 QCustomPlot::mNoAntialiasingOnDrag() const
    {55, 1740, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 201},	//2613 QCustomPlot::setMNoAntialiasingOnDrag(bool)
    {55, 709, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 4, 202},	//2614 QCustomPlot::mBackgroundBrush() const
    {55, 1527, 68, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 203},	//2615 QCustomPlot::setMBackgroundBrush(const QBrush&)
    {55, 710, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 204},	//2616 QCustomPlot::mBackgroundPixmap() const
    {55, 1529, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 205},	//2617 QCustomPlot::setMBackgroundPixmap(const QPixmap&)
    {55, 868, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 206},	//2618 QCustomPlot::mScaledBackgroundPixmap() const
    {55, 1847, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 207},	//2619 QCustomPlot::setMScaledBackgroundPixmap(const QPixmap&)
    {55, 711, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 208},	//2620 QCustomPlot::mBackgroundScaled() const
    {55, 1531, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 209},	//2621 QCustomPlot::setMBackgroundScaled(bool)
    {55, 712, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 250, 210},	//2622 QCustomPlot::mBackgroundScaledMode() const
    {55, 1533, 164, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 211},	//2623 QCustomPlot::setMBackgroundScaledMode(Qt::AspectRatioMode)
    {55, 742, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 79, 212},	//2624 QCustomPlot::mCurrentLayer() const
    {55, 1593, 578, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 213},	//2625 QCustomPlot::setMCurrentLayer(QCPLayer*)
    {55, 844, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 126, 214},	//2626 QCustomPlot::mPlottingHints() const
    {55, 1799, 891, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 215},	//2627 QCustomPlot::setMPlottingHints(QFlags<QCP::PlottingHint>)
    {55, 813, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 284, 216},	//2628 QCustomPlot::mMultiSelectModifier() const
    {55, 1736, 774, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 217},	//2629 QCustomPlot::setMMultiSelectModifier(Qt::KeyboardModifier)
    {55, 826, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 197, 218},	//2630 QCustomPlot::mPaintBuffer() const
    {55, 1763, 158, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 219},	//2631 QCustomPlot::setMPaintBuffer(const QPixmap&)
    {55, 812, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 199, 220},	//2632 QCustomPlot::mMousePressPos() const
    {55, 1734, 189, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 221},	//2633 QCustomPlot::setMMousePressPos(const QPoint&)
    {55, 811, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 209, 222},	//2634 QCustomPlot::mMouseEventElement() const
    {55, 1732, 893, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 223},	//2635 QCustomPlot::setMMouseEventElement(const QPointer<QCPLayoutElement>&)
    {55, 860, 0, 0, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_attribute, 318, 224},	//2636 QCustomPlot::mReplotting() const
    {55, 1831, 16, 1, Smoke::mf_protected|Smoke::mf_attribute, 0, 225},	//2637 QCustomPlot::setMReplotting(bool)
    {55, 661, 0, 0, Smoke::mf_static|Smoke::mf_enum, 115, 226},	//2638 QCustomPlot::limBelow (enum)
    {55, 660, 0, 0, Smoke::mf_static|Smoke::mf_enum, 115, 227},	//2639 QCustomPlot::limAbove (enum)
    {55, 1189, 0, 0, Smoke::mf_static|Smoke::mf_enum, 116, 228},	//2640 QCustomPlot::rpImmediate (enum)
    {55, 1190, 0, 0, Smoke::mf_static|Smoke::mf_enum, 116, 229},	//2641 QCustomPlot::rpQueued (enum)
    {55, 1188, 0, 0, Smoke::mf_static|Smoke::mf_enum, 116, 230},	//2642 QCustomPlot::rpHint (enum)
    {55, 2509, 0, 0, Smoke::mf_dtor, 0, 231 },	//2643 QCustomPlot::~QCustomPlot()
    {63, 2318, 895, 3, Smoke::mf_static, 417, 1},	//2644 QGlobalSpace::strncmp(const char*, const char*, size_t)
    {63, 249, 899, 1, Smoke::mf_static, 228, 2},	//2645 QGlobalSpace::bom(QTextStream&)
    {63, 461, 899, 1, Smoke::mf_static, 228, 3},	//2646 QGlobalSpace::forcesign(QTextStream&)
    {63, 450, 899, 1, Smoke::mf_static, 228, 4},	//2647 QGlobalSpace::fixed(QTextStream&)
    {63, 1007, 899, 1, Smoke::mf_static, 228, 5},	//2648 QGlobalSpace::noshowbase(QTextStream&)
    {63, 1042, 901, 2, Smoke::mf_static, 142, 6},	//2649 QGlobalSpace::operator|(QCPAxis::SelectablePart, int)
    {63, 2314, 1, 1, Smoke::mf_static, 420, 7},	//2650 QGlobalSpace::strlen(const char*)
    {63, 1042, 904, 2, Smoke::mf_static, 142, 8},	//2651 QGlobalSpace::operator|(QCP::Interaction, int)
    {63, 2430, 899, 1, Smoke::mf_static, 228, 9},	//2652 QGlobalSpace::uppercasedigits(QTextStream&)
    {63, 247, 899, 1, Smoke::mf_static, 228, 10},	//2653 QGlobalSpace::bin(QTextStream&)
    {63, 2262, 899, 1, Smoke::mf_static, 228, 11},	//2654 QGlobalSpace::showbase(QTextStream&)
    {63, 1020, 269, 2, Smoke::mf_static, 338, 12},	//2655 QGlobalSpace::operator*(double, const QCPRange&)
    {63, 953, 907, 3, Smoke::mf_static, 417, 13},	//2656 QGlobalSpace::memcmp(const void*, const void*, size_t)
    {63, 2300, 911, 2, Smoke::mf_static, 321, 14},	//2657 QGlobalSpace::strcat(char*, const char*)
    {63, 1004, 899, 1, Smoke::mf_static, 228, 15},	//2658 QGlobalSpace::noforcesign(QTextStream&)
    {63, 1030, 914, 2, Smoke::mf_static, 338, 16},	//2659 QGlobalSpace::operator-(const QCPRange&, double)
    {63, 955, 917, 3, Smoke::mf_static, 423, 17},	//2660 QGlobalSpace::memcpy(void*, const void*, size_t)
    {63, 1042, 921, 2, Smoke::mf_static, 128, 18},	//2661 QGlobalSpace::operator|(QCPAxis::SelectablePart, QCPAxis::SelectablePart)
    {63, 2310, 1, 1, Smoke::mf_static, 321, 19},	//2662 QGlobalSpace::strdup(const char*)
    {63, 671, 899, 1, Smoke::mf_static, 228, 20},	//2663 QGlobalSpace::lowercasebase(QTextStream&)
    {63, 1042, 924, 2, Smoke::mf_static, 125, 21},	//2664 QGlobalSpace::operator|(QCP::MarginSide, QFlags<QCP::MarginSide>)
    {63, 1042, 927, 2, Smoke::mf_static, 123, 22},	//2665 QGlobalSpace::operator|(QCP::AntialiasedElement, QCP::AntialiasedElement)
    {63, 2428, 899, 1, Smoke::mf_static, 228, 23},	//2666 QGlobalSpace::uppercasebase(QTextStream&)
    {63, 2312, 35, 1, Smoke::mf_static, 321, 24},	//2667 QGlobalSpace::strerror(int)
    {63, 1042, 930, 2, Smoke::mf_static, 127, 25},	//2668 QGlobalSpace::operator|(QCPAxis::AxisType, QFlags<QCPAxis::AxisType>)
    {63, 1229, 899, 1, Smoke::mf_static, 228, 26},	//2669 QGlobalSpace::scientific(QTextStream&)
    {63, 1042, 933, 2, Smoke::mf_static, 123, 27},	//2670 QGlobalSpace::operator|(QCP::AntialiasedElement, QFlags<QCP::AntialiasedElement>)
    {63, 2308, 3, 2, Smoke::mf_static, 420, 28},	//2671 QGlobalSpace::strcspn(const char*, const char*)
    {63, 1042, 936, 2, Smoke::mf_static, 142, 29},	//2672 QGlobalSpace::operator|(QCPPainter::PainterMode, int)
    {63, 1182, 899, 1, Smoke::mf_static, 228, 30},	//2673 QGlobalSpace::right(QTextStream&)
    {63, 649, 899, 1, Smoke::mf_static, 228, 31},	//2674 QGlobalSpace::left(QTextStream&)
    {63, 1042, 939, 2, Smoke::mf_static, 126, 32},	//2675 QGlobalSpace::operator|(QCP::PlottingHint, QCP::PlottingHint)
    {63, 1002, 899, 1, Smoke::mf_static, 228, 33},	//2676 QGlobalSpace::noforcepoint(QTextStream&)
    {63, 2320, 942, 3, Smoke::mf_static, 321, 34},	//2677 QGlobalSpace::strncpy(char*, const char*, size_t)
    {63, 673, 899, 1, Smoke::mf_static, 228, 35},	//2678 QGlobalSpace::lowercasedigits(QTextStream&)
    {63, 1020, 914, 2, Smoke::mf_static, 338, 36},	//2679 QGlobalSpace::operator*(const QCPRange&, double)
    {63, 452, 899, 1, Smoke::mf_static, 228, 37},	//2680 QGlobalSpace::flush(QTextStream&)
    {63, 2316, 942, 3, Smoke::mf_static, 321, 38},	//2681 QGlobalSpace::strncat(char*, const char*, size_t)
    {63, 1042, 946, 2, Smoke::mf_static, 130, 39},	//2682 QGlobalSpace::operator|(QCPPainter::PainterMode, QFlags<QCPPainter::PainterMode>)
    {63, 1042, 949, 2, Smoke::mf_static, 142, 40},	//2683 QGlobalSpace::operator|(QCP::PlottingHint, int)
    {63, 2302, 3, 2, Smoke::mf_static, 417, 41},	//2684 QGlobalSpace::strcmp(const char*, const char*)
    {63, 959, 952, 3, Smoke::mf_static, 423, 42},	//2685 QGlobalSpace::memset(void*, int, size_t)
    {63, 1042, 956, 2, Smoke::mf_static, 124, 43},	//2686 QGlobalSpace::operator|(QCP::Interaction, QFlags<QCP::Interaction>)
    {63, 1042, 959, 2, Smoke::mf_static, 126, 44},	//2687 QGlobalSpace::operator|(QCP::PlottingHint, QFlags<QCP::PlottingHint>)
    {63, 1042, 962, 2, Smoke::mf_static, 142, 45},	//2688 QGlobalSpace::operator|(QCPLegend::SelectablePart, int)
    {63, 2322, 3, 2, Smoke::mf_static, 420, 46},	//2689 QGlobalSpace::strspn(const char*, const char*)
    {63, 1042, 965, 2, Smoke::mf_static, 129, 47},	//2690 QGlobalSpace::operator|(QCPLegend::SelectablePart, QCPLegend::SelectablePart)
    {63, 2453, 899, 1, Smoke::mf_static, 228, 48},	//2691 QGlobalSpace::ws(QTextStream&)
    {63, 1042, 168, 2, Smoke::mf_static, 142, 49},	//2692 QGlobalSpace::operator|(QCPAxis::AxisType, int)
    {63, 1042, 968, 2, Smoke::mf_static, 130, 50},	//2693 QGlobalSpace::operator|(QCPPainter::PainterMode, QCPPainter::PainterMode)
    {63, 951, 971, 4, Smoke::mf_static, 423, 51},	//2694 QGlobalSpace::memccpy(void*, const void*, int, size_t)
    {63, 957, 917, 3, Smoke::mf_static, 423, 52},	//2695 QGlobalSpace::memmove(void*, const void*, size_t)
    {63, 459, 899, 1, Smoke::mf_static, 228, 53},	//2696 QGlobalSpace::forcepoint(QTextStream&)
    {63, 274, 899, 1, Smoke::mf_static, 228, 54},	//2697 QGlobalSpace::center(QTextStream&)
    {63, 2324, 911, 2, Smoke::mf_static, 321, 55},	//2698 QGlobalSpace::strtok(char*, const char*)
    {63, 1025, 914, 2, Smoke::mf_static, 338, 56},	//2699 QGlobalSpace::operator+(const QCPRange&, double)
    {63, 1034, 914, 2, Smoke::mf_static, 338, 57},	//2700 QGlobalSpace::operator/(const QCPRange&, double)
    {63, 1042, 976, 2, Smoke::mf_static, 129, 58},	//2701 QGlobalSpace::operator|(QCPLegend::SelectablePart, QFlags<QCPLegend::SelectablePart>)
    {63, 1177, 899, 1, Smoke::mf_static, 228, 59},	//2702 QGlobalSpace::reset(QTextStream&)
    {63, 2306, 911, 2, Smoke::mf_static, 321, 60},	//2703 QGlobalSpace::strcpy(char*, const char*)
    {63, 1042, 979, 2, Smoke::mf_static, 127, 61},	//2704 QGlobalSpace::operator|(QCPAxis::AxisType, QCPAxis::AxisType)
    {63, 1012, 899, 1, Smoke::mf_static, 228, 62},	//2705 QGlobalSpace::oct(QTextStream&)
    {63, 1042, 982, 2, Smoke::mf_static, 142, 63},	//2706 QGlobalSpace::operator|(QCP::MarginSide, int)
    {63, 2304, 3, 2, Smoke::mf_static, 417, 64},	//2707 QGlobalSpace::strcoll(const char*, const char*)
    {63, 2326, 985, 3, Smoke::mf_static, 321, 65},	//2708 QGlobalSpace::strtok_r(char*, const char*, char**)
    {63, 411, 899, 1, Smoke::mf_static, 228, 66},	//2709 QGlobalSpace::endl(QTextStream&)
    {63, 1042, 989, 2, Smoke::mf_static, 125, 67},	//2710 QGlobalSpace::operator|(QCP::MarginSide, QCP::MarginSide)
    {63, 1042, 992, 2, Smoke::mf_static, 128, 68},	//2711 QGlobalSpace::operator|(QCPAxis::SelectablePart, QFlags<QCPAxis::SelectablePart>)
    {63, 1042, 995, 2, Smoke::mf_static, 124, 69},	//2712 QGlobalSpace::operator|(QCP::Interaction, QCP::Interaction)
    {63, 347, 899, 1, Smoke::mf_static, 228, 70},	//2713 QGlobalSpace::dec(QTextStream&)
    {63, 1025, 269, 2, Smoke::mf_static, 338, 71},	//2714 QGlobalSpace::operator+(double, const QCPRange&)
    {63, 1042, 998, 2, Smoke::mf_static, 142, 72},	//2715 QGlobalSpace::operator|(QCP::AntialiasedElement, int)
    {63, 575, 899, 1, Smoke::mf_static, 228, 73},	//2716 QGlobalSpace::hex(QTextStream&)
    {63, 2328, 942, 3, Smoke::mf_static, 420, 74},	//2717 QGlobalSpace::strxfrm(char*, const char*, size_t)
    {75, 432, 1001, 1, Smoke::mf_virtual, 318, 0},	//2718 QObject::event(QEvent*)
    {75, 433, 1003, 2, Smoke::mf_virtual, 318, 0},	//2719 QObject::eventFilter(QObject*, QEvent*)
    {75, 2367, 1006, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2720 QObject::timerEvent(QTimerEvent*)
    {75, 279, 1008, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2721 QObject::childEvent(QChildEvent*)
    {75, 334, 1001, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2722 QObject::customEvent(QEvent*)
    {75, 312, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2723 QObject::connectNotify(const char*)
    {75, 353, 1, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2724 QObject::disconnectNotify(const char*)
    {100, 352, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 417, 0},	//2725 QWidget::devType() const
    {100, 2235, 16, 1, Smoke::mf_property|Smoke::mf_virtual|Smoke::mf_slot, 0, 0},	//2726 QWidget::setVisible(bool)
    {100, 574, 35, 1, Smoke::mf_const|Smoke::mf_virtual, 417, 0},	//2727 QWidget::heightForWidth(int) const
    {100, 1052, 0, 0, Smoke::mf_const|Smoke::mf_virtual, 190, 0},	//2728 QWidget::paintEngine() const
    {100, 432, 1001, 1, Smoke::mf_protected|Smoke::mf_virtual, 318, 0},	//2729 QWidget::event(QEvent*)
    {100, 628, 1010, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2730 QWidget::keyPressEvent(QKeyEvent*)
    {100, 630, 1010, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2731 QWidget::keyReleaseEvent(QKeyEvent*)
    {100, 454, 1012, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2732 QWidget::focusInEvent(QFocusEvent*)
    {100, 456, 1012, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2733 QWidget::focusOutEvent(QFocusEvent*)
    {100, 413, 1001, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2734 QWidget::enterEvent(QEvent*)
    {100, 648, 1001, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2735 QWidget::leaveEvent(QEvent*)
    {100, 991, 1014, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2736 QWidget::moveEvent(QMoveEvent*)
    {100, 293, 1016, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2737 QWidget::closeEvent(QCloseEvent*)
    {100, 316, 1018, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2738 QWidget::contextMenuEvent(QContextMenuEvent*)
    {100, 2339, 1020, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2739 QWidget::tabletEvent(QTabletEvent*)
    {100, 115, 1022, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2740 QWidget::actionEvent(QActionEvent*)
    {100, 358, 1024, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2741 QWidget::dragEnterEvent(QDragEnterEvent*)
    {100, 360, 1026, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2742 QWidget::dragMoveEvent(QDragMoveEvent*)
    {100, 359, 1028, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2743 QWidget::dragLeaveEvent(QDragLeaveEvent*)
    {100, 402, 1030, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2744 QWidget::dropEvent(QDropEvent*)
    {100, 2261, 1032, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2745 QWidget::showEvent(QShowEvent*)
    {100, 577, 1034, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2746 QWidget::hideEvent(QHideEvent*)
    {100, 2458, 1036, 1, Smoke::mf_protected|Smoke::mf_virtual, 318, 0},	//2747 QWidget::x11Event(_XEvent*)
    {100, 276, 1001, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2748 QWidget::changeEvent(QEvent*)
    {100, 962, 1038, 1, Smoke::mf_const|Smoke::mf_protected|Smoke::mf_virtual, 417, 0},	//2749 QWidget::metric(QPaintDevice::PaintDeviceMetric) const
    {100, 585, 1040, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2750 QWidget::inputMethodEvent(QInputMethodEvent*)
    {100, 586, 1042, 1, Smoke::mf_const|Smoke::mf_virtual, 230, 0},	//2751 QWidget::inputMethodQuery(Qt::InputMethodQuery) const
    {100, 455, 16, 1, Smoke::mf_protected|Smoke::mf_virtual, 318, 0},	//2752 QWidget::focusNextPrevChild(bool)
    {100, 2331, 1044, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2753 QWidget::styleChange(QStyle&)
    {100, 410, 16, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2754 QWidget::enabledChange(bool)
    {100, 1055, 1046, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2755 QWidget::paletteChange(const QPalette&)
    {100, 458, 59, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2756 QWidget::fontChange(const QFont&)
    {100, 2452, 16, 1, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2757 QWidget::windowActivationChange(bool)
    {100, 636, 0, 0, Smoke::mf_protected|Smoke::mf_virtual, 0, 0},	//2758 QWidget::languageChange()
};

static Smoke::Index ambiguousMethodList[] = {
    0,
    2649,  // QGlobalSpace::operator|(QCPAxis::SelectablePart, int)
    2651,  // QGlobalSpace::operator|(QCP::Interaction, int)
    2661,  // QGlobalSpace::operator|(QCPAxis::SelectablePart, QCPAxis::SelectablePart)
    2664,  // QGlobalSpace::operator|(QCP::MarginSide, QFlags<QCP::MarginSide>)
    2665,  // QGlobalSpace::operator|(QCP::AntialiasedElement, QCP::AntialiasedElement)
    2668,  // QGlobalSpace::operator|(QCPAxis::AxisType, QFlags<QCPAxis::AxisType>)
    2670,  // QGlobalSpace::operator|(QCP::AntialiasedElement, QFlags<QCP::AntialiasedElement>)
    2672,  // QGlobalSpace::operator|(QCPPainter::PainterMode, int)
    2675,  // QGlobalSpace::operator|(QCP::PlottingHint, QCP::PlottingHint)
    2682,  // QGlobalSpace::operator|(QCPPainter::PainterMode, QFlags<QCPPainter::PainterMode>)
    2683,  // QGlobalSpace::operator|(QCP::PlottingHint, int)
    2686,  // QGlobalSpace::operator|(QCP::Interaction, QFlags<QCP::Interaction>)
    2687,  // QGlobalSpace::operator|(QCP::PlottingHint, QFlags<QCP::PlottingHint>)
    2688,  // QGlobalSpace::operator|(QCPLegend::SelectablePart, int)
    2690,  // QGlobalSpace::operator|(QCPLegend::SelectablePart, QCPLegend::SelectablePart)
    2692,  // QGlobalSpace::operator|(QCPAxis::AxisType, int)
    2693,  // QGlobalSpace::operator|(QCPPainter::PainterMode, QCPPainter::PainterMode)
    2701,  // QGlobalSpace::operator|(QCPLegend::SelectablePart, QFlags<QCPLegend::SelectablePart>)
    2704,  // QGlobalSpace::operator|(QCPAxis::AxisType, QCPAxis::AxisType)
    2706,  // QGlobalSpace::operator|(QCP::MarginSide, int)
    2710,  // QGlobalSpace::operator|(QCP::MarginSide, QCP::MarginSide)
    2711,  // QGlobalSpace::operator|(QCPAxis::SelectablePart, QFlags<QCPAxis::SelectablePart>)
    2712,  // QGlobalSpace::operator|(QCP::Interaction, QCP::Interaction)
    2715,  // QGlobalSpace::operator|(QCP::AntialiasedElement, int)
    0,
    493,  // QCPAxisRect::setBackground(const QPixmap&)
    495,  // QCPAxisRect::setBackground(const QBrush&)
    0,
    2480,  // QCustomPlot::layer(const QString&) const
    2481,  // QCustomPlot::layer(int) const
    0,
    2435,  // QCustomPlot::setBackground(const QPixmap&)
    2437,  // QCustomPlot::setBackground(const QBrush&)
    0,
    2277,  // QCPScatterStyle::QCPScatterStyle(const QPixmap&)
    2296,  // QCPScatterStyle::QCPScatterStyle(const QCPScatterStyle&)
    0,
    2275,  // QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, const QColor&, const QColor&, double)
    2276,  // QCPScatterStyle::QCPScatterStyle(QCPScatterStyle::ScatterShape, const QPen&, const QBrush&, double)
    0,
    2150,  // QCPPainter::setPen(const QPen&)
    2151,  // QCPPainter::setPen(const QColor&)
    0,
};

// Class ID, munged name ID (index into methodNames), method def (see methods) if >0 or number of overloads if <0
static Smoke::MethodMap methodMaps[] = {
    {0, 0, 0},	//0 (no method)
    {4, 5, 8},	// QCPAbstractItem::QCPAbstractItem#
    {4, 173, 21},	// QCPAbstractItem::anchor$
    {4, 175, 31},	// QCPAbstractItem::anchorPixelPoint$
    {4, 176, 19},	// QCPAbstractItem::anchors
    {4, 190, 27},	// QCPAbstractItem::applyDefaultAntialiasingHint#
    {4, 289, 10},	// QCPAbstractItem::clipAxisRect
    {4, 290, 26},	// QCPAbstractItem::clipRect
    {4, 291, 9},	// QCPAbstractItem::clipToAxisRect
    {4, 328, 35},	// QCPAbstractItem::createAnchor$$
    {4, 330, 34},	// QCPAbstractItem::createPosition$
    {4, 351, 30},	// QCPAbstractItem::deselectEvent$
    {4, 355, 32},	// QCPAbstractItem::distSqrToLine###
    {4, 362, 28},	// QCPAbstractItem::draw#
    {4, 563, 22},	// QCPAbstractItem::hasAnchor$
    {4, 688, 46},	// QCPAbstractItem::mAnchors
    {4, 731, 42},	// QCPAbstractItem::mClipAxisRect
    {4, 732, 40},	// QCPAbstractItem::mClipToAxisRect
    {4, 848, 44},	// QCPAbstractItem::mPositions
    {4, 871, 48},	// QCPAbstractItem::mSelectable
    {4, 873, 50},	// QCPAbstractItem::mSelected
    {4, 961, 1},	// QCPAbstractItem::metaObject
    {4, 1095, 20},	// QCPAbstractItem::position$
    {4, 1096, 18},	// QCPAbstractItem::positions
    {4, 1102, 7},	// QCPAbstractItem::qt_metacall$$?
    {4, 1104, 2},	// QCPAbstractItem::qt_metacast$
    {4, 1123, 33},	// QCPAbstractItem::rectSelectTest##$
    {4, 1235, 29},	// QCPAbstractItem::selectEvent#$#$
    {4, 1237, 38},	// QCPAbstractItem::selectTest#$
    {4, 1238, 17},	// QCPAbstractItem::selectTest#$#
    {4, 1239, 11},	// QCPAbstractItem::selectable
    {4, 1241, 24},	// QCPAbstractItem::selectableChanged$
    {4, 1243, 12},	// QCPAbstractItem::selected
    {4, 1264, 25},	// QCPAbstractItem::selectionCategory
    {4, 1266, 23},	// QCPAbstractItem::selectionChanged$
    {4, 1339, 14},	// QCPAbstractItem::setClipAxisRect#
    {4, 1341, 13},	// QCPAbstractItem::setClipToAxisRect$
    {4, 1485, 47},	// QCPAbstractItem::setMAnchors?
    {4, 1572, 43},	// QCPAbstractItem::setMClipAxisRect?
    {4, 1574, 41},	// QCPAbstractItem::setMClipToAxisRect$
    {4, 1808, 45},	// QCPAbstractItem::setMPositions?
    {4, 1854, 49},	// QCPAbstractItem::setMSelectable$
    {4, 1858, 51},	// QCPAbstractItem::setMSelected$
    {4, 2101, 15},	// QCPAbstractItem::setSelectable$
    {4, 2105, 16},	// QCPAbstractItem::setSelected$
    {4, 2299, 39},	// QCPAbstractItem::staticMetaObject
    {4, 2385, 36},	// QCPAbstractItem::tr$
    {4, 2386, 3},	// QCPAbstractItem::tr$$
    {4, 2387, 5},	// QCPAbstractItem::tr$$$
    {4, 2389, 37},	// QCPAbstractItem::trUtf8$
    {4, 2390, 4},	// QCPAbstractItem::trUtf8$$
    {4, 2391, 6},	// QCPAbstractItem::trUtf8$$$
    {4, 2464, 52},	// QCPAbstractItem::~QCPAbstractItem
    {5, 7, 60},	// QCPAbstractLegendItem::QCPAbstractLegendItem#
    {5, 190, 78},	// QCPAbstractLegendItem::applyDefaultAntialiasingHint#
    {5, 290, 79},	// QCPAbstractLegendItem::clipRect
    {5, 351, 82},	// QCPAbstractLegendItem::deselectEvent$
    {5, 362, 80},	// QCPAbstractLegendItem::draw#
    {5, 457, 62},	// QCPAbstractLegendItem::font
    {5, 760, 89},	// QCPAbstractLegendItem::mFont
    {5, 833, 87},	// QCPAbstractLegendItem::mParentLegend
    {5, 871, 97},	// QCPAbstractLegendItem::mSelectable
    {5, 873, 99},	// QCPAbstractLegendItem::mSelected
    {5, 878, 93},	// QCPAbstractLegendItem::mSelectedFont
    {5, 885, 95},	// QCPAbstractLegendItem::mSelectedTextColor
    {5, 904, 91},	// QCPAbstractLegendItem::mTextColor
    {5, 961, 53},	// QCPAbstractLegendItem::metaObject
    {5, 1060, 61},	// QCPAbstractLegendItem::parentLegend
    {5, 1102, 59},	// QCPAbstractLegendItem::qt_metacall$$?
    {5, 1104, 54},	// QCPAbstractLegendItem::qt_metacast$
    {5, 1235, 81},	// QCPAbstractLegendItem::selectEvent#$#$
    {5, 1237, 85},	// QCPAbstractLegendItem::selectTest#$
    {5, 1238, 74},	// QCPAbstractLegendItem::selectTest#$#
    {5, 1239, 66},	// QCPAbstractLegendItem::selectable
    {5, 1241, 76},	// QCPAbstractLegendItem::selectableChanged$
    {5, 1243, 67},	// QCPAbstractLegendItem::selected
    {5, 1249, 64},	// QCPAbstractLegendItem::selectedFont
    {5, 1260, 65},	// QCPAbstractLegendItem::selectedTextColor
    {5, 1264, 77},	// QCPAbstractLegendItem::selectionCategory
    {5, 1266, 75},	// QCPAbstractLegendItem::selectionChanged$
    {5, 1404, 68},	// QCPAbstractLegendItem::setFont#
    {5, 1631, 90},	// QCPAbstractLegendItem::setMFont#
    {5, 1778, 88},	// QCPAbstractLegendItem::setMParentLegend#
    {5, 1854, 98},	// QCPAbstractLegendItem::setMSelectable$
    {5, 1858, 100},	// QCPAbstractLegendItem::setMSelected$
    {5, 1868, 94},	// QCPAbstractLegendItem::setMSelectedFont#
    {5, 1882, 96},	// QCPAbstractLegendItem::setMSelectedTextColor#
    {5, 1920, 92},	// QCPAbstractLegendItem::setMTextColor#
    {5, 2101, 72},	// QCPAbstractLegendItem::setSelectable$
    {5, 2105, 73},	// QCPAbstractLegendItem::setSelected$
    {5, 2115, 70},	// QCPAbstractLegendItem::setSelectedFont#
    {5, 2129, 71},	// QCPAbstractLegendItem::setSelectedTextColor#
    {5, 2173, 69},	// QCPAbstractLegendItem::setTextColor#
    {5, 2299, 86},	// QCPAbstractLegendItem::staticMetaObject
    {5, 2347, 63},	// QCPAbstractLegendItem::textColor
    {5, 2385, 83},	// QCPAbstractLegendItem::tr$
    {5, 2386, 55},	// QCPAbstractLegendItem::tr$$
    {5, 2387, 57},	// QCPAbstractLegendItem::tr$$$
    {5, 2389, 84},	// QCPAbstractLegendItem::trUtf8$
    {5, 2390, 56},	// QCPAbstractLegendItem::trUtf8$$
    {5, 2391, 58},	// QCPAbstractLegendItem::trUtf8$$$
    {5, 2465, 101},	// QCPAbstractLegendItem::~QCPAbstractLegendItem
    {6, 9, 109},	// QCPAbstractPlottable::QCPAbstractPlottable##
    {6, 155, 136},	// QCPAbstractPlottable::addToLegend
    {6, 179, 113},	// QCPAbstractPlottable::antialiasedErrorBars
    {6, 180, 111},	// QCPAbstractPlottable::antialiasedFill
    {6, 181, 112},	// QCPAbstractPlottable::antialiasedScatters
    {6, 190, 146},	// QCPAbstractPlottable::applyDefaultAntialiasingHint#
    {6, 192, 160},	// QCPAbstractPlottable::applyErrorBarsAntialiasingHint#
    {6, 194, 158},	// QCPAbstractPlottable::applyFillAntialiasingHint#
    {6, 196, 159},	// QCPAbstractPlottable::applyScattersAntialiasingHint#
    {6, 256, 116},	// QCPAbstractPlottable::brush
    {6, 285, 134},	// QCPAbstractPlottable::clearData
    {6, 290, 143},	// QCPAbstractPlottable::clipRect
    {6, 323, 153},	// QCPAbstractPlottable::coordsToPixels$$
    {6, 324, 152},	// QCPAbstractPlottable::coordsToPixels$$$$
    {6, 351, 148},	// QCPAbstractPlottable::deselectEvent$
    {6, 355, 161},	// QCPAbstractPlottable::distSqrToLine###
    {6, 362, 144},	// QCPAbstractPlottable::draw#
    {6, 378, 149},	// QCPAbstractPlottable::drawLegendIcon##
    {6, 481, 168},	// QCPAbstractPlottable::getKeyRange$
    {6, 482, 150},	// QCPAbstractPlottable::getKeyRange$$
    {6, 536, 169},	// QCPAbstractPlottable::getValueRange$
    {6, 537, 151},	// QCPAbstractPlottable::getValueRange$$
    {6, 623, 118},	// QCPAbstractPlottable::keyAxis
    {6, 691, 177},	// QCPAbstractPlottable::mAntialiasedErrorBars
    {6, 692, 173},	// QCPAbstractPlottable::mAntialiasedFill
    {6, 693, 175},	// QCPAbstractPlottable::mAntialiasedScatters
    {6, 721, 183},	// QCPAbstractPlottable::mBrush
    {6, 784, 187},	// QCPAbstractPlottable::mKeyAxis
    {6, 814, 171},	// QCPAbstractPlottable::mName
    {6, 835, 179},	// QCPAbstractPlottable::mPen
    {6, 871, 191},	// QCPAbstractPlottable::mSelectable
    {6, 873, 193},	// QCPAbstractPlottable::mSelected
    {6, 876, 185},	// QCPAbstractPlottable::mSelectedBrush
    {6, 883, 181},	// QCPAbstractPlottable::mSelectedPen
    {6, 920, 189},	// QCPAbstractPlottable::mValueAxis
    {6, 931, 157},	// QCPAbstractPlottable::mainBrush
    {6, 934, 156},	// QCPAbstractPlottable::mainPen
    {6, 961, 102},	// QCPAbstractPlottable::metaObject
    {6, 1000, 110},	// QCPAbstractPlottable::name
    {6, 1064, 114},	// QCPAbstractPlottable::pen
    {6, 1072, 155},	// QCPAbstractPlottable::pixelsToCoords#$$
    {6, 1073, 154},	// QCPAbstractPlottable::pixelsToCoords$$$$
    {6, 1102, 108},	// QCPAbstractPlottable::qt_metacall$$?
    {6, 1104, 103},	// QCPAbstractPlottable::qt_metacast$
    {6, 1150, 137},	// QCPAbstractPlottable::removeFromLegend
    {6, 1166, 165},	// QCPAbstractPlottable::rescaleAxes
    {6, 1167, 138},	// QCPAbstractPlottable::rescaleAxes$
    {6, 1171, 166},	// QCPAbstractPlottable::rescaleKeyAxis
    {6, 1172, 139},	// QCPAbstractPlottable::rescaleKeyAxis$
    {6, 1174, 167},	// QCPAbstractPlottable::rescaleValueAxis
    {6, 1175, 140},	// QCPAbstractPlottable::rescaleValueAxis$
    {6, 1231, 196},	// QCPAbstractPlottable::sdBoth
    {6, 1232, 195},	// QCPAbstractPlottable::sdNegative
    {6, 1233, 197},	// QCPAbstractPlottable::sdPositive
    {6, 1235, 147},	// QCPAbstractPlottable::selectEvent#$#$
    {6, 1237, 164},	// QCPAbstractPlottable::selectTest#$
    {6, 1238, 135},	// QCPAbstractPlottable::selectTest#$#
    {6, 1239, 120},	// QCPAbstractPlottable::selectable
    {6, 1241, 142},	// QCPAbstractPlottable::selectableChanged$
    {6, 1243, 121},	// QCPAbstractPlottable::selected
    {6, 1247, 117},	// QCPAbstractPlottable::selectedBrush
    {6, 1257, 115},	// QCPAbstractPlottable::selectedPen
    {6, 1264, 145},	// QCPAbstractPlottable::selectionCategory
    {6, 1266, 141},	// QCPAbstractPlottable::selectionChanged$
    {6, 1279, 125},	// QCPAbstractPlottable::setAntialiasedErrorBars$
    {6, 1281, 123},	// QCPAbstractPlottable::setAntialiasedFill$
    {6, 1283, 124},	// QCPAbstractPlottable::setAntialiasedScatters$
    {6, 1327, 128},	// QCPAbstractPlottable::setBrush#
    {6, 1442, 130},	// QCPAbstractPlottable::setKeyAxis#
    {6, 1491, 178},	// QCPAbstractPlottable::setMAntialiasedErrorBars$
    {6, 1493, 174},	// QCPAbstractPlottable::setMAntialiasedFill$
    {6, 1495, 176},	// QCPAbstractPlottable::setMAntialiasedScatters$
    {6, 1552, 184},	// QCPAbstractPlottable::setMBrush#
    {6, 1679, 188},	// QCPAbstractPlottable::setMKeyAxis?
    {6, 1739, 172},	// QCPAbstractPlottable::setMName$
    {6, 1782, 180},	// QCPAbstractPlottable::setMPen#
    {6, 1854, 192},	// QCPAbstractPlottable::setMSelectable$
    {6, 1858, 194},	// QCPAbstractPlottable::setMSelected$
    {6, 1864, 186},	// QCPAbstractPlottable::setMSelectedBrush#
    {6, 1878, 182},	// QCPAbstractPlottable::setMSelectedPen#
    {6, 1952, 190},	// QCPAbstractPlottable::setMValueAxis?
    {6, 2001, 122},	// QCPAbstractPlottable::setName$
    {6, 2038, 126},	// QCPAbstractPlottable::setPen#
    {6, 2101, 132},	// QCPAbstractPlottable::setSelectable$
    {6, 2105, 133},	// QCPAbstractPlottable::setSelected$
    {6, 2111, 129},	// QCPAbstractPlottable::setSelectedBrush#
    {6, 2125, 127},	// QCPAbstractPlottable::setSelectedPen#
    {6, 2224, 131},	// QCPAbstractPlottable::setValueAxis#
    {6, 2299, 170},	// QCPAbstractPlottable::staticMetaObject
    {6, 2385, 162},	// QCPAbstractPlottable::tr$
    {6, 2386, 104},	// QCPAbstractPlottable::tr$$
    {6, 2387, 106},	// QCPAbstractPlottable::tr$$$
    {6, 2389, 163},	// QCPAbstractPlottable::trUtf8$
    {6, 2390, 105},	// QCPAbstractPlottable::trUtf8$$
    {6, 2391, 107},	// QCPAbstractPlottable::trUtf8$$$
    {6, 2436, 119},	// QCPAbstractPlottable::valueAxis
    {6, 2466, 198},	// QCPAbstractPlottable::~QCPAbstractPlottable
    {7, 11, 206},	// QCPAxis::QCPAxis#$
    {7, 190, 339},	// QCPAxis::applyDefaultAntialiasingHint#
    {7, 200, 465},	// QCPAxis::atBottom
    {7, 201, 462},	// QCPAxis::atLeft
    {7, 202, 463},	// QCPAxis::atRight
    {7, 203, 464},	// QCPAxis::atTop
    {7, 206, 217},	// QCPAxis::autoSubTicks
    {7, 207, 214},	// QCPAxis::autoTickCount
    {7, 208, 215},	// QCPAxis::autoTickLabels
    {7, 209, 216},	// QCPAxis::autoTickStep
    {7, 210, 213},	// QCPAxis::autoTicks
    {7, 222, 208},	// QCPAxis::axisRect
    {7, 228, 207},	// QCPAxis::axisType
    {7, 239, 345},	// QCPAxis::baseLog$
    {7, 240, 238},	// QCPAxis::basePen
    {7, 242, 346},	// QCPAxis::basePow$
    {7, 266, 337},	// QCPAxis::calculateAutoSubTickCount$
    {7, 267, 338},	// QCPAxis::calculateMargin
    {7, 320, 321},	// QCPAxis::coordToPixel$
    {7, 345, 226},	// QCPAxis::dateTimeFormat
    {7, 346, 227},	// QCPAxis::dateTimeSpec
    {7, 351, 343},	// QCPAxis::deselectEvent$
    {7, 362, 340},	// QCPAxis::draw#
    {7, 463, 336},	// QCPAxis::generateAutoTicks
    {7, 466, 347},	// QCPAxis::getBasePen
    {7, 484, 353},	// QCPAxis::getLabelColor
    {7, 485, 351},	// QCPAxis::getLabelFont
    {7, 497, 322},	// QCPAxis::getPartAt#
    {7, 524, 349},	// QCPAxis::getSubTickPen
    {7, 528, 352},	// QCPAxis::getTickLabelColor
    {7, 529, 350},	// QCPAxis::getTickLabelFont
    {7, 530, 348},	// QCPAxis::getTickPen
    {7, 560, 324},	// QCPAxis::graphs
    {7, 561, 258},	// QCPAxis::grid
    {7, 621, 325},	// QCPAxis::items
    {7, 632, 243},	// QCPAxis::label
    {7, 633, 242},	// QCPAxis::labelColor
    {7, 634, 241},	// QCPAxis::labelFont
    {7, 635, 244},	// QCPAxis::labelPadding
    {7, 667, 256},	// QCPAxis::lowerEnding
    {7, 676, 468},	// QCPAxis::lsInside
    {7, 679, 469},	// QCPAxis::lsOutside
    {7, 683, 467},	// QCPAxis::ltDateTime
    {7, 684, 466},	// QCPAxis::ltNumber
    {7, 700, 424},	// QCPAxis::mAutoSubTicks
    {7, 701, 418},	// QCPAxis::mAutoTickCount
    {7, 702, 390},	// QCPAxis::mAutoTickLabels
    {7, 703, 422},	// QCPAxis::mAutoTickStep
    {7, 704, 420},	// QCPAxis::mAutoTicks
    {7, 706, 446},	// QCPAxis::mAxisPainter
    {7, 707, 364},	// QCPAxis::mAxisRect
    {7, 708, 362},	// QCPAxis::mAxisType
    {7, 718, 374},	// QCPAxis::mBasePen
    {7, 724, 460},	// QCPAxis::mCachedMargin
    {7, 725, 458},	// QCPAxis::mCachedMarginValid
    {7, 749, 402},	// QCPAxis::mDateTimeFormat
    {7, 750, 404},	// QCPAxis::mDateTimeSpec
    {7, 765, 444},	// QCPAxis::mGrid
    {7, 767, 450},	// QCPAxis::mHighestVisibleTick
    {7, 787, 378},	// QCPAxis::mLabel
    {7, 788, 384},	// QCPAxis::mLabelColor
    {7, 789, 380},	// QCPAxis::mLabelFont
    {7, 797, 448},	// QCPAxis::mLowestVisibleTick
    {7, 818, 410},	// QCPAxis::mNumberBeautifulPowers
    {7, 819, 408},	// QCPAxis::mNumberFormatChar
    {7, 820, 406},	// QCPAxis::mNumberPrecision
    {7, 821, 368},	// QCPAxis::mOrientation
    {7, 825, 366},	// QCPAxis::mPadding
    {7, 849, 434},	// QCPAxis::mRange
    {7, 853, 436},	// QCPAxis::mRangeReversed
    {7, 864, 440},	// QCPAxis::mScaleLogBase
    {7, 865, 442},	// QCPAxis::mScaleLogBaseLogInv
    {7, 866, 438},	// QCPAxis::mScaleType
    {7, 872, 370},	// QCPAxis::mSelectableParts
    {7, 874, 376},	// QCPAxis::mSelectedBasePen
    {7, 880, 386},	// QCPAxis::mSelectedLabelColor
    {7, 881, 382},	// QCPAxis::mSelectedLabelFont
    {7, 882, 372},	// QCPAxis::mSelectedParts
    {7, 884, 432},	// QCPAxis::mSelectedSubTickPen
    {7, 886, 400},	// QCPAxis::mSelectedTickLabelColor
    {7, 887, 396},	// QCPAxis::mSelectedTickLabelFont
    {7, 888, 428},	// QCPAxis::mSelectedTickPen
    {7, 897, 416},	// QCPAxis::mSubTickCount
    {7, 898, 430},	// QCPAxis::mSubTickPen
    {7, 899, 456},	// QCPAxis::mSubTickVector
    {7, 905, 398},	// QCPAxis::mTickLabelColor
    {7, 906, 394},	// QCPAxis::mTickLabelFont
    {7, 907, 392},	// QCPAxis::mTickLabelType
    {7, 908, 388},	// QCPAxis::mTickLabels
    {7, 909, 426},	// QCPAxis::mTickPen
    {7, 910, 414},	// QCPAxis::mTickStep
    {7, 911, 452},	// QCPAxis::mTickVector
    {7, 912, 454},	// QCPAxis::mTickVectorLabels
    {7, 913, 412},	// QCPAxis::mTicks
    {7, 941, 326},	// QCPAxis::marginSideToAxisType$
    {7, 961, 199},	// QCPAxis::metaObject
    {7, 996, 316},	// QCPAxis::moveRange$
    {7, 1010, 228},	// QCPAxis::numberFormat
    {7, 1011, 229},	// QCPAxis::numberPrecision
    {7, 1014, 246},	// QCPAxis::offset
    {7, 1045, 328},	// QCPAxis::opposite$
    {7, 1046, 315},	// QCPAxis::orientation
    {7, 1047, 327},	// QCPAxis::orientation$
    {7, 1051, 245},	// QCPAxis::padding
    {7, 1070, 320},	// QCPAxis::pixelToCoord$
    {7, 1086, 323},	// QCPAxis::plottables
    {7, 1102, 205},	// QCPAxis::qt_metacall$$?
    {7, 1104, 200},	// QCPAxis::qt_metacast$
    {7, 1105, 211},	// QCPAxis::range
    {7, 1107, 330},	// QCPAxis::rangeChanged#
    {7, 1108, 331},	// QCPAxis::rangeChanged##
    {7, 1112, 212},	// QCPAxis::rangeReversed
    {7, 1164, 360},	// QCPAxis::rescale
    {7, 1165, 319},	// QCPAxis::rescale$
    {7, 1221, 210},	// QCPAxis::scaleLogBase
    {7, 1223, 317},	// QCPAxis::scaleRange$$
    {7, 1224, 209},	// QCPAxis::scaleType
    {7, 1226, 332},	// QCPAxis::scaleTypeChanged$
    {7, 1235, 342},	// QCPAxis::selectEvent#$#$
    {7, 1237, 358},	// QCPAxis::selectTest#$
    {7, 1238, 314},	// QCPAxis::selectTest#$#
    {7, 1241, 334},	// QCPAxis::selectableChanged$
    {7, 1242, 248},	// QCPAxis::selectableParts
    {7, 1245, 253},	// QCPAxis::selectedBasePen
    {7, 1253, 252},	// QCPAxis::selectedLabelColor
    {7, 1254, 250},	// QCPAxis::selectedLabelFont
    {7, 1256, 247},	// QCPAxis::selectedParts
    {7, 1259, 255},	// QCPAxis::selectedSubTickPen
    {7, 1261, 251},	// QCPAxis::selectedTickLabelColor
    {7, 1262, 249},	// QCPAxis::selectedTickLabelFont
    {7, 1263, 254},	// QCPAxis::selectedTickPen
    {7, 1264, 341},	// QCPAxis::selectionCategory
    {7, 1266, 333},	// QCPAxis::selectionChanged$
    {7, 1295, 271},	// QCPAxis::setAutoSubTicks$
    {7, 1297, 268},	// QCPAxis::setAutoTickCount$
    {7, 1299, 269},	// QCPAxis::setAutoTickLabels$
    {7, 1301, 270},	// QCPAxis::setAutoTickStep$
    {7, 1303, 267},	// QCPAxis::setAutoTicks$
    {7, 1321, 294},	// QCPAxis::setBasePen#
    {7, 1392, 280},	// QCPAxis::setDateTimeFormat$
    {7, 1394, 281},	// QCPAxis::setDateTimeSpec$
    {7, 1452, 299},	// QCPAxis::setLabel$
    {7, 1454, 298},	// QCPAxis::setLabelColor#
    {7, 1456, 297},	// QCPAxis::setLabelFont#
    {7, 1458, 300},	// QCPAxis::setLabelPadding$
    {7, 1475, 312},	// QCPAxis::setLowerEnding#
    {7, 1509, 425},	// QCPAxis::setMAutoSubTicks$
    {7, 1511, 419},	// QCPAxis::setMAutoTickCount$
    {7, 1513, 391},	// QCPAxis::setMAutoTickLabels$
    {7, 1515, 423},	// QCPAxis::setMAutoTickStep$
    {7, 1517, 421},	// QCPAxis::setMAutoTicks$
    {7, 1521, 447},	// QCPAxis::setMAxisPainter#
    {7, 1523, 365},	// QCPAxis::setMAxisRect#
    {7, 1526, 363},	// QCPAxis::setMAxisType$
    {7, 1546, 375},	// QCPAxis::setMBasePen#
    {7, 1558, 461},	// QCPAxis::setMCachedMargin$
    {7, 1560, 459},	// QCPAxis::setMCachedMarginValid$
    {7, 1609, 403},	// QCPAxis::setMDateTimeFormat$
    {7, 1611, 405},	// QCPAxis::setMDateTimeSpec$
    {7, 1641, 445},	// QCPAxis::setMGrid#
    {7, 1645, 451},	// QCPAxis::setMHighestVisibleTick$
    {7, 1685, 379},	// QCPAxis::setMLabel$
    {7, 1687, 385},	// QCPAxis::setMLabelColor#
    {7, 1689, 381},	// QCPAxis::setMLabelFont#
    {7, 1705, 449},	// QCPAxis::setMLowestVisibleTick$
    {7, 1747, 411},	// QCPAxis::setMNumberBeautifulPowers$
    {7, 1749, 409},	// QCPAxis::setMNumberFormatChar#
    {7, 1751, 407},	// QCPAxis::setMNumberPrecision$
    {7, 1753, 369},	// QCPAxis::setMOrientation$
    {7, 1762, 367},	// QCPAxis::setMPadding$
    {7, 1810, 435},	// QCPAxis::setMRange#
    {7, 1818, 437},	// QCPAxis::setMRangeReversed$
    {7, 1840, 441},	// QCPAxis::setMScaleLogBase$
    {7, 1842, 443},	// QCPAxis::setMScaleLogBaseLogInv$
    {7, 1844, 439},	// QCPAxis::setMScaleType$
    {7, 1856, 371},	// QCPAxis::setMSelectableParts$
    {7, 1860, 377},	// QCPAxis::setMSelectedBasePen#
    {7, 1872, 387},	// QCPAxis::setMSelectedLabelColor#
    {7, 1874, 383},	// QCPAxis::setMSelectedLabelFont#
    {7, 1876, 373},	// QCPAxis::setMSelectedParts$
    {7, 1880, 433},	// QCPAxis::setMSelectedSubTickPen#
    {7, 1884, 401},	// QCPAxis::setMSelectedTickLabelColor#
    {7, 1886, 397},	// QCPAxis::setMSelectedTickLabelFont#
    {7, 1888, 429},	// QCPAxis::setMSelectedTickPen#
    {7, 1906, 417},	// QCPAxis::setMSubTickCount$
    {7, 1908, 431},	// QCPAxis::setMSubTickPen#
    {7, 1910, 457},	// QCPAxis::setMSubTickVector?
    {7, 1922, 399},	// QCPAxis::setMTickLabelColor#
    {7, 1924, 395},	// QCPAxis::setMTickLabelFont#
    {7, 1926, 393},	// QCPAxis::setMTickLabelType$
    {7, 1928, 389},	// QCPAxis::setMTickLabels$
    {7, 1930, 427},	// QCPAxis::setMTickPen#
    {7, 1932, 415},	// QCPAxis::setMTickStep$
    {7, 1934, 453},	// QCPAxis::setMTickVector?
    {7, 1936, 455},	// QCPAxis::setMTickVectorLabels?
    {7, 1938, 413},	// QCPAxis::setMTicks$
    {7, 2010, 282},	// QCPAxis::setNumberFormat$
    {7, 2012, 283},	// QCPAxis::setNumberPrecision$
    {7, 2014, 302},	// QCPAxis::setOffset$
    {7, 2025, 301},	// QCPAxis::setPadding$
    {7, 2058, 261},	// QCPAxis::setRange#
    {7, 2060, 262},	// QCPAxis::setRange$$
    {7, 2061, 263},	// QCPAxis::setRange$$$
    {7, 2067, 264},	// QCPAxis::setRangeLower$
    {7, 2069, 266},	// QCPAxis::setRangeReversed$
    {7, 2071, 265},	// QCPAxis::setRangeUpper$
    {7, 2088, 260},	// QCPAxis::setScaleLogBase$
    {7, 2090, 359},	// QCPAxis::setScaleRatio#
    {7, 2091, 318},	// QCPAxis::setScaleRatio#$
    {7, 2093, 259},	// QCPAxis::setScaleType$
    {7, 2103, 310},	// QCPAxis::setSelectableParts#
    {7, 2107, 307},	// QCPAxis::setSelectedBasePen#
    {7, 2119, 306},	// QCPAxis::setSelectedLabelColor#
    {7, 2121, 304},	// QCPAxis::setSelectedLabelFont#
    {7, 2123, 311},	// QCPAxis::setSelectedParts#
    {7, 2127, 309},	// QCPAxis::setSelectedSubTickPen#
    {7, 2131, 305},	// QCPAxis::setSelectedTickLabelColor#
    {7, 2133, 303},	// QCPAxis::setSelectedTickLabelFont#
    {7, 2135, 308},	// QCPAxis::setSelectedTickPen#
    {7, 2154, 290},	// QCPAxis::setSubTickCount$
    {7, 2156, 357},	// QCPAxis::setSubTickLength$
    {7, 2157, 291},	// QCPAxis::setSubTickLength$$
    {7, 2159, 292},	// QCPAxis::setSubTickLengthIn$
    {7, 2161, 293},	// QCPAxis::setSubTickLengthOut$
    {7, 2163, 296},	// QCPAxis::setSubTickPen#
    {7, 2175, 277},	// QCPAxis::setTickLabelColor#
    {7, 2177, 276},	// QCPAxis::setTickLabelFont#
    {7, 2179, 274},	// QCPAxis::setTickLabelPadding$
    {7, 2181, 278},	// QCPAxis::setTickLabelRotation$
    {7, 2183, 279},	// QCPAxis::setTickLabelSide$
    {7, 2185, 275},	// QCPAxis::setTickLabelType$
    {7, 2187, 273},	// QCPAxis::setTickLabels$
    {7, 2189, 356},	// QCPAxis::setTickLength$
    {7, 2190, 287},	// QCPAxis::setTickLength$$
    {7, 2192, 288},	// QCPAxis::setTickLengthIn$
    {7, 2194, 289},	// QCPAxis::setTickLengthOut$
    {7, 2196, 295},	// QCPAxis::setTickPen#
    {7, 2198, 284},	// QCPAxis::setTickStep$
    {7, 2200, 285},	// QCPAxis::setTickVector?
    {7, 2202, 286},	// QCPAxis::setTickVectorLabels?
    {7, 2204, 272},	// QCPAxis::setTicks$
    {7, 2218, 313},	// QCPAxis::setUpperEnding#
    {7, 2259, 335},	// QCPAxis::setupTickVectors
    {7, 2268, 473},	// QCPAxis::spAxis
    {7, 2269, 475},	// QCPAxis::spAxisLabel
    {7, 2272, 472},	// QCPAxis::spNone
    {7, 2273, 474},	// QCPAxis::spTickLabels
    {7, 2296, 470},	// QCPAxis::stLinear
    {7, 2297, 471},	// QCPAxis::stLogarithmic
    {7, 2299, 361},	// QCPAxis::staticMetaObject
    {7, 2334, 235},	// QCPAxis::subTickCount
    {7, 2335, 236},	// QCPAxis::subTickLengthIn
    {7, 2336, 237},	// QCPAxis::subTickLengthOut
    {7, 2337, 240},	// QCPAxis::subTickPen
    {7, 2348, 223},	// QCPAxis::tickLabelColor
    {7, 2349, 222},	// QCPAxis::tickLabelFont
    {7, 2350, 220},	// QCPAxis::tickLabelPadding
    {7, 2351, 224},	// QCPAxis::tickLabelRotation
    {7, 2352, 225},	// QCPAxis::tickLabelSide
    {7, 2353, 221},	// QCPAxis::tickLabelType
    {7, 2354, 219},	// QCPAxis::tickLabels
    {7, 2355, 233},	// QCPAxis::tickLengthIn
    {7, 2356, 234},	// QCPAxis::tickLengthOut
    {7, 2357, 239},	// QCPAxis::tickPen
    {7, 2358, 230},	// QCPAxis::tickStep
    {7, 2359, 231},	// QCPAxis::tickVector
    {7, 2360, 232},	// QCPAxis::tickVectorLabels
    {7, 2361, 218},	// QCPAxis::ticks
    {7, 2362, 329},	// QCPAxis::ticksRequest
    {7, 2385, 354},	// QCPAxis::tr$
    {7, 2386, 201},	// QCPAxis::tr$$
    {7, 2387, 203},	// QCPAxis::tr$$$
    {7, 2389, 355},	// QCPAxis::trUtf8$
    {7, 2390, 202},	// QCPAxis::trUtf8$$
    {7, 2391, 204},	// QCPAxis::trUtf8$$$
    {7, 2424, 257},	// QCPAxis::upperEnding
    {7, 2444, 344},	// QCPAxis::visibleTickBounds$$
    {7, 2467, 476},	// QCPAxis::~QCPAxis
    {9, 13, 541},	// QCPAxisRect::QCPAxisRect#
    {9, 14, 484},	// QCPAxisRect::QCPAxisRect#$
    {9, 118, 509},	// QCPAxisRect::addAxes$
    {9, 120, 544},	// QCPAxisRect::addAxis$
    {9, 121, 508},	// QCPAxisRect::addAxis$#
    {9, 190, 530},	// QCPAxisRect::applyDefaultAntialiasingHint#
    {9, 211, 507},	// QCPAxisRect::axes
    {9, 212, 506},	// QCPAxisRect::axes$
    {9, 214, 543},	// QCPAxisRect::axis$
    {9, 215, 505},	// QCPAxisRect::axis$$
    {9, 219, 504},	// QCPAxisRect::axisCount$
    {9, 229, 485},	// QCPAxisRect::background
    {9, 230, 486},	// QCPAxisRect::backgroundScaled
    {9, 231, 487},	// QCPAxisRect::backgroundScaledMode
    {9, 252, 519},	// QCPAxisRect::bottom
    {9, 253, 525},	// QCPAxisRect::bottomLeft
    {9, 254, 526},	// QCPAxisRect::bottomRight
    {9, 264, 532},	// QCPAxisRect::calculateAutoMargin$
    {9, 274, 527},	// QCPAxisRect::center
    {9, 362, 531},	// QCPAxisRect::draw#
    {9, 366, 537},	// QCPAxisRect::drawBackground#
    {9, 409, 529},	// QCPAxisRect::elements$
    {9, 560, 514},	// QCPAxisRect::graphs
    {9, 573, 521},	// QCPAxisRect::height
    {9, 595, 511},	// QCPAxisRect::insetLayout
    {9, 621, 515},	// QCPAxisRect::items
    {9, 649, 516},	// QCPAxisRect::left
    {9, 685, 579},	// QCPAxisRect::mAADragBackup
    {9, 705, 587},	// QCPAxisRect::mAxes
    {9, 709, 547},	// QCPAxisRect::mBackgroundBrush
    {9, 710, 549},	// QCPAxisRect::mBackgroundPixmap
    {9, 711, 553},	// QCPAxisRect::mBackgroundScaled
    {9, 712, 555},	// QCPAxisRect::mBackgroundScaledMode
    {9, 751, 583},	// QCPAxisRect::mDragStart
    {9, 752, 575},	// QCPAxisRect::mDragStartHorzRange
    {9, 753, 577},	// QCPAxisRect::mDragStartVertRange
    {9, 754, 585},	// QCPAxisRect::mDragging
    {9, 773, 557},	// QCPAxisRect::mInsetLayout
    {9, 816, 581},	// QCPAxisRect::mNotAADragBackup
    {9, 850, 559},	// QCPAxisRect::mRangeDrag
    {9, 851, 563},	// QCPAxisRect::mRangeDragHorzAxis
    {9, 852, 565},	// QCPAxisRect::mRangeDragVertAxis
    {9, 854, 561},	// QCPAxisRect::mRangeZoom
    {9, 855, 571},	// QCPAxisRect::mRangeZoomFactorHorz
    {9, 856, 573},	// QCPAxisRect::mRangeZoomFactorVert
    {9, 857, 567},	// QCPAxisRect::mRangeZoomHorzAxis
    {9, 858, 569},	// QCPAxisRect::mRangeZoomVertAxis
    {9, 868, 551},	// QCPAxisRect::mScaledBackgroundPixmap
    {9, 961, 477},	// QCPAxisRect::metaObject
    {9, 976, 534},	// QCPAxisRect::mouseMoveEvent#
    {9, 980, 533},	// QCPAxisRect::mousePressEvent#
    {9, 984, 535},	// QCPAxisRect::mouseReleaseEvent#
    {9, 1086, 513},	// QCPAxisRect::plottables
    {9, 1102, 483},	// QCPAxisRect::qt_metacall$$?
    {9, 1104, 478},	// QCPAxisRect::qt_metacast$
    {9, 1109, 488},	// QCPAxisRect::rangeDrag
    {9, 1111, 490},	// QCPAxisRect::rangeDragAxis$
    {9, 1113, 489},	// QCPAxisRect::rangeZoom
    {9, 1115, 491},	// QCPAxisRect::rangeZoomAxis$
    {9, 1117, 492},	// QCPAxisRect::rangeZoomFactor$
    {9, 1133, 510},	// QCPAxisRect::removeAxis#
    {9, 1182, 517},	// QCPAxisRect::right
    {9, 1309, -26},	// QCPAxisRect::setBackground#
    {9, 1310, 542},	// QCPAxisRect::setBackground#$
    {9, 1311, 494},	// QCPAxisRect::setBackground#$$
    {9, 1313, 496},	// QCPAxisRect::setBackgroundScaled$
    {9, 1315, 497},	// QCPAxisRect::setBackgroundScaledMode$
    {9, 1479, 580},	// QCPAxisRect::setMAADragBackup$
    {9, 1519, 588},	// QCPAxisRect::setMAxes?
    {9, 1528, 548},	// QCPAxisRect::setMBackgroundBrush#
    {9, 1530, 550},	// QCPAxisRect::setMBackgroundPixmap#
    {9, 1532, 554},	// QCPAxisRect::setMBackgroundScaled$
    {9, 1534, 556},	// QCPAxisRect::setMBackgroundScaledMode$
    {9, 1613, 584},	// QCPAxisRect::setMDragStart#
    {9, 1615, 576},	// QCPAxisRect::setMDragStartHorzRange#
    {9, 1617, 578},	// QCPAxisRect::setMDragStartVertRange#
    {9, 1619, 586},	// QCPAxisRect::setMDragging$
    {9, 1657, 558},	// QCPAxisRect::setMInsetLayout#
    {9, 1743, 582},	// QCPAxisRect::setMNotAADragBackup$
    {9, 1812, 560},	// QCPAxisRect::setMRangeDrag$
    {9, 1814, 564},	// QCPAxisRect::setMRangeDragHorzAxis?
    {9, 1816, 566},	// QCPAxisRect::setMRangeDragVertAxis?
    {9, 1820, 562},	// QCPAxisRect::setMRangeZoom$
    {9, 1822, 572},	// QCPAxisRect::setMRangeZoomFactorHorz$
    {9, 1824, 574},	// QCPAxisRect::setMRangeZoomFactorVert$
    {9, 1826, 568},	// QCPAxisRect::setMRangeZoomHorzAxis?
    {9, 1828, 570},	// QCPAxisRect::setMRangeZoomVertAxis?
    {9, 1848, 552},	// QCPAxisRect::setMScaledBackgroundPixmap#
    {9, 2063, 498},	// QCPAxisRect::setRangeDrag$
    {9, 2065, 500},	// QCPAxisRect::setRangeDragAxes##
    {9, 2073, 499},	// QCPAxisRect::setRangeZoom$
    {9, 2075, 501},	// QCPAxisRect::setRangeZoomAxes##
    {9, 2077, 503},	// QCPAxisRect::setRangeZoomFactor$
    {9, 2078, 502},	// QCPAxisRect::setRangeZoomFactor$$
    {9, 2257, 545},	// QCPAxisRect::setupFullAxesBox
    {9, 2258, 512},	// QCPAxisRect::setupFullAxesBox$
    {9, 2265, 522},	// QCPAxisRect::size
    {9, 2299, 546},	// QCPAxisRect::staticMetaObject
    {9, 2381, 518},	// QCPAxisRect::top
    {9, 2382, 523},	// QCPAxisRect::topLeft
    {9, 2383, 524},	// QCPAxisRect::topRight
    {9, 2385, 539},	// QCPAxisRect::tr$
    {9, 2386, 479},	// QCPAxisRect::tr$$
    {9, 2387, 481},	// QCPAxisRect::tr$$$
    {9, 2389, 540},	// QCPAxisRect::trUtf8$
    {9, 2390, 480},	// QCPAxisRect::trUtf8$$
    {9, 2391, 482},	// QCPAxisRect::trUtf8$$$
    {9, 2408, 528},	// QCPAxisRect::update$
    {9, 2410, 538},	// QCPAxisRect::updateAxesOffset$
    {9, 2446, 536},	// QCPAxisRect::wheelEvent#
    {9, 2450, 520},	// QCPAxisRect::width
    {9, 2468, 589},	// QCPAxisRect::~QCPAxisRect
    {10, 15, 590},	// QCPBarData::QCPBarData
    {10, 16, 592},	// QCPBarData::QCPBarData#
    {10, 17, 591},	// QCPBarData::QCPBarData$$
    {10, 622, 593},	// QCPBarData::key
    {10, 1440, 594},	// QCPBarData::setKey$
    {10, 2222, 596},	// QCPBarData::setValue$
    {10, 2435, 595},	// QCPBarData::value
    {10, 2469, 597},	// QCPBarData::~QCPBarData
    {11, 19, 605},	// QCPBars::QCPBars##
    {11, 130, 622},	// QCPBars::addData#
    {11, 131, 623},	// QCPBars::addData$$
    {11, 134, 621},	// QCPBars::addData?
    {11, 135, 624},	// QCPBars::addData??
    {11, 232, 611},	// QCPBars::barAbove
    {11, 233, 610},	// QCPBars::barBelow
    {11, 237, 608},	// QCPBars::barsGroup
    {11, 243, 609},	// QCPBars::baseValue
    {11, 285, 629},	// QCPBars::clearData
    {11, 311, 639},	// QCPBars::connectBars##
    {11, 336, 612},	// QCPBars::data
    {11, 362, 631},	// QCPBars::draw#
    {11, 378, 632},	// QCPBars::drawLegendIcon##
    {11, 465, 636},	// QCPBars::getBarPolygon$$
    {11, 481, 644},	// QCPBars::getKeyRange$
    {11, 482, 633},	// QCPBars::getKeyRange$$
    {11, 501, 637},	// QCPBars::getPixelWidth$$$
    {11, 517, 638},	// QCPBars::getStackedBaseValue$$
    {11, 536, 645},	// QCPBars::getValueRange$
    {11, 537, 634},	// QCPBars::getValueRange$$
    {11, 540, 635},	// QCPBars::getVisibleDataBounds??
    {11, 713, 659},	// QCPBars::mBarAbove
    {11, 714, 657},	// QCPBars::mBarBelow
    {11, 717, 653},	// QCPBars::mBarsGroup
    {11, 719, 655},	// QCPBars::mBaseValue
    {11, 744, 647},	// QCPBars::mData
    {11, 928, 649},	// QCPBars::mWidth
    {11, 929, 651},	// QCPBars::mWidthType
    {11, 961, 598},	// QCPBars::metaObject
    {11, 988, 620},	// QCPBars::moveAbove#
    {11, 990, 619},	// QCPBars::moveBelow#
    {11, 1102, 604},	// QCPBars::qt_metacall$$?
    {11, 1104, 599},	// QCPBars::qt_metacast$
    {11, 1142, 628},	// QCPBars::removeData$
    {11, 1143, 627},	// QCPBars::removeData$$
    {11, 1145, 626},	// QCPBars::removeDataAfter$
    {11, 1147, 625},	// QCPBars::removeDataBefore$
    {11, 1237, 643},	// QCPBars::selectTest#$
    {11, 1238, 630},	// QCPBars::selectTest#$#
    {11, 1319, 615},	// QCPBars::setBarsGroup#
    {11, 1323, 616},	// QCPBars::setBaseValue$
    {11, 1373, 642},	// QCPBars::setData?
    {11, 1374, 617},	// QCPBars::setData?$
    {11, 1375, 618},	// QCPBars::setData??
    {11, 1536, 660},	// QCPBars::setMBarAbove?
    {11, 1538, 658},	// QCPBars::setMBarBelow?
    {11, 1544, 654},	// QCPBars::setMBarsGroup#
    {11, 1548, 656},	// QCPBars::setMBaseValue$
    {11, 1599, 648},	// QCPBars::setMData?
    {11, 1968, 650},	// QCPBars::setMWidth$
    {11, 1970, 652},	// QCPBars::setMWidthType$
    {11, 2244, 613},	// QCPBars::setWidth$
    {11, 2246, 614},	// QCPBars::setWidthType$
    {11, 2299, 646},	// QCPBars::staticMetaObject
    {11, 2385, 640},	// QCPBars::tr$
    {11, 2386, 600},	// QCPBars::tr$$
    {11, 2387, 602},	// QCPBars::tr$$$
    {11, 2389, 641},	// QCPBars::trUtf8$
    {11, 2390, 601},	// QCPBars::trUtf8$$
    {11, 2391, 603},	// QCPBars::trUtf8$$$
    {11, 2450, 606},	// QCPBars::width
    {11, 2451, 607},	// QCPBars::widthType
    {11, 2455, 661},	// QCPBars::wtAbsolute
    {11, 2456, 662},	// QCPBars::wtAxisRectRatio
    {11, 2457, 663},	// QCPBars::wtPlotCoords
    {11, 2470, 664},	// QCPBars::~QCPBars
    {12, 21, 672},	// QCPBarsGroup::QCPBarsGroup#
    {12, 186, 683},	// QCPBarsGroup::append#
    {12, 235, 677},	// QCPBarsGroup::bars
    {12, 236, 678},	// QCPBarsGroup::bars$
    {12, 283, 681},	// QCPBarsGroup::clear
    {12, 314, 682},	// QCPBarsGroup::contains#
    {12, 499, 689},	// QCPBarsGroup::getPixelSpacing#$
    {12, 588, 684},	// QCPBarsGroup::insert$#
    {12, 606, 680},	// QCPBarsGroup::isEmpty
    {12, 627, 688},	// QCPBarsGroup::keyPixelOffset#$
    {12, 716, 699},	// QCPBarsGroup::mBars
    {12, 834, 693},	// QCPBarsGroup::mParentPlot
    {12, 892, 697},	// QCPBarsGroup::mSpacing
    {12, 893, 695},	// QCPBarsGroup::mSpacingType
    {12, 961, 665},	// QCPBarsGroup::metaObject
    {12, 1102, 671},	// QCPBarsGroup::qt_metacall$$?
    {12, 1104, 666},	// QCPBarsGroup::qt_metacast$
    {12, 1125, 686},	// QCPBarsGroup::registerBars#
    {12, 1129, 685},	// QCPBarsGroup::remove#
    {12, 1542, 700},	// QCPBarsGroup::setMBars?
    {12, 1780, 694},	// QCPBarsGroup::setMParentPlot#
    {12, 1896, 698},	// QCPBarsGroup::setMSpacing$
    {12, 1898, 696},	// QCPBarsGroup::setMSpacingType$
    {12, 2144, 676},	// QCPBarsGroup::setSpacing$
    {12, 2146, 675},	// QCPBarsGroup::setSpacingType$
    {12, 2265, 679},	// QCPBarsGroup::size
    {12, 2274, 674},	// QCPBarsGroup::spacing
    {12, 2275, 673},	// QCPBarsGroup::spacingType
    {12, 2294, 701},	// QCPBarsGroup::stAbsolute
    {12, 2295, 702},	// QCPBarsGroup::stAxisRectRatio
    {12, 2298, 703},	// QCPBarsGroup::stPlotCoords
    {12, 2299, 692},	// QCPBarsGroup::staticMetaObject
    {12, 2385, 690},	// QCPBarsGroup::tr$
    {12, 2386, 667},	// QCPBarsGroup::tr$$
    {12, 2387, 669},	// QCPBarsGroup::tr$$$
    {12, 2389, 691},	// QCPBarsGroup::trUtf8$
    {12, 2390, 668},	// QCPBarsGroup::trUtf8$$
    {12, 2391, 670},	// QCPBarsGroup::trUtf8$$$
    {12, 2403, 687},	// QCPBarsGroup::unregisterBars#
    {12, 2471, 704},	// QCPBarsGroup::~QCPBarsGroup
    {13, 22, 724},	// QCPColorGradient::QCPColorGradient
    {13, 23, 723},	// QCPColorGradient::QCPColorGradient#
    {13, 24, 705},	// QCPColorGradient::QCPColorGradient$
    {13, 281, 742},	// QCPColorGradient::ciHSV
    {13, 282, 741},	// QCPColorGradient::ciRGB
    {13, 284, 720},	// QCPColorGradient::clearColorStops
    {13, 295, 727},	// QCPColorGradient::color$#
    {13, 296, 718},	// QCPColorGradient::color$#$
    {13, 297, 710},	// QCPColorGradient::colorInterpolation
    {13, 300, 709},	// QCPColorGradient::colorStops
    {13, 302, 725},	// QCPColorGradient::colorize$#$$
    {13, 303, 726},	// QCPColorGradient::colorize$#$$$
    {13, 304, 717},	// QCPColorGradient::colorize$#$$$$
    {13, 541, 747},	// QCPColorGradient::gpCandy
    {13, 542, 745},	// QCPColorGradient::gpCold
    {13, 543, 748},	// QCPColorGradient::gpGeography
    {13, 544, 743},	// QCPColorGradient::gpGrayscale
    {13, 545, 744},	// QCPColorGradient::gpHot
    {13, 546, 754},	// QCPColorGradient::gpHues
    {13, 547, 749},	// QCPColorGradient::gpIon
    {13, 548, 753},	// QCPColorGradient::gpJet
    {13, 549, 746},	// QCPColorGradient::gpNight
    {13, 550, 751},	// QCPColorGradient::gpPolar
    {13, 551, 752},	// QCPColorGradient::gpSpectrum
    {13, 552, 750},	// QCPColorGradient::gpThermal
    {13, 603, 721},	// QCPColorGradient::inverted
    {13, 659, 708},	// QCPColorGradient::levelCount
    {13, 664, 719},	// QCPColorGradient::loadPreset$
    {13, 735, 737},	// QCPColorGradient::mColorBuffer
    {13, 736, 739},	// QCPColorGradient::mColorBufferInvalidated
    {13, 737, 733},	// QCPColorGradient::mColorInterpolation
    {13, 739, 731},	// QCPColorGradient::mColorStops
    {13, 794, 729},	// QCPColorGradient::mLevelCount
    {13, 839, 735},	// QCPColorGradient::mPeriodic
    {13, 1019, 707},	// QCPColorGradient::operator!=#
    {13, 1041, 706},	// QCPColorGradient::operator==#
    {13, 1067, 711},	// QCPColorGradient::periodic
    {13, 1347, 715},	// QCPColorGradient::setColorInterpolation$
    {13, 1351, 714},	// QCPColorGradient::setColorStopAt$#
    {13, 1353, 713},	// QCPColorGradient::setColorStops?
    {13, 1467, 712},	// QCPColorGradient::setLevelCount$
    {13, 1580, 738},	// QCPColorGradient::setMColorBuffer?
    {13, 1582, 740},	// QCPColorGradient::setMColorBufferInvalidated$
    {13, 1584, 734},	// QCPColorGradient::setMColorInterpolation$
    {13, 1588, 732},	// QCPColorGradient::setMColorStops?
    {13, 1699, 730},	// QCPColorGradient::setMLevelCount$
    {13, 1790, 736},	// QCPColorGradient::setMPeriodic$
    {13, 2045, 716},	// QCPColorGradient::setPeriodic$
    {13, 2299, 728},	// QCPColorGradient::staticMetaObject
    {13, 2411, 722},	// QCPColorGradient::updateColorBuffer
    {13, 2472, 755},	// QCPColorGradient::~QCPColorGradient
    {14, 26, 763},	// QCPColorMap::QCPColorMap##
    {14, 285, 780},	// QCPColorMap::clearData
    {14, 299, 770},	// QCPColorMap::colorScale
    {14, 336, 764},	// QCPColorMap::data
    {14, 339, 765},	// QCPColorMap::dataRange
    {14, 341, 782},	// QCPColorMap::dataRangeChanged#
    {14, 342, 766},	// QCPColorMap::dataScaleType
    {14, 344, 783},	// QCPColorMap::dataScaleTypeChanged$
    {14, 362, 786},	// QCPColorMap::draw#
    {14, 378, 787},	// QCPColorMap::drawLegendIcon##
    {14, 481, 797},	// QCPColorMap::getKeyRange$
    {14, 482, 788},	// QCPColorMap::getKeyRange$$
    {14, 536, 798},	// QCPColorMap::getValueRange$
    {14, 537, 789},	// QCPColorMap::getValueRange$$
    {14, 553, 769},	// QCPColorMap::gradient
    {14, 555, 784},	// QCPColorMap::gradientChanged#
    {14, 601, 767},	// QCPColorMap::interpolate
    {14, 738, 812},	// QCPColorMap::mColorScale
    {14, 747, 800},	// QCPColorMap::mDataRange
    {14, 748, 802},	// QCPColorMap::mDataScaleType
    {14, 761, 806},	// QCPColorMap::mGradient
    {14, 777, 808},	// QCPColorMap::mInterpolate
    {14, 792, 816},	// QCPColorMap::mLegendIcon
    {14, 798, 804},	// QCPColorMap::mMapData
    {14, 799, 814},	// QCPColorMap::mMapImage
    {14, 800, 818},	// QCPColorMap::mMapImageInvalidated
    {14, 914, 810},	// QCPColorMap::mTightBoundary
    {14, 961, 756},	// QCPColorMap::metaObject
    {14, 1102, 762},	// QCPColorMap::qt_metacall$$?
    {14, 1104, 757},	// QCPColorMap::qt_metacast$
    {14, 1169, 793},	// QCPColorMap::rescaleDataRange
    {14, 1170, 778},	// QCPColorMap::rescaleDataRange$
    {14, 1237, 796},	// QCPColorMap::selectTest#$
    {14, 1238, 781},	// QCPColorMap::selectTest#$#
    {14, 1349, 777},	// QCPColorMap::setColorScale#
    {14, 1369, 792},	// QCPColorMap::setData#
    {14, 1370, 771},	// QCPColorMap::setData#$
    {14, 1385, 772},	// QCPColorMap::setDataRange#
    {14, 1387, 773},	// QCPColorMap::setDataScaleType$
    {14, 1406, 774},	// QCPColorMap::setGradient#
    {14, 1434, 775},	// QCPColorMap::setInterpolate$
    {14, 1586, 813},	// QCPColorMap::setMColorScale?
    {14, 1605, 801},	// QCPColorMap::setMDataRange#
    {14, 1607, 803},	// QCPColorMap::setMDataScaleType$
    {14, 1633, 807},	// QCPColorMap::setMGradient#
    {14, 1665, 809},	// QCPColorMap::setMInterpolate$
    {14, 1695, 817},	// QCPColorMap::setMLegendIcon#
    {14, 1707, 805},	// QCPColorMap::setMMapData#
    {14, 1709, 815},	// QCPColorMap::setMMapImage#
    {14, 1711, 819},	// QCPColorMap::setMMapImageInvalidated$
    {14, 1940, 811},	// QCPColorMap::setMTightBoundary$
    {14, 2206, 776},	// QCPColorMap::setTightBoundary$
    {14, 2299, 799},	// QCPColorMap::staticMetaObject
    {14, 2363, 768},	// QCPColorMap::tightBoundary
    {14, 2385, 790},	// QCPColorMap::tr$
    {14, 2386, 758},	// QCPColorMap::tr$$
    {14, 2387, 760},	// QCPColorMap::tr$$$
    {14, 2389, 791},	// QCPColorMap::trUtf8$
    {14, 2390, 759},	// QCPColorMap::trUtf8$$
    {14, 2391, 761},	// QCPColorMap::trUtf8$$$
    {14, 2414, 794},	// QCPColorMap::updateLegendIcon
    {14, 2415, 795},	// QCPColorMap::updateLegendIcon$
    {14, 2416, 779},	// QCPColorMap::updateLegendIcon$#
    {14, 2417, 785},	// QCPColorMap::updateMapImage
    {14, 2473, 820},	// QCPColorMap::~QCPColorMap
    {15, 28, 822},	// QCPColorMapData::QCPColorMapData#
    {15, 29, 821},	// QCPColorMapData::QCPColorMapData$$##
    {15, 271, 830},	// QCPColorMapData::cell$$
    {15, 273, 844},	// QCPColorMapData::cellToCoord$$$$
    {15, 283, 840},	// QCPColorMapData::clear
    {15, 318, 843},	// QCPColorMapData::coordToCell$$$$
    {15, 337, 829},	// QCPColorMapData::data$$
    {15, 338, 828},	// QCPColorMapData::dataBounds
    {15, 441, 841},	// QCPColorMapData::fill$
    {15, 606, 842},	// QCPColorMapData::isEmpty
    {15, 629, 826},	// QCPColorMapData::keyRange
    {15, 631, 824},	// QCPColorMapData::keySize
    {15, 744, 855},	// QCPColorMapData::mData
    {15, 745, 857},	// QCPColorMapData::mDataBounds
    {15, 746, 859},	// QCPColorMapData::mDataModified
    {15, 781, 853},	// QCPColorMapData::mIsEmpty
    {15, 785, 849},	// QCPColorMapData::mKeyRange
    {15, 786, 845},	// QCPColorMapData::mKeySize
    {15, 921, 851},	// QCPColorMapData::mValueRange
    {15, 922, 847},	// QCPColorMapData::mValueSize
    {15, 1039, 823},	// QCPColorMapData::operator=#
    {15, 1120, 839},	// QCPColorMapData::recalculateDataBounds
    {15, 1333, 838},	// QCPColorMapData::setCell$$$
    {15, 1371, 837},	// QCPColorMapData::setData$$$
    {15, 1448, 835},	// QCPColorMapData::setKeyRange#
    {15, 1450, 832},	// QCPColorMapData::setKeySize$
    {15, 1598, 856},	// QCPColorMapData::setMData$
    {15, 1601, 858},	// QCPColorMapData::setMDataBounds#
    {15, 1603, 860},	// QCPColorMapData::setMDataModified$
    {15, 1673, 854},	// QCPColorMapData::setMIsEmpty$
    {15, 1681, 850},	// QCPColorMapData::setMKeyRange#
    {15, 1683, 846},	// QCPColorMapData::setMKeySize$
    {15, 1954, 852},	// QCPColorMapData::setMValueRange#
    {15, 1956, 848},	// QCPColorMapData::setMValueSize$
    {15, 2059, 834},	// QCPColorMapData::setRange##
    {15, 2142, 831},	// QCPColorMapData::setSize$$
    {15, 2230, 836},	// QCPColorMapData::setValueRange#
    {15, 2232, 833},	// QCPColorMapData::setValueSize$
    {15, 2439, 827},	// QCPColorMapData::valueRange
    {15, 2440, 825},	// QCPColorMapData::valueSize
    {15, 2474, 861},	// QCPColorMapData::~QCPColorMapData
    {16, 31, 869},	// QCPColorScale::QCPColorScale#
    {16, 190, 893},	// QCPColorScale::applyDefaultAntialiasingHint#
    {16, 213, 870},	// QCPColorScale::axis
    {16, 234, 876},	// QCPColorScale::barWidth
    {16, 298, 887},	// QCPColorScale::colorMaps
    {16, 339, 872},	// QCPColorScale::dataRange
    {16, 341, 890},	// QCPColorScale::dataRangeChanged#
    {16, 342, 873},	// QCPColorScale::dataScaleType
    {16, 344, 891},	// QCPColorScale::dataScaleTypeChanged$
    {16, 553, 874},	// QCPColorScale::gradient
    {16, 555, 892},	// QCPColorScale::gradientChanged#
    {16, 632, 875},	// QCPColorScale::label
    {16, 707, 911},	// QCPColorScale::mAxisRect
    {16, 715, 909},	// QCPColorScale::mBarWidth
    {16, 734, 913},	// QCPColorScale::mColorAxis
    {16, 747, 903},	// QCPColorScale::mDataRange
    {16, 748, 905},	// QCPColorScale::mDataScaleType
    {16, 761, 907},	// QCPColorScale::mGradient
    {16, 917, 901},	// QCPColorScale::mType
    {16, 961, 862},	// QCPColorScale::metaObject
    {16, 976, 895},	// QCPColorScale::mouseMoveEvent#
    {16, 980, 894},	// QCPColorScale::mousePressEvent#
    {16, 984, 896},	// QCPColorScale::mouseReleaseEvent#
    {16, 1102, 868},	// QCPColorScale::qt_metacall$$?
    {16, 1104, 863},	// QCPColorScale::qt_metacast$
    {16, 1109, 877},	// QCPColorScale::rangeDrag
    {16, 1113, 878},	// QCPColorScale::rangeZoom
    {16, 1170, 888},	// QCPColorScale::rescaleDataRange$
    {16, 1317, 884},	// QCPColorScale::setBarWidth$
    {16, 1385, 880},	// QCPColorScale::setDataRange#
    {16, 1387, 881},	// QCPColorScale::setDataScaleType$
    {16, 1406, 882},	// QCPColorScale::setGradient#
    {16, 1452, 883},	// QCPColorScale::setLabel$
    {16, 1524, 912},	// QCPColorScale::setMAxisRect?
    {16, 1540, 910},	// QCPColorScale::setMBarWidth$
    {16, 1578, 914},	// QCPColorScale::setMColorAxis?
    {16, 1605, 904},	// QCPColorScale::setMDataRange#
    {16, 1607, 906},	// QCPColorScale::setMDataScaleType$
    {16, 1633, 908},	// QCPColorScale::setMGradient#
    {16, 1946, 902},	// QCPColorScale::setMType$
    {16, 2063, 885},	// QCPColorScale::setRangeDrag$
    {16, 2073, 886},	// QCPColorScale::setRangeZoom$
    {16, 2210, 879},	// QCPColorScale::setType$
    {16, 2299, 900},	// QCPColorScale::staticMetaObject
    {16, 2385, 898},	// QCPColorScale::tr$
    {16, 2386, 864},	// QCPColorScale::tr$$
    {16, 2387, 866},	// QCPColorScale::tr$$$
    {16, 2389, 899},	// QCPColorScale::trUtf8$
    {16, 2390, 865},	// QCPColorScale::trUtf8$$
    {16, 2391, 867},	// QCPColorScale::trUtf8$$$
    {16, 2399, 871},	// QCPColorScale::type
    {16, 2408, 889},	// QCPColorScale::update$
    {16, 2446, 897},	// QCPColorScale::wheelEvent#
    {16, 2475, 915},	// QCPColorScale::~QCPColorScale
    {18, 33, 923},	// QCPCurve::QCPCurve##
    {18, 130, 933},	// QCPCurve::addData#
    {18, 131, 935},	// QCPCurve::addData$$
    {18, 132, 934},	// QCPCurve::addData$$$
    {18, 134, 932},	// QCPCurve::addData?
    {18, 136, 936},	// QCPCurve::addData???
    {18, 285, 941},	// QCPCurve::clearData
    {18, 336, 924},	// QCPCurve::data
    {18, 362, 943},	// QCPCurve::draw#
    {18, 378, 944},	// QCPCurve::drawLegendIcon##
    {18, 394, 947},	// QCPCurve::drawScatterPlot#?
    {18, 472, 948},	// QCPCurve::getCurveData?
    {18, 481, 960},	// QCPCurve::getKeyRange$
    {18, 482, 945},	// QCPCurve::getKeyRange$$
    {18, 493, 951},	// QCPCurve::getOptimizedCornerPoints$$$$$$$$$$
    {18, 495, 950},	// QCPCurve::getOptimizedPoint$$$$$$$$$
    {18, 511, 949},	// QCPCurve::getRegion$$$$$$
    {18, 532, 953},	// QCPCurve::getTraverse$$$$$$$$##
    {18, 534, 954},	// QCPCurve::getTraverseCornerPoints$$$$$$??
    {18, 536, 961},	// QCPCurve::getValueRange$
    {18, 537, 946},	// QCPCurve::getValueRange$$
    {18, 662, 926},	// QCPCurve::lineStyle
    {18, 677, 970},	// QCPCurve::lsLine
    {18, 678, 969},	// QCPCurve::lsNone
    {18, 744, 963},	// QCPCurve::mData
    {18, 795, 967},	// QCPCurve::mLineStyle
    {18, 870, 965},	// QCPCurve::mScatterStyle
    {18, 948, 952},	// QCPCurve::mayTraverse$$
    {18, 961, 916},	// QCPCurve::metaObject
    {18, 1093, 955},	// QCPCurve::pointDistance#
    {18, 1102, 922},	// QCPCurve::qt_metacall$$?
    {18, 1104, 917},	// QCPCurve::qt_metacast$
    {18, 1142, 940},	// QCPCurve::removeData$
    {18, 1143, 939},	// QCPCurve::removeData$$
    {18, 1145, 938},	// QCPCurve::removeDataAfter$
    {18, 1147, 937},	// QCPCurve::removeDataBefore$
    {18, 1228, 925},	// QCPCurve::scatterStyle
    {18, 1237, 959},	// QCPCurve::selectTest#$
    {18, 1238, 942},	// QCPCurve::selectTest#$#
    {18, 1373, 958},	// QCPCurve::setData?
    {18, 1374, 927},	// QCPCurve::setData?$
    {18, 1375, 929},	// QCPCurve::setData??
    {18, 1376, 928},	// QCPCurve::setData???
    {18, 1469, 931},	// QCPCurve::setLineStyle$
    {18, 1599, 964},	// QCPCurve::setMData?
    {18, 1701, 968},	// QCPCurve::setMLineStyle$
    {18, 1852, 966},	// QCPCurve::setMScatterStyle#
    {18, 2099, 930},	// QCPCurve::setScatterStyle#
    {18, 2299, 962},	// QCPCurve::staticMetaObject
    {18, 2385, 956},	// QCPCurve::tr$
    {18, 2386, 918},	// QCPCurve::tr$$
    {18, 2387, 920},	// QCPCurve::tr$$$
    {18, 2389, 957},	// QCPCurve::trUtf8$
    {18, 2390, 919},	// QCPCurve::trUtf8$$
    {18, 2391, 921},	// QCPCurve::trUtf8$$$
    {18, 2476, 971},	// QCPCurve::~QCPCurve
    {19, 34, 972},	// QCPCurveData::QCPCurveData
    {19, 35, 974},	// QCPCurveData::QCPCurveData#
    {19, 36, 973},	// QCPCurveData::QCPCurveData$$$
    {19, 622, 977},	// QCPCurveData::key
    {19, 1440, 978},	// QCPCurveData::setKey$
    {19, 2165, 976},	// QCPCurveData::setT$
    {19, 2222, 980},	// QCPCurveData::setValue$
    {19, 2338, 975},	// QCPCurveData::t
    {19, 2435, 979},	// QCPCurveData::value
    {19, 2477, 981},	// QCPCurveData::~QCPCurveData
    {20, 37, 982},	// QCPData::QCPData
    {20, 38, 984},	// QCPData::QCPData#
    {20, 39, 983},	// QCPData::QCPData$$
    {20, 622, 985},	// QCPData::key
    {20, 624, 991},	// QCPData::keyErrorMinus
    {20, 625, 989},	// QCPData::keyErrorPlus
    {20, 1440, 986},	// QCPData::setKey$
    {20, 1444, 992},	// QCPData::setKeyErrorMinus$
    {20, 1446, 990},	// QCPData::setKeyErrorPlus$
    {20, 2222, 988},	// QCPData::setValue$
    {20, 2226, 996},	// QCPData::setValueErrorMinus$
    {20, 2228, 994},	// QCPData::setValueErrorPlus$
    {20, 2435, 987},	// QCPData::value
    {20, 2437, 995},	// QCPData::valueErrorMinus
    {20, 2438, 993},	// QCPData::valueErrorPlus
    {20, 2478, 997},	// QCPData::~QCPData
    {21, 41, 1005},	// QCPFinancial::QCPFinancial##
    {21, 130, 1024},	// QCPFinancial::addData#
    {21, 133, 1025},	// QCPFinancial::addData$$$$$
    {21, 134, 1023},	// QCPFinancial::addData?
    {21, 137, 1026},	// QCPFinancial::addData?????
    {21, 257, 1011},	// QCPFinancial::brushNegative
    {21, 258, 1010},	// QCPFinancial::brushPositive
    {21, 269, 1041},	// QCPFinancial::candlestickSelectTest#??
    {21, 278, 1007},	// QCPFinancial::chartStyle
    {21, 285, 1031},	// QCPFinancial::clearData
    {21, 331, 1068},	// QCPFinancial::csCandlestick
    {21, 332, 1067},	// QCPFinancial::csOhlc
    {21, 336, 1006},	// QCPFinancial::data
    {21, 362, 1034},	// QCPFinancial::draw#
    {21, 368, 1039},	// QCPFinancial::drawCandlestickPlot#??
    {21, 378, 1035},	// QCPFinancial::drawLegendIcon##
    {21, 387, 1038},	// QCPFinancial::drawOhlcPlot#??
    {21, 481, 1048},	// QCPFinancial::getKeyRange$
    {21, 482, 1036},	// QCPFinancial::getKeyRange$$
    {21, 536, 1049},	// QCPFinancial::getValueRange$
    {21, 537, 1037},	// QCPFinancial::getValueRange$$
    {21, 540, 1042},	// QCPFinancial::getVisibleDataBounds??
    {21, 722, 1061},	// QCPFinancial::mBrushNegative
    {21, 723, 1059},	// QCPFinancial::mBrushPositive
    {21, 727, 1053},	// QCPFinancial::mChartStyle
    {21, 744, 1051},	// QCPFinancial::mData
    {21, 837, 1065},	// QCPFinancial::mPenNegative
    {21, 838, 1063},	// QCPFinancial::mPenPositive
    {21, 916, 1057},	// QCPFinancial::mTwoColored
    {21, 928, 1055},	// QCPFinancial::mWidth
    {21, 961, 998},	// QCPFinancial::metaObject
    {21, 1016, 1040},	// QCPFinancial::ohlcSelectTest#??
    {21, 1065, 1013},	// QCPFinancial::penNegative
    {21, 1066, 1012},	// QCPFinancial::penPositive
    {21, 1102, 1004},	// QCPFinancial::qt_metacall$$?
    {21, 1104, 999},	// QCPFinancial::qt_metacast$
    {21, 1142, 1030},	// QCPFinancial::removeData$
    {21, 1143, 1029},	// QCPFinancial::removeData$$
    {21, 1145, 1028},	// QCPFinancial::removeDataAfter$
    {21, 1147, 1027},	// QCPFinancial::removeDataBefore$
    {21, 1237, 1046},	// QCPFinancial::selectTest#$
    {21, 1238, 1032},	// QCPFinancial::selectTest#$#
    {21, 1329, 1020},	// QCPFinancial::setBrushNegative#
    {21, 1331, 1019},	// QCPFinancial::setBrushPositive#
    {21, 1337, 1016},	// QCPFinancial::setChartStyle$
    {21, 1373, 1045},	// QCPFinancial::setData?
    {21, 1374, 1014},	// QCPFinancial::setData?$
    {21, 1377, 1015},	// QCPFinancial::setData?????
    {21, 1554, 1062},	// QCPFinancial::setMBrushNegative#
    {21, 1556, 1060},	// QCPFinancial::setMBrushPositive#
    {21, 1564, 1054},	// QCPFinancial::setMChartStyle$
    {21, 1599, 1052},	// QCPFinancial::setMData?
    {21, 1786, 1066},	// QCPFinancial::setMPenNegative#
    {21, 1788, 1064},	// QCPFinancial::setMPenPositive#
    {21, 1944, 1058},	// QCPFinancial::setMTwoColored$
    {21, 1968, 1056},	// QCPFinancial::setMWidth$
    {21, 2041, 1022},	// QCPFinancial::setPenNegative#
    {21, 2043, 1021},	// QCPFinancial::setPenPositive#
    {21, 2208, 1018},	// QCPFinancial::setTwoColored$
    {21, 2244, 1017},	// QCPFinancial::setWidth$
    {21, 2299, 1050},	// QCPFinancial::staticMetaObject
    {21, 2365, 1047},	// QCPFinancial::timeSeriesToOhlc??$
    {21, 2366, 1033},	// QCPFinancial::timeSeriesToOhlc??$$
    {21, 2385, 1043},	// QCPFinancial::tr$
    {21, 2386, 1000},	// QCPFinancial::tr$$
    {21, 2387, 1002},	// QCPFinancial::tr$$$
    {21, 2389, 1044},	// QCPFinancial::trUtf8$
    {21, 2390, 1001},	// QCPFinancial::trUtf8$$
    {21, 2391, 1003},	// QCPFinancial::trUtf8$$$
    {21, 2398, 1009},	// QCPFinancial::twoColored
    {21, 2450, 1008},	// QCPFinancial::width
    {21, 2479, 1069},	// QCPFinancial::~QCPFinancial
    {22, 42, 1070},	// QCPFinancialData::QCPFinancialData
    {22, 43, 1072},	// QCPFinancialData::QCPFinancialData#
    {22, 44, 1071},	// QCPFinancialData::QCPFinancialData$$$$$
    {22, 292, 1081},	// QCPFinancialData::close
    {22, 578, 1077},	// QCPFinancialData::high
    {22, 622, 1073},	// QCPFinancialData::key
    {22, 665, 1079},	// QCPFinancialData::low
    {22, 1017, 1075},	// QCPFinancialData::open
    {22, 1343, 1082},	// QCPFinancialData::setClose$
    {22, 1414, 1078},	// QCPFinancialData::setHigh$
    {22, 1440, 1074},	// QCPFinancialData::setKey$
    {22, 1471, 1080},	// QCPFinancialData::setLow$
    {22, 2016, 1076},	// QCPFinancialData::setOpen$
    {22, 2480, 1083},	// QCPFinancialData::~QCPFinancialData
    {23, 46, 1091},	// QCPGraph::QCPGraph##
    {23, 116, 1100},	// QCPGraph::adaptiveSampling
    {23, 130, 1118},	// QCPGraph::addData#
    {23, 131, 1119},	// QCPGraph::addData$$
    {23, 134, 1117},	// QCPGraph::addData?
    {23, 135, 1120},	// QCPGraph::addData??
    {23, 143, 1154},	// QCPGraph::addFillBasePoints?
    {23, 277, 1099},	// QCPGraph::channelFillGraph
    {23, 285, 1125},	// QCPGraph::clearData
    {23, 326, 1153},	// QCPGraph::countDataInBounds??$
    {23, 336, 1092},	// QCPGraph::data
    {23, 362, 1133},	// QCPGraph::draw#
    {23, 370, 1151},	// QCPGraph::drawError#$$#
    {23, 372, 1139},	// QCPGraph::drawFill#?
    {23, 376, 1142},	// QCPGraph::drawImpulsePlot#?
    {23, 378, 1134},	// QCPGraph::drawLegendIcon##
    {23, 383, 1141},	// QCPGraph::drawLinePlot#?
    {23, 394, 1140},	// QCPGraph::drawScatterPlot#?
    {23, 414, 1097},	// QCPGraph::errorBarSize
    {23, 415, 1098},	// QCPGraph::errorBarSkipSymbol
    {23, 416, 1096},	// QCPGraph::errorPen
    {23, 417, 1095},	// QCPGraph::errorType
    {23, 428, 1201},	// QCPGraph::etBoth
    {23, 429, 1199},	// QCPGraph::etKey
    {23, 430, 1198},	// QCPGraph::etNone
    {23, 431, 1200},	// QCPGraph::etValue
    {23, 443, 1160},	// QCPGraph::findIndexAboveX?$
    {23, 445, 1162},	// QCPGraph::findIndexAboveY?$
    {23, 447, 1159},	// QCPGraph::findIndexBelowX?$
    {23, 449, 1161},	// QCPGraph::findIndexBelowY?$
    {23, 470, 1158},	// QCPGraph::getChannelFillPolygon?
    {23, 479, 1150},	// QCPGraph::getImpulsePlotData??
    {23, 481, 1171},	// QCPGraph::getKeyRange$
    {23, 482, 1135},	// QCPGraph::getKeyRange$$
    {23, 483, 1137},	// QCPGraph::getKeyRange$$$
    {23, 487, 1146},	// QCPGraph::getLinePlotData??
    {23, 503, 1144},	// QCPGraph::getPlotData??
    {23, 505, 1143},	// QCPGraph::getPreparedData??
    {23, 513, 1145},	// QCPGraph::getScatterPlotData?
    {23, 519, 1149},	// QCPGraph::getStepCenterPlotData??
    {23, 521, 1147},	// QCPGraph::getStepLeftPlotData??
    {23, 523, 1148},	// QCPGraph::getStepRightPlotData??
    {23, 536, 1172},	// QCPGraph::getValueRange$
    {23, 537, 1136},	// QCPGraph::getValueRange$$
    {23, 538, 1138},	// QCPGraph::getValueRange$$$
    {23, 540, 1152},	// QCPGraph::getVisibleDataBounds??
    {23, 662, 1093},	// QCPGraph::lineStyle
    {23, 669, 1156},	// QCPGraph::lowerFillBasePoint$
    {23, 675, 1197},	// QCPGraph::lsImpulse
    {23, 677, 1193},	// QCPGraph::lsLine
    {23, 678, 1192},	// QCPGraph::lsNone
    {23, 680, 1196},	// QCPGraph::lsStepCenter
    {23, 681, 1194},	// QCPGraph::lsStepLeft
    {23, 682, 1195},	// QCPGraph::lsStepRight
    {23, 686, 1190},	// QCPGraph::mAdaptiveSampling
    {23, 726, 1188},	// QCPGraph::mChannelFillGraph
    {23, 744, 1174},	// QCPGraph::mData
    {23, 756, 1184},	// QCPGraph::mErrorBarSize
    {23, 757, 1186},	// QCPGraph::mErrorBarSkipSymbol
    {23, 758, 1176},	// QCPGraph::mErrorPen
    {23, 759, 1182},	// QCPGraph::mErrorType
    {23, 795, 1178},	// QCPGraph::mLineStyle
    {23, 870, 1180},	// QCPGraph::mScatterStyle
    {23, 961, 1084},	// QCPGraph::metaObject
    {23, 1093, 1163},	// QCPGraph::pointDistance#
    {23, 1102, 1090},	// QCPGraph::qt_metacall$$?
    {23, 1104, 1085},	// QCPGraph::qt_metacast$
    {23, 1142, 1124},	// QCPGraph::removeData$
    {23, 1143, 1123},	// QCPGraph::removeData$$
    {23, 1145, 1122},	// QCPGraph::removeDataAfter$
    {23, 1147, 1121},	// QCPGraph::removeDataBefore$
    {23, 1149, 1155},	// QCPGraph::removeFillBasePoints?
    {23, 1166, 1168},	// QCPGraph::rescaleAxes
    {23, 1167, 1127},	// QCPGraph::rescaleAxes$
    {23, 1168, 1130},	// QCPGraph::rescaleAxes$$
    {23, 1171, 1169},	// QCPGraph::rescaleKeyAxis
    {23, 1172, 1128},	// QCPGraph::rescaleKeyAxis$
    {23, 1173, 1131},	// QCPGraph::rescaleKeyAxis$$
    {23, 1174, 1170},	// QCPGraph::rescaleValueAxis
    {23, 1175, 1129},	// QCPGraph::rescaleValueAxis$
    {23, 1176, 1132},	// QCPGraph::rescaleValueAxis$$
    {23, 1228, 1094},	// QCPGraph::scatterStyle
    {23, 1237, 1167},	// QCPGraph::selectTest#$
    {23, 1238, 1126},	// QCPGraph::selectTest#$#
    {23, 1270, 1116},	// QCPGraph::setAdaptiveSampling$
    {23, 1335, 1115},	// QCPGraph::setChannelFillGraph#
    {23, 1373, 1166},	// QCPGraph::setData?
    {23, 1374, 1101},	// QCPGraph::setData?$
    {23, 1375, 1102},	// QCPGraph::setData??
    {23, 1379, 1107},	// QCPGraph::setDataBothError????
    {23, 1380, 1108},	// QCPGraph::setDataBothError??????
    {23, 1382, 1103},	// QCPGraph::setDataKeyError???
    {23, 1383, 1104},	// QCPGraph::setDataKeyError????
    {23, 1389, 1105},	// QCPGraph::setDataValueError???
    {23, 1390, 1106},	// QCPGraph::setDataValueError????
    {23, 1396, 1113},	// QCPGraph::setErrorBarSize$
    {23, 1398, 1114},	// QCPGraph::setErrorBarSkipSymbol$
    {23, 1400, 1112},	// QCPGraph::setErrorPen#
    {23, 1402, 1111},	// QCPGraph::setErrorType$
    {23, 1469, 1109},	// QCPGraph::setLineStyle$
    {23, 1481, 1191},	// QCPGraph::setMAdaptiveSampling$
    {23, 1562, 1189},	// QCPGraph::setMChannelFillGraph?
    {23, 1599, 1175},	// QCPGraph::setMData?
    {23, 1623, 1185},	// QCPGraph::setMErrorBarSize$
    {23, 1625, 1187},	// QCPGraph::setMErrorBarSkipSymbol$
    {23, 1627, 1177},	// QCPGraph::setMErrorPen#
    {23, 1629, 1183},	// QCPGraph::setMErrorType$
    {23, 1701, 1179},	// QCPGraph::setMLineStyle$
    {23, 1852, 1181},	// QCPGraph::setMScatterStyle#
    {23, 2099, 1110},	// QCPGraph::setScatterStyle#
    {23, 2299, 1173},	// QCPGraph::staticMetaObject
    {23, 2385, 1164},	// QCPGraph::tr$
    {23, 2386, 1086},	// QCPGraph::tr$$
    {23, 2387, 1088},	// QCPGraph::tr$$$
    {23, 2389, 1165},	// QCPGraph::trUtf8$
    {23, 2390, 1087},	// QCPGraph::trUtf8$$
    {23, 2391, 1089},	// QCPGraph::trUtf8$$$
    {23, 2426, 1157},	// QCPGraph::upperFillBasePoint$
    {23, 2481, 1202},	// QCPGraph::~QCPGraph
    {24, 48, 1210},	// QCPGrid::QCPGrid#
    {24, 182, 1212},	// QCPGrid::antialiasedSubGrid
    {24, 183, 1213},	// QCPGrid::antialiasedZeroLine
    {24, 190, 1223},	// QCPGrid::applyDefaultAntialiasingHint#
    {24, 362, 1224},	// QCPGrid::draw#
    {24, 374, 1225},	// QCPGrid::drawGridLines#
    {24, 399, 1226},	// QCPGrid::drawSubGridLines#
    {24, 694, 1232},	// QCPGrid::mAntialiasedSubGrid
    {24, 695, 1234},	// QCPGrid::mAntialiasedZeroLine
    {24, 829, 1242},	// QCPGrid::mParentAxis
    {24, 835, 1236},	// QCPGrid::mPen
    {24, 895, 1238},	// QCPGrid::mSubGridPen
    {24, 896, 1230},	// QCPGrid::mSubGridVisible
    {24, 930, 1240},	// QCPGrid::mZeroLinePen
    {24, 961, 1203},	// QCPGrid::metaObject
    {24, 1064, 1214},	// QCPGrid::pen
    {24, 1102, 1209},	// QCPGrid::qt_metacall$$?
    {24, 1104, 1204},	// QCPGrid::qt_metacast$
    {24, 1285, 1218},	// QCPGrid::setAntialiasedSubGrid$
    {24, 1287, 1219},	// QCPGrid::setAntialiasedZeroLine$
    {24, 1497, 1233},	// QCPGrid::setMAntialiasedSubGrid$
    {24, 1499, 1235},	// QCPGrid::setMAntialiasedZeroLine$
    {24, 1770, 1243},	// QCPGrid::setMParentAxis#
    {24, 1782, 1237},	// QCPGrid::setMPen#
    {24, 1902, 1239},	// QCPGrid::setMSubGridPen#
    {24, 1904, 1231},	// QCPGrid::setMSubGridVisible$
    {24, 1972, 1241},	// QCPGrid::setMZeroLinePen#
    {24, 2038, 1220},	// QCPGrid::setPen#
    {24, 2150, 1221},	// QCPGrid::setSubGridPen#
    {24, 2152, 1217},	// QCPGrid::setSubGridVisible$
    {24, 2256, 1222},	// QCPGrid::setZeroLinePen#
    {24, 2299, 1229},	// QCPGrid::staticMetaObject
    {24, 2332, 1215},	// QCPGrid::subGridPen
    {24, 2333, 1211},	// QCPGrid::subGridVisible
    {24, 2385, 1227},	// QCPGrid::tr$
    {24, 2386, 1205},	// QCPGrid::tr$$
    {24, 2387, 1207},	// QCPGrid::tr$$$
    {24, 2389, 1228},	// QCPGrid::trUtf8$
    {24, 2390, 1206},	// QCPGrid::trUtf8$$
    {24, 2391, 1208},	// QCPGrid::trUtf8$$$
    {24, 2463, 1216},	// QCPGrid::zeroLinePen
    {24, 2482, 1244},	// QCPGrid::~QCPGrid
    {25, 50, 1253},	// QCPItemAnchor::QCPItemAnchor##$
    {25, 51, 1245},	// QCPItemAnchor::QCPItemAnchor##$$
    {25, 126, 1249},	// QCPItemAnchor::addChildX#
    {25, 128, 1251},	// QCPItemAnchor::addChildY#
    {25, 687, 1260},	// QCPItemAnchor::mAnchorId
    {25, 729, 1262},	// QCPItemAnchor::mChildrenX
    {25, 730, 1264},	// QCPItemAnchor::mChildrenY
    {25, 814, 1254},	// QCPItemAnchor::mName
    {25, 830, 1258},	// QCPItemAnchor::mParentItem
    {25, 834, 1256},	// QCPItemAnchor::mParentPlot
    {25, 1000, 1246},	// QCPItemAnchor::name
    {25, 1068, 1247},	// QCPItemAnchor::pixelPoint
    {25, 1138, 1250},	// QCPItemAnchor::removeChildX#
    {25, 1140, 1252},	// QCPItemAnchor::removeChildY#
    {25, 1483, 1261},	// QCPItemAnchor::setMAnchorId$
    {25, 1568, 1263},	// QCPItemAnchor::setMChildrenX?
    {25, 1570, 1265},	// QCPItemAnchor::setMChildrenY?
    {25, 1739, 1255},	// QCPItemAnchor::setMName$
    {25, 1772, 1259},	// QCPItemAnchor::setMParentItem#
    {25, 1780, 1257},	// QCPItemAnchor::setMParentPlot#
    {25, 2380, 1248},	// QCPItemAnchor::toQCPItemPosition
    {25, 2483, 1266},	// QCPItemAnchor::~QCPItemAnchor
    {26, 53, 1274},	// QCPItemBracket::QCPItemBracket#
    {26, 164, 1303},	// QCPItemBracket::aiCenter
    {26, 175, 1285},	// QCPItemBracket::anchorPixelPoint$
    {26, 259, 1302},	// QCPItemBracket::bsCalligraphic
    {26, 260, 1301},	// QCPItemBracket::bsCurly
    {26, 261, 1300},	// QCPItemBracket::bsRound
    {26, 262, 1299},	// QCPItemBracket::bsSquare
    {26, 362, 1284},	// QCPItemBracket::draw#
    {26, 658, 1277},	// QCPItemBracket::length
    {26, 793, 1295},	// QCPItemBracket::mLength
    {26, 835, 1291},	// QCPItemBracket::mPen
    {26, 883, 1293},	// QCPItemBracket::mSelectedPen
    {26, 894, 1297},	// QCPItemBracket::mStyle
    {26, 934, 1286},	// QCPItemBracket::mainPen
    {26, 961, 1267},	// QCPItemBracket::metaObject
    {26, 1064, 1275},	// QCPItemBracket::pen
    {26, 1102, 1273},	// QCPItemBracket::qt_metacall$$?
    {26, 1104, 1268},	// QCPItemBracket::qt_metacast$
    {26, 1237, 1289},	// QCPItemBracket::selectTest#$
    {26, 1238, 1283},	// QCPItemBracket::selectTest#$#
    {26, 1257, 1276},	// QCPItemBracket::selectedPen
    {26, 1465, 1281},	// QCPItemBracket::setLength$
    {26, 1697, 1296},	// QCPItemBracket::setMLength$
    {26, 1782, 1292},	// QCPItemBracket::setMPen#
    {26, 1878, 1294},	// QCPItemBracket::setMSelectedPen#
    {26, 1900, 1298},	// QCPItemBracket::setMStyle$
    {26, 2038, 1279},	// QCPItemBracket::setPen#
    {26, 2125, 1280},	// QCPItemBracket::setSelectedPen#
    {26, 2148, 1282},	// QCPItemBracket::setStyle$
    {26, 2299, 1290},	// QCPItemBracket::staticMetaObject
    {26, 2330, 1278},	// QCPItemBracket::style
    {26, 2385, 1287},	// QCPItemBracket::tr$
    {26, 2386, 1269},	// QCPItemBracket::tr$$
    {26, 2387, 1271},	// QCPItemBracket::tr$$$
    {26, 2389, 1288},	// QCPItemBracket::trUtf8$
    {26, 2390, 1270},	// QCPItemBracket::trUtf8$$
    {26, 2391, 1272},	// QCPItemBracket::trUtf8$$$
    {26, 2484, 1304},	// QCPItemBracket::~QCPItemBracket
    {27, 55, 1312},	// QCPItemCurve::QCPItemCurve#
    {27, 362, 1322},	// QCPItemCurve::draw#
    {27, 572, 1315},	// QCPItemCurve::head
    {27, 766, 1332},	// QCPItemCurve::mHead
    {27, 835, 1328},	// QCPItemCurve::mPen
    {27, 883, 1330},	// QCPItemCurve::mSelectedPen
    {27, 900, 1334},	// QCPItemCurve::mTail
    {27, 934, 1323},	// QCPItemCurve::mainPen
    {27, 961, 1305},	// QCPItemCurve::metaObject
    {27, 1064, 1313},	// QCPItemCurve::pen
    {27, 1102, 1311},	// QCPItemCurve::qt_metacall$$?
    {27, 1104, 1306},	// QCPItemCurve::qt_metacast$
    {27, 1237, 1326},	// QCPItemCurve::selectTest#$
    {27, 1238, 1321},	// QCPItemCurve::selectTest#$#
    {27, 1257, 1314},	// QCPItemCurve::selectedPen
    {27, 1412, 1319},	// QCPItemCurve::setHead#
    {27, 1643, 1333},	// QCPItemCurve::setMHead#
    {27, 1782, 1329},	// QCPItemCurve::setMPen#
    {27, 1878, 1331},	// QCPItemCurve::setMSelectedPen#
    {27, 1912, 1335},	// QCPItemCurve::setMTail#
    {27, 2038, 1317},	// QCPItemCurve::setPen#
    {27, 2125, 1318},	// QCPItemCurve::setSelectedPen#
    {27, 2167, 1320},	// QCPItemCurve::setTail#
    {27, 2299, 1327},	// QCPItemCurve::staticMetaObject
    {27, 2340, 1316},	// QCPItemCurve::tail
    {27, 2385, 1324},	// QCPItemCurve::tr$
    {27, 2386, 1307},	// QCPItemCurve::tr$$
    {27, 2387, 1309},	// QCPItemCurve::tr$$$
    {27, 2389, 1325},	// QCPItemCurve::trUtf8$
    {27, 2390, 1308},	// QCPItemCurve::trUtf8$$
    {27, 2391, 1310},	// QCPItemCurve::trUtf8$$$
    {27, 2485, 1336},	// QCPItemCurve::~QCPItemCurve
    {28, 57, 1344},	// QCPItemEllipse::QCPItemEllipse#
    {28, 159, 1375},	// QCPItemEllipse::aiBottom
    {28, 161, 1376},	// QCPItemEllipse::aiBottomLeftRim
    {28, 163, 1374},	// QCPItemEllipse::aiBottomRightRim
    {28, 164, 1378},	// QCPItemEllipse::aiCenter
    {28, 165, 1377},	// QCPItemEllipse::aiLeft
    {28, 166, 1373},	// QCPItemEllipse::aiRight
    {28, 167, 1371},	// QCPItemEllipse::aiTop
    {28, 169, 1370},	// QCPItemEllipse::aiTopLeftRim
    {28, 171, 1372},	// QCPItemEllipse::aiTopRightRim
    {28, 175, 1355},	// QCPItemEllipse::anchorPixelPoint$
    {28, 256, 1347},	// QCPItemEllipse::brush
    {28, 362, 1354},	// QCPItemEllipse::draw#
    {28, 721, 1366},	// QCPItemEllipse::mBrush
    {28, 835, 1362},	// QCPItemEllipse::mPen
    {28, 876, 1368},	// QCPItemEllipse::mSelectedBrush
    {28, 883, 1364},	// QCPItemEllipse::mSelectedPen
    {28, 931, 1357},	// QCPItemEllipse::mainBrush
    {28, 934, 1356},	// QCPItemEllipse::mainPen
    {28, 961, 1337},	// QCPItemEllipse::metaObject
    {28, 1064, 1345},	// QCPItemEllipse::pen
    {28, 1102, 1343},	// QCPItemEllipse::qt_metacall$$?
    {28, 1104, 1338},	// QCPItemEllipse::qt_metacast$
    {28, 1237, 1360},	// QCPItemEllipse::selectTest#$
    {28, 1238, 1353},	// QCPItemEllipse::selectTest#$#
    {28, 1247, 1348},	// QCPItemEllipse::selectedBrush
    {28, 1257, 1346},	// QCPItemEllipse::selectedPen
    {28, 1327, 1351},	// QCPItemEllipse::setBrush#
    {28, 1552, 1367},	// QCPItemEllipse::setMBrush#
    {28, 1782, 1363},	// QCPItemEllipse::setMPen#
    {28, 1864, 1369},	// QCPItemEllipse::setMSelectedBrush#
    {28, 1878, 1365},	// QCPItemEllipse::setMSelectedPen#
    {28, 2038, 1349},	// QCPItemEllipse::setPen#
    {28, 2111, 1352},	// QCPItemEllipse::setSelectedBrush#
    {28, 2125, 1350},	// QCPItemEllipse::setSelectedPen#
    {28, 2299, 1361},	// QCPItemEllipse::staticMetaObject
    {28, 2385, 1358},	// QCPItemEllipse::tr$
    {28, 2386, 1339},	// QCPItemEllipse::tr$$
    {28, 2387, 1341},	// QCPItemEllipse::tr$$$
    {28, 2389, 1359},	// QCPItemEllipse::trUtf8$
    {28, 2390, 1340},	// QCPItemEllipse::trUtf8$$
    {28, 2391, 1342},	// QCPItemEllipse::trUtf8$$$
    {28, 2486, 1379},	// QCPItemEllipse::~QCPItemEllipse
    {29, 59, 1387},	// QCPItemLine::QCPItemLine#
    {29, 362, 1397},	// QCPItemLine::draw#
    {29, 507, 1398},	// QCPItemLine::getRectClippedLine###
    {29, 572, 1390},	// QCPItemLine::head
    {29, 766, 1408},	// QCPItemLine::mHead
    {29, 835, 1404},	// QCPItemLine::mPen
    {29, 883, 1406},	// QCPItemLine::mSelectedPen
    {29, 900, 1410},	// QCPItemLine::mTail
    {29, 934, 1399},	// QCPItemLine::mainPen
    {29, 961, 1380},	// QCPItemLine::metaObject
    {29, 1064, 1388},	// QCPItemLine::pen
    {29, 1102, 1386},	// QCPItemLine::qt_metacall$$?
    {29, 1104, 1381},	// QCPItemLine::qt_metacast$
    {29, 1237, 1402},	// QCPItemLine::selectTest#$
    {29, 1238, 1396},	// QCPItemLine::selectTest#$#
    {29, 1257, 1389},	// QCPItemLine::selectedPen
    {29, 1412, 1394},	// QCPItemLine::setHead#
    {29, 1643, 1409},	// QCPItemLine::setMHead#
    {29, 1782, 1405},	// QCPItemLine::setMPen#
    {29, 1878, 1407},	// QCPItemLine::setMSelectedPen#
    {29, 1912, 1411},	// QCPItemLine::setMTail#
    {29, 2038, 1392},	// QCPItemLine::setPen#
    {29, 2125, 1393},	// QCPItemLine::setSelectedPen#
    {29, 2167, 1395},	// QCPItemLine::setTail#
    {29, 2299, 1403},	// QCPItemLine::staticMetaObject
    {29, 2340, 1391},	// QCPItemLine::tail
    {29, 2385, 1400},	// QCPItemLine::tr$
    {29, 2386, 1382},	// QCPItemLine::tr$$
    {29, 2387, 1384},	// QCPItemLine::tr$$$
    {29, 2389, 1401},	// QCPItemLine::trUtf8$
    {29, 2390, 1383},	// QCPItemLine::trUtf8$$
    {29, 2391, 1385},	// QCPItemLine::trUtf8$$$
    {29, 2487, 1412},	// QCPItemLine::~QCPItemLine
    {30, 61, 1420},	// QCPItemPixmap::QCPItemPixmap#
    {30, 159, 1465},	// QCPItemPixmap::aiBottom
    {30, 160, 1466},	// QCPItemPixmap::aiBottomLeft
    {30, 165, 1467},	// QCPItemPixmap::aiLeft
    {30, 166, 1464},	// QCPItemPixmap::aiRight
    {30, 167, 1462},	// QCPItemPixmap::aiTop
    {30, 170, 1463},	// QCPItemPixmap::aiTopRight
    {30, 175, 1433},	// QCPItemPixmap::anchorPixelPoint$
    {30, 199, 1423},	// QCPItemPixmap::aspectRatioMode
    {30, 362, 1432},	// QCPItemPixmap::draw#
    {30, 473, 1445},	// QCPItemPixmap::getFinalRect
    {30, 474, 1446},	// QCPItemPixmap::getFinalRect$
    {30, 475, 1435},	// QCPItemPixmap::getFinalRect$$
    {30, 697, 1454},	// QCPItemPixmap::mAspectRatioMode
    {30, 835, 1458},	// QCPItemPixmap::mPen
    {30, 840, 1448},	// QCPItemPixmap::mPixmap
    {30, 867, 1452},	// QCPItemPixmap::mScaled
    {30, 869, 1450},	// QCPItemPixmap::mScaledPixmap
    {30, 883, 1460},	// QCPItemPixmap::mSelectedPen
    {30, 915, 1456},	// QCPItemPixmap::mTransformationMode
    {30, 934, 1436},	// QCPItemPixmap::mainPen
    {30, 961, 1413},	// QCPItemPixmap::metaObject
    {30, 1064, 1425},	// QCPItemPixmap::pen
    {30, 1074, 1421},	// QCPItemPixmap::pixmap
    {30, 1102, 1419},	// QCPItemPixmap::qt_metacall$$?
    {30, 1104, 1414},	// QCPItemPixmap::qt_metacast$
    {30, 1227, 1422},	// QCPItemPixmap::scaled
    {30, 1237, 1441},	// QCPItemPixmap::selectTest#$
    {30, 1238, 1431},	// QCPItemPixmap::selectTest#$#
    {30, 1257, 1426},	// QCPItemPixmap::selectedPen
    {30, 1503, 1455},	// QCPItemPixmap::setMAspectRatioMode$
    {30, 1782, 1459},	// QCPItemPixmap::setMPen#
    {30, 1792, 1449},	// QCPItemPixmap::setMPixmap#
    {30, 1846, 1453},	// QCPItemPixmap::setMScaled$
    {30, 1850, 1451},	// QCPItemPixmap::setMScaledPixmap#
    {30, 1878, 1461},	// QCPItemPixmap::setMSelectedPen#
    {30, 1942, 1457},	// QCPItemPixmap::setMTransformationMode$
    {30, 2038, 1429},	// QCPItemPixmap::setPen#
    {30, 2049, 1427},	// QCPItemPixmap::setPixmap#
    {30, 2095, 1439},	// QCPItemPixmap::setScaled$
    {30, 2096, 1440},	// QCPItemPixmap::setScaled$$
    {30, 2097, 1428},	// QCPItemPixmap::setScaled$$$
    {30, 2125, 1430},	// QCPItemPixmap::setSelectedPen#
    {30, 2299, 1447},	// QCPItemPixmap::staticMetaObject
    {30, 2385, 1437},	// QCPItemPixmap::tr$
    {30, 2386, 1415},	// QCPItemPixmap::tr$$
    {30, 2387, 1417},	// QCPItemPixmap::tr$$$
    {30, 2389, 1438},	// QCPItemPixmap::trUtf8$
    {30, 2390, 1416},	// QCPItemPixmap::trUtf8$$
    {30, 2391, 1418},	// QCPItemPixmap::trUtf8$$$
    {30, 2392, 1424},	// QCPItemPixmap::transformationMode
    {30, 2419, 1442},	// QCPItemPixmap::updateScaledPixmap
    {30, 2420, 1443},	// QCPItemPixmap::updateScaledPixmap#
    {30, 2421, 1444},	// QCPItemPixmap::updateScaledPixmap#$
    {30, 2422, 1434},	// QCPItemPixmap::updateScaledPixmap#$$
    {30, 2488, 1468},	// QCPItemPixmap::~QCPItemPixmap
    {31, 63, 1469},	// QCPItemPosition::QCPItemPosition##$
    {31, 222, 1481},	// QCPItemPosition::axisRect
    {31, 321, 1478},	// QCPItemPosition::coords
    {31, 622, 1476},	// QCPItemPosition::key
    {31, 623, 1479},	// QCPItemPosition::keyAxis
    {31, 707, 1506},	// QCPItemPosition::mAxisRect
    {31, 783, 1508},	// QCPItemPosition::mKey
    {31, 784, 1502},	// QCPItemPosition::mKeyAxis
    {31, 827, 1512},	// QCPItemPosition::mParentAnchorX
    {31, 828, 1514},	// QCPItemPosition::mParentAnchorY
    {31, 846, 1498},	// QCPItemPosition::mPositionTypeX
    {31, 847, 1500},	// QCPItemPosition::mPositionTypeY
    {31, 919, 1510},	// QCPItemPosition::mValue
    {31, 920, 1504},	// QCPItemPosition::mValueAxis
    {31, 1056, 1473},	// QCPItemPosition::parentAnchor
    {31, 1057, 1474},	// QCPItemPosition::parentAnchorX
    {31, 1058, 1475},	// QCPItemPosition::parentAnchorY
    {31, 1068, 1482},	// QCPItemPosition::pixelPoint
    {31, 1097, 1516},	// QCPItemPosition::ptAbsolute
    {31, 1098, 1518},	// QCPItemPosition::ptAxisRectRatio
    {31, 1099, 1519},	// QCPItemPosition::ptPlotCoords
    {31, 1100, 1517},	// QCPItemPosition::ptViewportRatio
    {31, 1305, 1491},	// QCPItemPosition::setAxes##
    {31, 1307, 1492},	// QCPItemPosition::setAxisRect#
    {31, 1361, 1490},	// QCPItemPosition::setCoords#
    {31, 1362, 1489},	// QCPItemPosition::setCoords$$
    {31, 1524, 1507},	// QCPItemPosition::setMAxisRect?
    {31, 1677, 1509},	// QCPItemPosition::setMKey$
    {31, 1679, 1503},	// QCPItemPosition::setMKeyAxis?
    {31, 1766, 1513},	// QCPItemPosition::setMParentAnchorX#
    {31, 1768, 1515},	// QCPItemPosition::setMParentAnchorY#
    {31, 1804, 1499},	// QCPItemPosition::setMPositionTypeX$
    {31, 1806, 1501},	// QCPItemPosition::setMPositionTypeY$
    {31, 1950, 1511},	// QCPItemPosition::setMValue$
    {31, 1952, 1505},	// QCPItemPosition::setMValueAxis?
    {31, 2027, 1495},	// QCPItemPosition::setParentAnchor#
    {31, 2028, 1486},	// QCPItemPosition::setParentAnchor#$
    {31, 2030, 1496},	// QCPItemPosition::setParentAnchorX#
    {31, 2031, 1487},	// QCPItemPosition::setParentAnchorX#$
    {31, 2033, 1497},	// QCPItemPosition::setParentAnchorY#
    {31, 2034, 1488},	// QCPItemPosition::setParentAnchorY#$
    {31, 2047, 1493},	// QCPItemPosition::setPixelPoint#
    {31, 2210, 1483},	// QCPItemPosition::setType$
    {31, 2212, 1484},	// QCPItemPosition::setTypeX$
    {31, 2214, 1485},	// QCPItemPosition::setTypeY$
    {31, 2380, 1494},	// QCPItemPosition::toQCPItemPosition
    {31, 2399, 1470},	// QCPItemPosition::type
    {31, 2400, 1471},	// QCPItemPosition::typeX
    {31, 2401, 1472},	// QCPItemPosition::typeY
    {31, 2435, 1477},	// QCPItemPosition::value
    {31, 2436, 1480},	// QCPItemPosition::valueAxis
    {31, 2489, 1520},	// QCPItemPosition::~QCPItemPosition
    {32, 65, 1528},	// QCPItemRect::QCPItemRect#
    {32, 159, 1557},	// QCPItemRect::aiBottom
    {32, 160, 1558},	// QCPItemRect::aiBottomLeft
    {32, 165, 1559},	// QCPItemRect::aiLeft
    {32, 166, 1556},	// QCPItemRect::aiRight
    {32, 167, 1554},	// QCPItemRect::aiTop
    {32, 170, 1555},	// QCPItemRect::aiTopRight
    {32, 175, 1539},	// QCPItemRect::anchorPixelPoint$
    {32, 256, 1531},	// QCPItemRect::brush
    {32, 362, 1538},	// QCPItemRect::draw#
    {32, 721, 1550},	// QCPItemRect::mBrush
    {32, 835, 1546},	// QCPItemRect::mPen
    {32, 876, 1552},	// QCPItemRect::mSelectedBrush
    {32, 883, 1548},	// QCPItemRect::mSelectedPen
    {32, 931, 1541},	// QCPItemRect::mainBrush
    {32, 934, 1540},	// QCPItemRect::mainPen
    {32, 961, 1521},	// QCPItemRect::metaObject
    {32, 1064, 1529},	// QCPItemRect::pen
    {32, 1102, 1527},	// QCPItemRect::qt_metacall$$?
    {32, 1104, 1522},	// QCPItemRect::qt_metacast$
    {32, 1237, 1544},	// QCPItemRect::selectTest#$
    {32, 1238, 1537},	// QCPItemRect::selectTest#$#
    {32, 1247, 1532},	// QCPItemRect::selectedBrush
    {32, 1257, 1530},	// QCPItemRect::selectedPen
    {32, 1327, 1535},	// QCPItemRect::setBrush#
    {32, 1552, 1551},	// QCPItemRect::setMBrush#
    {32, 1782, 1547},	// QCPItemRect::setMPen#
    {32, 1864, 1553},	// QCPItemRect::setMSelectedBrush#
    {32, 1878, 1549},	// QCPItemRect::setMSelectedPen#
    {32, 2038, 1533},	// QCPItemRect::setPen#
    {32, 2111, 1536},	// QCPItemRect::setSelectedBrush#
    {32, 2125, 1534},	// QCPItemRect::setSelectedPen#
    {32, 2299, 1545},	// QCPItemRect::staticMetaObject
    {32, 2385, 1542},	// QCPItemRect::tr$
    {32, 2386, 1523},	// QCPItemRect::tr$$
    {32, 2387, 1525},	// QCPItemRect::tr$$$
    {32, 2389, 1543},	// QCPItemRect::trUtf8$
    {32, 2390, 1524},	// QCPItemRect::trUtf8$$
    {32, 2391, 1526},	// QCPItemRect::trUtf8$$$
    {32, 2490, 1560},	// QCPItemRect::~QCPItemRect
    {33, 67, 1568},	// QCPItemStraightLine::QCPItemStraightLine#
    {33, 357, 1575},	// QCPItemStraightLine::distToStraightLine###
    {33, 362, 1574},	// QCPItemStraightLine::draw#
    {33, 509, 1576},	// QCPItemStraightLine::getRectClippedStraightLine###
    {33, 835, 1582},	// QCPItemStraightLine::mPen
    {33, 883, 1584},	// QCPItemStraightLine::mSelectedPen
    {33, 934, 1577},	// QCPItemStraightLine::mainPen
    {33, 961, 1561},	// QCPItemStraightLine::metaObject
    {33, 1064, 1569},	// QCPItemStraightLine::pen
    {33, 1102, 1567},	// QCPItemStraightLine::qt_metacall$$?
    {33, 1104, 1562},	// QCPItemStraightLine::qt_metacast$
    {33, 1237, 1580},	// QCPItemStraightLine::selectTest#$
    {33, 1238, 1573},	// QCPItemStraightLine::selectTest#$#
    {33, 1257, 1570},	// QCPItemStraightLine::selectedPen
    {33, 1782, 1583},	// QCPItemStraightLine::setMPen#
    {33, 1878, 1585},	// QCPItemStraightLine::setMSelectedPen#
    {33, 2038, 1571},	// QCPItemStraightLine::setPen#
    {33, 2125, 1572},	// QCPItemStraightLine::setSelectedPen#
    {33, 2299, 1581},	// QCPItemStraightLine::staticMetaObject
    {33, 2385, 1578},	// QCPItemStraightLine::tr$
    {33, 2386, 1563},	// QCPItemStraightLine::tr$$
    {33, 2387, 1565},	// QCPItemStraightLine::tr$$$
    {33, 2389, 1579},	// QCPItemStraightLine::trUtf8$
    {33, 2390, 1564},	// QCPItemStraightLine::trUtf8$$
    {33, 2391, 1566},	// QCPItemStraightLine::trUtf8$$$
    {33, 2491, 1586},	// QCPItemStraightLine::~QCPItemStraightLine
    {34, 69, 1594},	// QCPItemText::QCPItemText#
    {34, 159, 1663},	// QCPItemText::aiBottom
    {34, 160, 1664},	// QCPItemText::aiBottomLeft
    {34, 162, 1662},	// QCPItemText::aiBottomRight
    {34, 165, 1665},	// QCPItemText::aiLeft
    {34, 166, 1661},	// QCPItemText::aiRight
    {34, 167, 1659},	// QCPItemText::aiTop
    {34, 168, 1658},	// QCPItemText::aiTopLeft
    {34, 170, 1660},	// QCPItemText::aiTopRight
    {34, 175, 1622},	// QCPItemText::anchorPixelPoint$
    {34, 256, 1599},	// QCPItemText::brush
    {34, 294, 1595},	// QCPItemText::color
    {34, 362, 1621},	// QCPItemText::draw#
    {34, 457, 1601},	// QCPItemText::font
    {34, 527, 1623},	// QCPItemText::getTextDrawPoint##$
    {34, 721, 1640},	// QCPItemText::mBrush
    {34, 733, 1632},	// QCPItemText::mColor
    {34, 760, 1644},	// QCPItemText::mFont
    {34, 825, 1656},	// QCPItemText::mPadding
    {34, 835, 1636},	// QCPItemText::mPen
    {34, 845, 1650},	// QCPItemText::mPositionAlignment
    {34, 861, 1654},	// QCPItemText::mRotation
    {34, 876, 1642},	// QCPItemText::mSelectedBrush
    {34, 877, 1634},	// QCPItemText::mSelectedColor
    {34, 878, 1646},	// QCPItemText::mSelectedFont
    {34, 883, 1638},	// QCPItemText::mSelectedPen
    {34, 901, 1648},	// QCPItemText::mText
    {34, 902, 1652},	// QCPItemText::mTextAlignment
    {34, 931, 1627},	// QCPItemText::mainBrush
    {34, 932, 1625},	// QCPItemText::mainColor
    {34, 933, 1624},	// QCPItemText::mainFont
    {34, 934, 1626},	// QCPItemText::mainPen
    {34, 961, 1587},	// QCPItemText::metaObject
    {34, 1051, 1606},	// QCPItemText::padding
    {34, 1064, 1597},	// QCPItemText::pen
    {34, 1102, 1593},	// QCPItemText::qt_metacall$$?
    {34, 1104, 1588},	// QCPItemText::qt_metacast$
    {34, 1184, 1605},	// QCPItemText::rotation
    {34, 1237, 1630},	// QCPItemText::selectTest#$
    {34, 1238, 1620},	// QCPItemText::selectTest#$#
    {34, 1247, 1600},	// QCPItemText::selectedBrush
    {34, 1248, 1596},	// QCPItemText::selectedColor
    {34, 1249, 1602},	// QCPItemText::selectedFont
    {34, 1257, 1598},	// QCPItemText::selectedPen
    {34, 1327, 1611},	// QCPItemText::setBrush#
    {34, 1345, 1607},	// QCPItemText::setColor#
    {34, 1404, 1613},	// QCPItemText::setFont#
    {34, 1552, 1641},	// QCPItemText::setMBrush#
    {34, 1576, 1633},	// QCPItemText::setMColor#
    {34, 1631, 1645},	// QCPItemText::setMFont#
    {34, 1761, 1657},	// QCPItemText::setMPadding#
    {34, 1782, 1637},	// QCPItemText::setMPen#
    {34, 1802, 1651},	// QCPItemText::setMPositionAlignment$
    {34, 1834, 1655},	// QCPItemText::setMRotation$
    {34, 1864, 1643},	// QCPItemText::setMSelectedBrush#
    {34, 1866, 1635},	// QCPItemText::setMSelectedColor#
    {34, 1868, 1647},	// QCPItemText::setMSelectedFont#
    {34, 1878, 1639},	// QCPItemText::setMSelectedPen#
    {34, 1914, 1649},	// QCPItemText::setMText$
    {34, 1916, 1653},	// QCPItemText::setMTextAlignment$
    {34, 2024, 1619},	// QCPItemText::setPadding#
    {34, 2038, 1609},	// QCPItemText::setPen#
    {34, 2056, 1616},	// QCPItemText::setPositionAlignment$
    {34, 2080, 1618},	// QCPItemText::setRotation$
    {34, 2111, 1612},	// QCPItemText::setSelectedBrush#
    {34, 2113, 1608},	// QCPItemText::setSelectedColor#
    {34, 2115, 1614},	// QCPItemText::setSelectedFont#
    {34, 2125, 1610},	// QCPItemText::setSelectedPen#
    {34, 2169, 1615},	// QCPItemText::setText$
    {34, 2171, 1617},	// QCPItemText::setTextAlignment$
    {34, 2299, 1631},	// QCPItemText::staticMetaObject
    {34, 2345, 1603},	// QCPItemText::text
    {34, 2346, 1604},	// QCPItemText::textAlignment
    {34, 2385, 1628},	// QCPItemText::tr$
    {34, 2386, 1589},	// QCPItemText::tr$$
    {34, 2387, 1591},	// QCPItemText::tr$$$
    {34, 2389, 1629},	// QCPItemText::trUtf8$
    {34, 2390, 1590},	// QCPItemText::trUtf8$$
    {34, 2391, 1592},	// QCPItemText::trUtf8$$$
    {34, 2492, 1666},	// QCPItemText::~QCPItemText
    {35, 71, 1674},	// QCPItemTracer::QCPItemTracer#
    {35, 256, 1677},	// QCPItemTracer::brush
    {35, 362, 1695},	// QCPItemTracer::draw#
    {35, 556, 1681},	// QCPItemTracer::graph
    {35, 559, 1682},	// QCPItemTracer::graphKey
    {35, 602, 1683},	// QCPItemTracer::interpolating
    {35, 721, 1706},	// QCPItemTracer::mBrush
    {35, 762, 1714},	// QCPItemTracer::mGraph
    {35, 763, 1716},	// QCPItemTracer::mGraphKey
    {35, 778, 1718},	// QCPItemTracer::mInterpolating
    {35, 835, 1702},	// QCPItemTracer::mPen
    {35, 876, 1708},	// QCPItemTracer::mSelectedBrush
    {35, 883, 1704},	// QCPItemTracer::mSelectedPen
    {35, 891, 1710},	// QCPItemTracer::mSize
    {35, 894, 1712},	// QCPItemTracer::mStyle
    {35, 931, 1697},	// QCPItemTracer::mainBrush
    {35, 934, 1696},	// QCPItemTracer::mainPen
    {35, 961, 1667},	// QCPItemTracer::metaObject
    {35, 1064, 1675},	// QCPItemTracer::pen
    {35, 1102, 1673},	// QCPItemTracer::qt_metacall$$?
    {35, 1104, 1668},	// QCPItemTracer::qt_metacast$
    {35, 1237, 1700},	// QCPItemTracer::selectTest#$
    {35, 1238, 1693},	// QCPItemTracer::selectTest#$#
    {35, 1247, 1678},	// QCPItemTracer::selectedBrush
    {35, 1257, 1676},	// QCPItemTracer::selectedPen
    {35, 1327, 1686},	// QCPItemTracer::setBrush#
    {35, 1408, 1690},	// QCPItemTracer::setGraph#
    {35, 1410, 1691},	// QCPItemTracer::setGraphKey$
    {35, 1436, 1692},	// QCPItemTracer::setInterpolating$
    {35, 1552, 1707},	// QCPItemTracer::setMBrush#
    {35, 1635, 1715},	// QCPItemTracer::setMGraph#
    {35, 1637, 1717},	// QCPItemTracer::setMGraphKey$
    {35, 1667, 1719},	// QCPItemTracer::setMInterpolating$
    {35, 1782, 1703},	// QCPItemTracer::setMPen#
    {35, 1864, 1709},	// QCPItemTracer::setMSelectedBrush#
    {35, 1878, 1705},	// QCPItemTracer::setMSelectedPen#
    {35, 1894, 1711},	// QCPItemTracer::setMSize$
    {35, 1900, 1713},	// QCPItemTracer::setMStyle$
    {35, 2038, 1684},	// QCPItemTracer::setPen#
    {35, 2111, 1687},	// QCPItemTracer::setSelectedBrush#
    {35, 2125, 1685},	// QCPItemTracer::setSelectedPen#
    {35, 2141, 1688},	// QCPItemTracer::setSize$
    {35, 2148, 1689},	// QCPItemTracer::setStyle$
    {35, 2265, 1679},	// QCPItemTracer::size
    {35, 2299, 1701},	// QCPItemTracer::staticMetaObject
    {35, 2330, 1680},	// QCPItemTracer::style
    {35, 2385, 1698},	// QCPItemTracer::tr$
    {35, 2386, 1669},	// QCPItemTracer::tr$$
    {35, 2387, 1671},	// QCPItemTracer::tr$$$
    {35, 2389, 1699},	// QCPItemTracer::trUtf8$
    {35, 2390, 1670},	// QCPItemTracer::trUtf8$$
    {35, 2391, 1672},	// QCPItemTracer::trUtf8$$$
    {35, 2393, 1723},	// QCPItemTracer::tsCircle
    {35, 2394, 1722},	// QCPItemTracer::tsCrosshair
    {35, 2395, 1720},	// QCPItemTracer::tsNone
    {35, 2396, 1721},	// QCPItemTracer::tsPlus
    {35, 2397, 1724},	// QCPItemTracer::tsSquare
    {35, 2418, 1694},	// QCPItemTracer::updatePosition
    {35, 2493, 1725},	// QCPItemTracer::~QCPItemTracer
    {36, 73, 1733},	// QCPLayer::QCPLayer#$
    {36, 123, 1740},	// QCPLayer::addChild#$
    {36, 280, 1737},	// QCPLayer::children
    {36, 582, 1736},	// QCPLayer::index
    {36, 728, 1751},	// QCPLayer::mChildren
    {36, 771, 1749},	// QCPLayer::mIndex
    {36, 814, 1747},	// QCPLayer::mName
    {36, 834, 1745},	// QCPLayer::mParentPlot
    {36, 924, 1753},	// QCPLayer::mVisible
    {36, 961, 1726},	// QCPLayer::metaObject
    {36, 1000, 1735},	// QCPLayer::name
    {36, 1061, 1734},	// QCPLayer::parentPlot
    {36, 1102, 1732},	// QCPLayer::qt_metacall$$?
    {36, 1104, 1727},	// QCPLayer::qt_metacast$
    {36, 1135, 1741},	// QCPLayer::removeChild#
    {36, 1566, 1752},	// QCPLayer::setMChildren?
    {36, 1653, 1750},	// QCPLayer::setMIndex$
    {36, 1739, 1748},	// QCPLayer::setMName$
    {36, 1780, 1746},	// QCPLayer::setMParentPlot#
    {36, 1960, 1754},	// QCPLayer::setMVisible$
    {36, 2236, 1739},	// QCPLayer::setVisible$
    {36, 2299, 1744},	// QCPLayer::staticMetaObject
    {36, 2385, 1742},	// QCPLayer::tr$
    {36, 2386, 1728},	// QCPLayer::tr$$
    {36, 2387, 1730},	// QCPLayer::tr$$$
    {36, 2389, 1743},	// QCPLayer::trUtf8$
    {36, 2390, 1729},	// QCPLayer::trUtf8$$
    {36, 2391, 1731},	// QCPLayer::trUtf8$$$
    {36, 2442, 1738},	// QCPLayer::visible
    {36, 2494, 1755},	// QCPLayer::~QCPLayer
    {37, 75, 1789},	// QCPLayerable::QCPLayerable#
    {37, 76, 1790},	// QCPLayerable::QCPLayerable#$
    {37, 77, 1763},	// QCPLayerable::QCPLayerable#$#
    {37, 177, 1768},	// QCPLayerable::antialiased
    {37, 188, 1786},	// QCPLayerable::applyAntialiasingHint#$$
    {37, 190, 1779},	// QCPLayerable::applyDefaultAntialiasingHint#
    {37, 290, 1778},	// QCPLayerable::clipRect
    {37, 351, 1782},	// QCPLayerable::deselectEvent$
    {37, 362, 1780},	// QCPLayerable::draw#
    {37, 584, 1783},	// QCPLayerable::initializeParentPlot#
    {37, 637, 1767},	// QCPLayerable::layer
    {37, 640, 1775},	// QCPLayerable::layerChanged#
    {37, 689, 1801},	// QCPLayerable::mAntialiased
    {37, 790, 1799},	// QCPLayerable::mLayer
    {37, 831, 1797},	// QCPLayerable::mParentLayerable
    {37, 834, 1795},	// QCPLayerable::mParentPlot
    {37, 924, 1793},	// QCPLayerable::mVisible
    {37, 961, 1756},	// QCPLayerable::metaObject
    {37, 998, 1785},	// QCPLayerable::moveToLayer#$
    {37, 1059, 1766},	// QCPLayerable::parentLayerable
    {37, 1061, 1765},	// QCPLayerable::parentPlot
    {37, 1063, 1776},	// QCPLayerable::parentPlotInitialized#
    {37, 1102, 1762},	// QCPLayerable::qt_metacall$$?
    {37, 1104, 1757},	// QCPLayerable::qt_metacast$
    {37, 1119, 1774},	// QCPLayerable::realVisibility
    {37, 1235, 1781},	// QCPLayerable::selectEvent#$#$
    {37, 1237, 1791},	// QCPLayerable::selectTest#$
    {37, 1238, 1773},	// QCPLayerable::selectTest#$#
    {37, 1264, 1777},	// QCPLayerable::selectionCategory
    {37, 1272, 1772},	// QCPLayerable::setAntialiased$
    {37, 1460, 1770},	// QCPLayerable::setLayer#
    {37, 1461, 1771},	// QCPLayerable::setLayer$
    {37, 1487, 1802},	// QCPLayerable::setMAntialiased$
    {37, 1691, 1800},	// QCPLayerable::setMLayer#
    {37, 1774, 1798},	// QCPLayerable::setMParentLayerable?
    {37, 1780, 1796},	// QCPLayerable::setMParentPlot#
    {37, 1960, 1794},	// QCPLayerable::setMVisible$
    {37, 2036, 1784},	// QCPLayerable::setParentLayerable#
    {37, 2236, 1769},	// QCPLayerable::setVisible$
    {37, 2299, 1792},	// QCPLayerable::staticMetaObject
    {37, 2385, 1787},	// QCPLayerable::tr$
    {37, 2386, 1758},	// QCPLayerable::tr$$
    {37, 2387, 1760},	// QCPLayerable::tr$$$
    {37, 2389, 1788},	// QCPLayerable::trUtf8$
    {37, 2390, 1759},	// QCPLayerable::trUtf8$$
    {37, 2391, 1761},	// QCPLayerable::trUtf8$$$
    {37, 2442, 1764},	// QCPLayerable::visible
    {37, 2495, 1803},	// QCPLayerable::~QCPLayerable
    {38, 78, 1811},	// QCPLayout::QCPLayout
    {38, 157, 1824},	// QCPLayout::adoptElement#
    {38, 283, 1821},	// QCPLayout::clear
    {38, 406, 1815},	// QCPLayout::elementAt$
    {38, 407, 1814},	// QCPLayout::elementCount
    {38, 409, 1813},	// QCPLayout::elements$
    {38, 515, 1826},	// QCPLayout::getSectionSizes???$
    {38, 961, 1804},	// QCPLayout::metaObject
    {38, 1102, 1810},	// QCPLayout::qt_metacall$$?
    {38, 1104, 1805},	// QCPLayout::qt_metacast$
    {38, 1127, 1825},	// QCPLayout::releaseElement#
    {38, 1129, 1820},	// QCPLayout::remove#
    {38, 1131, 1819},	// QCPLayout::removeAt$
    {38, 2264, 1818},	// QCPLayout::simplify
    {38, 2266, 1823},	// QCPLayout::sizeConstraintsChanged
    {38, 2299, 1829},	// QCPLayout::staticMetaObject
    {38, 2342, 1817},	// QCPLayout::take#
    {38, 2344, 1816},	// QCPLayout::takeAt$
    {38, 2385, 1827},	// QCPLayout::tr$
    {38, 2386, 1806},	// QCPLayout::tr$$
    {38, 2387, 1808},	// QCPLayout::tr$$$
    {38, 2389, 1828},	// QCPLayout::trUtf8$
    {38, 2390, 1807},	// QCPLayout::trUtf8$$
    {38, 2391, 1809},	// QCPLayout::trUtf8$$$
    {38, 2408, 1812},	// QCPLayout::update$
    {38, 2413, 1822},	// QCPLayout::updateLayout
    {38, 2496, 1830},	// QCPLayout::~QCPLayout
    {39, 79, 1874},	// QCPLayoutElement::QCPLayoutElement
    {39, 80, 1838},	// QCPLayoutElement::QCPLayoutElement#
    {39, 190, 1869},	// QCPLayoutElement::applyDefaultAntialiasingHint#
    {39, 205, 1844},	// QCPLayoutElement::autoMargins
    {39, 264, 1863},	// QCPLayoutElement::calculateAutoMargin$
    {39, 362, 1870},	// QCPLayoutElement::draw#
    {39, 409, 1861},	// QCPLayoutElement::elements$
    {39, 645, 1839},	// QCPLayoutElement::layout
    {39, 699, 1891},	// QCPLayoutElement::mAutoMargins
    {39, 801, 1893},	// QCPLayoutElement::mMarginGroups
    {39, 802, 1887},	// QCPLayoutElement::mMargins
    {39, 804, 1881},	// QCPLayoutElement::mMaximumSize
    {39, 808, 1889},	// QCPLayoutElement::mMinimumMargins
    {39, 809, 1879},	// QCPLayoutElement::mMinimumSize
    {39, 822, 1885},	// QCPLayoutElement::mOuterRect
    {39, 832, 1877},	// QCPLayoutElement::mParentLayout
    {39, 859, 1883},	// QCPLayoutElement::mRect
    {39, 938, 1847},	// QCPLayoutElement::marginGroup$
    {39, 939, 1848},	// QCPLayoutElement::marginGroups
    {39, 942, 1842},	// QCPLayoutElement::margins
    {39, 945, 1846},	// QCPLayoutElement::maximumSize
    {39, 946, 1860},	// QCPLayoutElement::maximumSizeHint
    {39, 961, 1831},	// QCPLayoutElement::metaObject
    {39, 965, 1843},	// QCPLayoutElement::minimumMargins
    {39, 966, 1845},	// QCPLayoutElement::minimumSize
    {39, 967, 1859},	// QCPLayoutElement::minimumSizeHint
    {39, 972, 1867},	// QCPLayoutElement::mouseDoubleClickEvent#
    {39, 976, 1865},	// QCPLayoutElement::mouseMoveEvent#
    {39, 980, 1864},	// QCPLayoutElement::mousePressEvent#
    {39, 984, 1866},	// QCPLayoutElement::mouseReleaseEvent#
    {39, 1048, 1841},	// QCPLayoutElement::outerRect
    {39, 1063, 1871},	// QCPLayoutElement::parentPlotInitialized#
    {39, 1102, 1837},	// QCPLayoutElement::qt_metacall$$?
    {39, 1104, 1832},	// QCPLayoutElement::qt_metacast$
    {39, 1121, 1840},	// QCPLayoutElement::rect
    {39, 1237, 1875},	// QCPLayoutElement::selectTest#$
    {39, 1238, 1862},	// QCPLayoutElement::selectTest#$#
    {39, 1293, 1852},	// QCPLayoutElement::setAutoMargins$
    {39, 1507, 1892},	// QCPLayoutElement::setMAutoMargins$
    {39, 1713, 1894},	// QCPLayoutElement::setMMarginGroups?
    {39, 1715, 1888},	// QCPLayoutElement::setMMargins#
    {39, 1719, 1882},	// QCPLayoutElement::setMMaximumSize#
    {39, 1727, 1890},	// QCPLayoutElement::setMMinimumMargins#
    {39, 1729, 1880},	// QCPLayoutElement::setMMinimumSize#
    {39, 1755, 1886},	// QCPLayoutElement::setMOuterRect#
    {39, 1776, 1878},	// QCPLayoutElement::setMParentLayout#
    {39, 1830, 1884},	// QCPLayoutElement::setMRect#
    {39, 1974, 1857},	// QCPLayoutElement::setMarginGroup$#
    {39, 1976, 1850},	// QCPLayoutElement::setMargins#
    {39, 1980, 1855},	// QCPLayoutElement::setMaximumSize#
    {39, 1981, 1856},	// QCPLayoutElement::setMaximumSize$$
    {39, 1989, 1851},	// QCPLayoutElement::setMinimumMargins#
    {39, 1991, 1853},	// QCPLayoutElement::setMinimumSize#
    {39, 1992, 1854},	// QCPLayoutElement::setMinimumSize$$
    {39, 2018, 1849},	// QCPLayoutElement::setOuterRect#
    {39, 2299, 1876},	// QCPLayoutElement::staticMetaObject
    {39, 2385, 1872},	// QCPLayoutElement::tr$
    {39, 2386, 1833},	// QCPLayoutElement::tr$$
    {39, 2387, 1835},	// QCPLayoutElement::tr$$$
    {39, 2389, 1873},	// QCPLayoutElement::trUtf8$
    {39, 2390, 1834},	// QCPLayoutElement::trUtf8$$
    {39, 2391, 1836},	// QCPLayoutElement::trUtf8$$$
    {39, 2404, 1897},	// QCPLayoutElement::upLayout
    {39, 2405, 1896},	// QCPLayoutElement::upMargins
    {39, 2406, 1895},	// QCPLayoutElement::upPreparation
    {39, 2408, 1858},	// QCPLayoutElement::update$
    {39, 2446, 1868},	// QCPLayoutElement::wheelEvent#
    {39, 2497, 1898},	// QCPLayoutElement::~QCPLayoutElement
    {40, 81, 1906},	// QCPLayoutGrid::QCPLayoutGrid
    {40, 141, 1929},	// QCPLayoutGrid::addElement$$#
    {40, 305, 1908},	// QCPLayoutGrid::columnCount
    {40, 306, 1911},	// QCPLayoutGrid::columnSpacing
    {40, 307, 1909},	// QCPLayoutGrid::columnStretchFactors
    {40, 404, 1928},	// QCPLayoutGrid::element$$
    {40, 406, 1921},	// QCPLayoutGrid::elementAt$
    {40, 407, 1920},	// QCPLayoutGrid::elementCount
    {40, 409, 1924},	// QCPLayoutGrid::elements$
    {40, 437, 1931},	// QCPLayoutGrid::expandTo$$
    {40, 489, 1935},	// QCPLayoutGrid::getMaximumRowColSizes??
    {40, 491, 1934},	// QCPLayoutGrid::getMinimumRowColSizes??
    {40, 565, 1930},	// QCPLayoutGrid::hasElement$$
    {40, 590, 1933},	// QCPLayoutGrid::insertColumn$
    {40, 592, 1932},	// QCPLayoutGrid::insertRow$
    {40, 740, 1945},	// QCPLayoutGrid::mColumnSpacing
    {40, 741, 1941},	// QCPLayoutGrid::mColumnStretchFactors
    {40, 755, 1939},	// QCPLayoutGrid::mElements
    {40, 862, 1947},	// QCPLayoutGrid::mRowSpacing
    {40, 863, 1943},	// QCPLayoutGrid::mRowStretchFactors
    {40, 946, 1927},	// QCPLayoutGrid::maximumSizeHint
    {40, 961, 1899},	// QCPLayoutGrid::metaObject
    {40, 967, 1926},	// QCPLayoutGrid::minimumSizeHint
    {40, 1102, 1905},	// QCPLayoutGrid::qt_metacall$$?
    {40, 1104, 1900},	// QCPLayoutGrid::qt_metacast$
    {40, 1185, 1907},	// QCPLayoutGrid::rowCount
    {40, 1186, 1912},	// QCPLayoutGrid::rowSpacing
    {40, 1187, 1910},	// QCPLayoutGrid::rowStretchFactors
    {40, 1355, 1917},	// QCPLayoutGrid::setColumnSpacing$
    {40, 1357, 1913},	// QCPLayoutGrid::setColumnStretchFactor$$
    {40, 1359, 1914},	// QCPLayoutGrid::setColumnStretchFactors?
    {40, 1590, 1946},	// QCPLayoutGrid::setMColumnSpacing$
    {40, 1592, 1942},	// QCPLayoutGrid::setMColumnStretchFactors?
    {40, 1621, 1940},	// QCPLayoutGrid::setMElements?
    {40, 1836, 1948},	// QCPLayoutGrid::setMRowSpacing$
    {40, 1838, 1944},	// QCPLayoutGrid::setMRowStretchFactors?
    {40, 2082, 1918},	// QCPLayoutGrid::setRowSpacing$
    {40, 2084, 1915},	// QCPLayoutGrid::setRowStretchFactor$$
    {40, 2086, 1916},	// QCPLayoutGrid::setRowStretchFactors?
    {40, 2264, 1925},	// QCPLayoutGrid::simplify
    {40, 2299, 1938},	// QCPLayoutGrid::staticMetaObject
    {40, 2342, 1923},	// QCPLayoutGrid::take#
    {40, 2344, 1922},	// QCPLayoutGrid::takeAt$
    {40, 2385, 1936},	// QCPLayoutGrid::tr$
    {40, 2386, 1901},	// QCPLayoutGrid::tr$$
    {40, 2387, 1903},	// QCPLayoutGrid::tr$$$
    {40, 2389, 1937},	// QCPLayoutGrid::trUtf8$
    {40, 2390, 1902},	// QCPLayoutGrid::trUtf8$$
    {40, 2391, 1904},	// QCPLayoutGrid::trUtf8$$$
    {40, 2413, 1919},	// QCPLayoutGrid::updateLayout
    {40, 2498, 1949},	// QCPLayoutGrid::~QCPLayoutGrid
    {41, 82, 1957},	// QCPLayoutInset::QCPLayoutInset
    {41, 139, 1972},	// QCPLayoutInset::addElement##
    {41, 140, 1971},	// QCPLayoutInset::addElement#$
    {41, 406, 1966},	// QCPLayoutInset::elementAt$
    {41, 407, 1965},	// QCPLayoutInset::elementCount
    {41, 594, 1959},	// QCPLayoutInset::insetAlignment$
    {41, 597, 1958},	// QCPLayoutInset::insetPlacement$
    {41, 599, 1960},	// QCPLayoutInset::insetRect$
    {41, 604, 1986},	// QCPLayoutInset::ipBorderAligned
    {41, 605, 1985},	// QCPLayoutInset::ipFree
    {41, 755, 1977},	// QCPLayoutInset::mElements
    {41, 772, 1981},	// QCPLayoutInset::mInsetAlignment
    {41, 774, 1979},	// QCPLayoutInset::mInsetPlacement
    {41, 775, 1983},	// QCPLayoutInset::mInsetRect
    {41, 961, 1950},	// QCPLayoutInset::metaObject
    {41, 1102, 1956},	// QCPLayoutInset::qt_metacall$$?
    {41, 1104, 1951},	// QCPLayoutInset::qt_metacast$
    {41, 1237, 1975},	// QCPLayoutInset::selectTest#$
    {41, 1238, 1970},	// QCPLayoutInset::selectTest#$#
    {41, 1423, 1962},	// QCPLayoutInset::setInsetAlignment$$
    {41, 1425, 1961},	// QCPLayoutInset::setInsetPlacement$$
    {41, 1427, 1963},	// QCPLayoutInset::setInsetRect$#
    {41, 1621, 1978},	// QCPLayoutInset::setMElements?
    {41, 1655, 1982},	// QCPLayoutInset::setMInsetAlignment?
    {41, 1659, 1980},	// QCPLayoutInset::setMInsetPlacement?
    {41, 1661, 1984},	// QCPLayoutInset::setMInsetRect?
    {41, 2264, 1969},	// QCPLayoutInset::simplify
    {41, 2299, 1976},	// QCPLayoutInset::staticMetaObject
    {41, 2342, 1968},	// QCPLayoutInset::take#
    {41, 2344, 1967},	// QCPLayoutInset::takeAt$
    {41, 2385, 1973},	// QCPLayoutInset::tr$
    {41, 2386, 1952},	// QCPLayoutInset::tr$$
    {41, 2387, 1954},	// QCPLayoutInset::tr$$$
    {41, 2389, 1974},	// QCPLayoutInset::trUtf8$
    {41, 2390, 1953},	// QCPLayoutInset::trUtf8$$
    {41, 2391, 1955},	// QCPLayoutInset::trUtf8$$$
    {41, 2413, 1964},	// QCPLayoutInset::updateLayout
    {41, 2499, 1987},	// QCPLayoutInset::~QCPLayoutInset
    {42, 83, 1995},	// QCPLegend::QCPLegend
    {42, 148, 2031},	// QCPLegend::addItem#
    {42, 190, 2040},	// QCPLegend::applyDefaultAntialiasingHint#
    {42, 251, 1996},	// QCPLegend::borderPen
    {42, 256, 1997},	// QCPLegend::brush
    {42, 287, 2034},	// QCPLegend::clearItems
    {42, 351, 2043},	// QCPLegend::deselectEvent$
    {42, 362, 2041},	// QCPLegend::draw#
    {42, 457, 1998},	// QCPLegend::font
    {42, 467, 2044},	// QCPLegend::getBorderPen
    {42, 468, 2045},	// QCPLegend::getBrush
    {42, 567, 2029},	// QCPLegend::hasItem#
    {42, 569, 2030},	// QCPLegend::hasItemWithPlottable#
    {42, 579, 2002},	// QCPLegend::iconBorderPen
    {42, 580, 2000},	// QCPLegend::iconSize
    {42, 581, 2001},	// QCPLegend::iconTextPadding
    {42, 610, 2026},	// QCPLegend::item$
    {42, 616, 2028},	// QCPLegend::itemCount
    {42, 620, 2027},	// QCPLegend::itemWithPlottable#
    {42, 720, 2050},	// QCPLegend::mBorderPen
    {42, 721, 2054},	// QCPLegend::mBrush
    {42, 760, 2056},	// QCPLegend::mFont
    {42, 768, 2052},	// QCPLegend::mIconBorderPen
    {42, 769, 2060},	// QCPLegend::mIconSize
    {42, 770, 2062},	// QCPLegend::mIconTextPadding
    {42, 872, 2066},	// QCPLegend::mSelectableParts
    {42, 875, 2068},	// QCPLegend::mSelectedBorderPen
    {42, 876, 2072},	// QCPLegend::mSelectedBrush
    {42, 878, 2074},	// QCPLegend::mSelectedFont
    {42, 879, 2070},	// QCPLegend::mSelectedIconBorderPen
    {42, 882, 2064},	// QCPLegend::mSelectedParts
    {42, 885, 2076},	// QCPLegend::mSelectedTextColor
    {42, 904, 2058},	// QCPLegend::mTextColor
    {42, 961, 1988},	// QCPLegend::metaObject
    {42, 1063, 2038},	// QCPLegend::parentPlotInitialized#
    {42, 1102, 1994},	// QCPLegend::qt_metacall$$?
    {42, 1104, 1989},	// QCPLegend::qt_metacast$
    {42, 1155, 2033},	// QCPLegend::removeItem#
    {42, 1156, 2032},	// QCPLegend::removeItem$
    {42, 1235, 2042},	// QCPLegend::selectEvent#$#$
    {42, 1237, 2048},	// QCPLegend::selectTest#$
    {42, 1238, 2025},	// QCPLegend::selectTest#$#
    {42, 1241, 2037},	// QCPLegend::selectableChanged$
    {42, 1242, 2003},	// QCPLegend::selectableParts
    {42, 1246, 2005},	// QCPLegend::selectedBorderPen
    {42, 1247, 2007},	// QCPLegend::selectedBrush
    {42, 1249, 2008},	// QCPLegend::selectedFont
    {42, 1251, 2006},	// QCPLegend::selectedIconBorderPen
    {42, 1252, 2035},	// QCPLegend::selectedItems
    {42, 1256, 2004},	// QCPLegend::selectedParts
    {42, 1260, 2009},	// QCPLegend::selectedTextColor
    {42, 1264, 2039},	// QCPLegend::selectionCategory
    {42, 1266, 2036},	// QCPLegend::selectionChanged$
    {42, 1325, 2010},	// QCPLegend::setBorderPen#
    {42, 1327, 2011},	// QCPLegend::setBrush#
    {42, 1404, 2012},	// QCPLegend::setFont#
    {42, 1416, 2017},	// QCPLegend::setIconBorderPen#
    {42, 1418, 2014},	// QCPLegend::setIconSize#
    {42, 1419, 2015},	// QCPLegend::setIconSize$$
    {42, 1421, 2016},	// QCPLegend::setIconTextPadding$
    {42, 1550, 2051},	// QCPLegend::setMBorderPen#
    {42, 1552, 2055},	// QCPLegend::setMBrush#
    {42, 1631, 2057},	// QCPLegend::setMFont#
    {42, 1647, 2053},	// QCPLegend::setMIconBorderPen#
    {42, 1649, 2061},	// QCPLegend::setMIconSize#
    {42, 1651, 2063},	// QCPLegend::setMIconTextPadding$
    {42, 1856, 2067},	// QCPLegend::setMSelectableParts$
    {42, 1862, 2069},	// QCPLegend::setMSelectedBorderPen#
    {42, 1864, 2073},	// QCPLegend::setMSelectedBrush#
    {42, 1868, 2075},	// QCPLegend::setMSelectedFont#
    {42, 1870, 2071},	// QCPLegend::setMSelectedIconBorderPen#
    {42, 1876, 2065},	// QCPLegend::setMSelectedParts$
    {42, 1882, 2077},	// QCPLegend::setMSelectedTextColor#
    {42, 1920, 2059},	// QCPLegend::setMTextColor#
    {42, 2103, 2018},	// QCPLegend::setSelectableParts#
    {42, 2109, 2020},	// QCPLegend::setSelectedBorderPen#
    {42, 2111, 2022},	// QCPLegend::setSelectedBrush#
    {42, 2115, 2023},	// QCPLegend::setSelectedFont#
    {42, 2117, 2021},	// QCPLegend::setSelectedIconBorderPen#
    {42, 2123, 2019},	// QCPLegend::setSelectedParts#
    {42, 2129, 2024},	// QCPLegend::setSelectedTextColor#
    {42, 2173, 2013},	// QCPLegend::setTextColor#
    {42, 2270, 2080},	// QCPLegend::spItems
    {42, 2271, 2079},	// QCPLegend::spLegendBox
    {42, 2272, 2078},	// QCPLegend::spNone
    {42, 2299, 2049},	// QCPLegend::staticMetaObject
    {42, 2347, 1999},	// QCPLegend::textColor
    {42, 2385, 2046},	// QCPLegend::tr$
    {42, 2386, 1990},	// QCPLegend::tr$$
    {42, 2387, 1992},	// QCPLegend::tr$$$
    {42, 2389, 2047},	// QCPLegend::trUtf8$
    {42, 2390, 1991},	// QCPLegend::trUtf8$$
    {42, 2391, 1993},	// QCPLegend::trUtf8$$$
    {42, 2500, 2081},	// QCPLegend::~QCPLegend
    {43, 84, 2082},	// QCPLineEnding::QCPLineEnding
    {43, 85, 2096},	// QCPLineEnding::QCPLineEnding#
    {43, 86, 2097},	// QCPLineEnding::QCPLineEnding$
    {43, 87, 2098},	// QCPLineEnding::QCPLineEnding$$
    {43, 88, 2099},	// QCPLineEnding::QCPLineEnding$$$
    {43, 89, 2083},	// QCPLineEnding::QCPLineEnding$$$$
    {43, 255, 2092},	// QCPLineEnding::boundingDistance
    {43, 363, 2094},	// QCPLineEnding::draw###
    {43, 364, 2095},	// QCPLineEnding::draw##$
    {43, 418, 2116},	// QCPLineEnding::esBar
    {43, 419, 2115},	// QCPLineEnding::esDiamond
    {43, 420, 2113},	// QCPLineEnding::esDisc
    {43, 421, 2110},	// QCPLineEnding::esFlatArrow
    {43, 422, 2117},	// QCPLineEnding::esHalfBar
    {43, 423, 2112},	// QCPLineEnding::esLineArrow
    {43, 424, 2109},	// QCPLineEnding::esNone
    {43, 425, 2118},	// QCPLineEnding::esSkewedBar
    {43, 426, 2111},	// QCPLineEnding::esSpikeArrow
    {43, 427, 2114},	// QCPLineEnding::esSquare
    {43, 603, 2087},	// QCPLineEnding::inverted
    {43, 658, 2086},	// QCPLineEnding::length
    {43, 779, 2107},	// QCPLineEnding::mInverted
    {43, 793, 2105},	// QCPLineEnding::mLength
    {43, 894, 2101},	// QCPLineEnding::mStyle
    {43, 928, 2103},	// QCPLineEnding::mWidth
    {43, 1118, 2093},	// QCPLineEnding::realLength
    {43, 1438, 2091},	// QCPLineEnding::setInverted$
    {43, 1465, 2090},	// QCPLineEnding::setLength$
    {43, 1669, 2108},	// QCPLineEnding::setMInverted$
    {43, 1697, 2106},	// QCPLineEnding::setMLength$
    {43, 1900, 2102},	// QCPLineEnding::setMStyle$
    {43, 1968, 2104},	// QCPLineEnding::setMWidth$
    {43, 2148, 2088},	// QCPLineEnding::setStyle$
    {43, 2244, 2089},	// QCPLineEnding::setWidth$
    {43, 2299, 2100},	// QCPLineEnding::staticMetaObject
    {43, 2330, 2084},	// QCPLineEnding::style
    {43, 2450, 2085},	// QCPLineEnding::width
    {43, 2501, 2119},	// QCPLineEnding::~QCPLineEnding
    {44, 91, 2127},	// QCPMarginGroup::QCPMarginGroup#
    {44, 124, 2132},	// QCPMarginGroup::addChild$#
    {44, 283, 2130},	// QCPMarginGroup::clear
    {44, 309, 2131},	// QCPMarginGroup::commonMargin$
    {44, 409, 2128},	// QCPMarginGroup::elements$
    {44, 606, 2129},	// QCPMarginGroup::isEmpty
    {44, 728, 2139},	// QCPMarginGroup::mChildren
    {44, 834, 2137},	// QCPMarginGroup::mParentPlot
    {44, 961, 2120},	// QCPMarginGroup::metaObject
    {44, 1102, 2126},	// QCPMarginGroup::qt_metacall$$?
    {44, 1104, 2121},	// QCPMarginGroup::qt_metacast$
    {44, 1136, 2133},	// QCPMarginGroup::removeChild$#
    {44, 1566, 2140},	// QCPMarginGroup::setMChildren?
    {44, 1780, 2138},	// QCPMarginGroup::setMParentPlot#
    {44, 2299, 2136},	// QCPMarginGroup::staticMetaObject
    {44, 2385, 2134},	// QCPMarginGroup::tr$
    {44, 2386, 2122},	// QCPMarginGroup::tr$$
    {44, 2387, 2124},	// QCPMarginGroup::tr$$$
    {44, 2389, 2135},	// QCPMarginGroup::trUtf8$
    {44, 2390, 2123},	// QCPMarginGroup::trUtf8$$
    {44, 2391, 2125},	// QCPMarginGroup::trUtf8$$$
    {44, 2502, 2141},	// QCPMarginGroup::~QCPMarginGroup
    {45, 92, 2142},	// QCPPainter::QCPPainter
    {45, 93, 2143},	// QCPPainter::QCPPainter#
    {45, 184, 2144},	// QCPPainter::antialiasing
    {45, 246, 2149},	// QCPPainter::begin#
    {45, 380, 2153},	// QCPPainter::drawLine#
    {45, 381, 2154},	// QCPPainter::drawLine##
    {45, 696, 2164},	// QCPPainter::mAntialiasingStack
    {45, 780, 2162},	// QCPPainter::mIsAntialiasing
    {45, 810, 2160},	// QCPPainter::mModes
    {45, 936, 2157},	// QCPPainter::makeNonCosmetic
    {45, 968, 2145},	// QCPPainter::modes
    {45, 1088, 2166},	// QCPPainter::pmDefault
    {45, 1089, 2168},	// QCPPainter::pmNoCaching
    {45, 1090, 2169},	// QCPPainter::pmNonCosmetic
    {45, 1091, 2167},	// QCPPainter::pmVectorized
    {45, 1181, 2156},	// QCPPainter::restore
    {45, 1193, 2155},	// QCPPainter::save
    {45, 1289, 2146},	// QCPPainter::setAntialiasing$
    {45, 1501, 2165},	// QCPPainter::setMAntialiasingStack?
    {45, 1671, 2163},	// QCPPainter::setMIsAntialiasing$
    {45, 1731, 2161},	// QCPPainter::setMModes$
    {45, 1994, 2158},	// QCPPainter::setMode$
    {45, 1995, 2147},	// QCPPainter::setMode$$
    {45, 1997, 2148},	// QCPPainter::setModes$
    {45, 2038, -41},	// QCPPainter::setPen#
    {45, 2039, 2152},	// QCPPainter::setPen$
    {45, 2299, 2159},	// QCPPainter::staticMetaObject
    {45, 2503, 2170},	// QCPPainter::~QCPPainter
    {46, 95, 2178},	// QCPPlotTitle::QCPPlotTitle#
    {46, 96, 2179},	// QCPPlotTitle::QCPPlotTitle#$
    {46, 190, 2197},	// QCPPlotTitle::applyDefaultAntialiasingHint#
    {46, 351, 2202},	// QCPPlotTitle::deselectEvent$
    {46, 362, 2198},	// QCPPlotTitle::draw#
    {46, 457, 2181},	// QCPPlotTitle::font
    {46, 760, 2211},	// QCPPlotTitle::mFont
    {46, 871, 2221},	// QCPPlotTitle::mSelectable
    {46, 873, 2223},	// QCPPlotTitle::mSelected
    {46, 878, 2215},	// QCPPlotTitle::mSelectedFont
    {46, 885, 2217},	// QCPPlotTitle::mSelectedTextColor
    {46, 901, 2209},	// QCPPlotTitle::mText
    {46, 903, 2219},	// QCPPlotTitle::mTextBoundingRect
    {46, 904, 2213},	// QCPPlotTitle::mTextColor
    {46, 933, 2203},	// QCPPlotTitle::mainFont
    {46, 935, 2204},	// QCPPlotTitle::mainTextColor
    {46, 946, 2200},	// QCPPlotTitle::maximumSizeHint
    {46, 961, 2171},	// QCPPlotTitle::metaObject
    {46, 967, 2199},	// QCPPlotTitle::minimumSizeHint
    {46, 1102, 2177},	// QCPPlotTitle::qt_metacall$$?
    {46, 1104, 2172},	// QCPPlotTitle::qt_metacast$
    {46, 1235, 2201},	// QCPPlotTitle::selectEvent#$#$
    {46, 1237, 2207},	// QCPPlotTitle::selectTest#$
    {46, 1238, 2194},	// QCPPlotTitle::selectTest#$#
    {46, 1239, 2185},	// QCPPlotTitle::selectable
    {46, 1241, 2196},	// QCPPlotTitle::selectableChanged$
    {46, 1243, 2186},	// QCPPlotTitle::selected
    {46, 1249, 2183},	// QCPPlotTitle::selectedFont
    {46, 1260, 2184},	// QCPPlotTitle::selectedTextColor
    {46, 1266, 2195},	// QCPPlotTitle::selectionChanged$
    {46, 1404, 2188},	// QCPPlotTitle::setFont#
    {46, 1631, 2212},	// QCPPlotTitle::setMFont#
    {46, 1854, 2222},	// QCPPlotTitle::setMSelectable$
    {46, 1858, 2224},	// QCPPlotTitle::setMSelected$
    {46, 1868, 2216},	// QCPPlotTitle::setMSelectedFont#
    {46, 1882, 2218},	// QCPPlotTitle::setMSelectedTextColor#
    {46, 1914, 2210},	// QCPPlotTitle::setMText$
    {46, 1918, 2220},	// QCPPlotTitle::setMTextBoundingRect#
    {46, 1920, 2214},	// QCPPlotTitle::setMTextColor#
    {46, 2101, 2192},	// QCPPlotTitle::setSelectable$
    {46, 2105, 2193},	// QCPPlotTitle::setSelected$
    {46, 2115, 2190},	// QCPPlotTitle::setSelectedFont#
    {46, 2129, 2191},	// QCPPlotTitle::setSelectedTextColor#
    {46, 2169, 2187},	// QCPPlotTitle::setText$
    {46, 2173, 2189},	// QCPPlotTitle::setTextColor#
    {46, 2299, 2208},	// QCPPlotTitle::staticMetaObject
    {46, 2345, 2180},	// QCPPlotTitle::text
    {46, 2347, 2182},	// QCPPlotTitle::textColor
    {46, 2385, 2205},	// QCPPlotTitle::tr$
    {46, 2386, 2173},	// QCPPlotTitle::tr$$
    {46, 2387, 2175},	// QCPPlotTitle::tr$$$
    {46, 2389, 2206},	// QCPPlotTitle::trUtf8$
    {46, 2390, 2174},	// QCPPlotTitle::trUtf8$$
    {46, 2391, 2176},	// QCPPlotTitle::trUtf8$$$
    {46, 2504, 2225},	// QCPPlotTitle::~QCPPlotTitle
    {47, 98, 2233},	// QCPPlottableLegendItem::QCPPlottableLegendItem##
    {47, 362, 2235},	// QCPPlottableLegendItem::draw#
    {47, 476, 2239},	// QCPPlottableLegendItem::getFont
    {47, 477, 2237},	// QCPPlottableLegendItem::getIconBorderPen
    {47, 525, 2238},	// QCPPlottableLegendItem::getTextColor
    {47, 842, 2243},	// QCPPlottableLegendItem::mPlottable
    {47, 961, 2226},	// QCPPlottableLegendItem::metaObject
    {47, 967, 2236},	// QCPPlottableLegendItem::minimumSizeHint
    {47, 1076, 2234},	// QCPPlottableLegendItem::plottable
    {47, 1102, 2232},	// QCPPlottableLegendItem::qt_metacall$$?
    {47, 1104, 2227},	// QCPPlottableLegendItem::qt_metacast$
    {47, 1796, 2244},	// QCPPlottableLegendItem::setMPlottable#
    {47, 2299, 2242},	// QCPPlottableLegendItem::staticMetaObject
    {47, 2385, 2240},	// QCPPlottableLegendItem::tr$
    {47, 2386, 2228},	// QCPPlottableLegendItem::tr$$
    {47, 2387, 2230},	// QCPPlottableLegendItem::tr$$$
    {47, 2389, 2241},	// QCPPlottableLegendItem::trUtf8$
    {47, 2390, 2229},	// QCPPlottableLegendItem::trUtf8$$
    {47, 2391, 2231},	// QCPPlottableLegendItem::trUtf8$$$
    {47, 2505, 2245},	// QCPPlottableLegendItem::~QCPPlottableLegendItem
    {48, 99, 2246},	// QCPRange::QCPRange
    {48, 100, 2264},	// QCPRange::QCPRange#
    {48, 101, 2247},	// QCPRange::QCPRange$$
    {48, 274, 2255},	// QCPRange::center
    {48, 315, 2261},	// QCPRange::contains$
    {48, 435, 2257},	// QCPRange::expand#
    {48, 439, 2258},	// QCPRange::expanded#
    {48, 666, 2265},	// QCPRange::lower
    {48, 943, 2270},	// QCPRange::maxRange
    {48, 963, 2269},	// QCPRange::minRange
    {48, 1006, 2256},	// QCPRange::normalize
    {48, 1019, 2249},	// QCPRange::operator!=#
    {48, 1024, 2252},	// QCPRange::operator*=$
    {48, 1029, 2250},	// QCPRange::operator+=$
    {48, 1033, 2251},	// QCPRange::operator-=$
    {48, 1037, 2253},	// QCPRange::operator/=$
    {48, 1041, 2248},	// QCPRange::operator==#
    {48, 1191, 2260},	// QCPRange::sanitizedForLinScale
    {48, 1192, 2259},	// QCPRange::sanitizedForLogScale
    {48, 1473, 2266},	// QCPRange::setLower$
    {48, 2216, 2268},	// QCPRange::setUpper$
    {48, 2265, 2254},	// QCPRange::size
    {48, 2423, 2267},	// QCPRange::upper
    {48, 2433, 2263},	// QCPRange::validRange#
    {48, 2434, 2262},	// QCPRange::validRange$$
    {48, 2506, 2271},	// QCPRange::~QCPRange
    {49, 102, 2272},	// QCPScatterStyle::QCPScatterStyle
    {49, 103, -35},	// QCPScatterStyle::QCPScatterStyle#
    {49, 104, 2298},	// QCPScatterStyle::QCPScatterStyle##
    {49, 105, 2299},	// QCPScatterStyle::QCPScatterStyle###
    {49, 106, 2278},	// QCPScatterStyle::QCPScatterStyle###$
    {49, 107, 2297},	// QCPScatterStyle::QCPScatterStyle$
    {49, 108, -38},	// QCPScatterStyle::QCPScatterStyle$##$
    {49, 109, 2274},	// QCPScatterStyle::QCPScatterStyle$#$
    {49, 110, 2273},	// QCPScatterStyle::QCPScatterStyle$$
    {49, 198, 2293},	// QCPScatterStyle::applyTo##
    {49, 256, 2282},	// QCPScatterStyle::brush
    {49, 335, 2284},	// QCPScatterStyle::customPath
    {49, 396, 2294},	// QCPScatterStyle::drawShape##
    {49, 397, 2295},	// QCPScatterStyle::drawShape#$$
    {49, 607, 2291},	// QCPScatterStyle::isNone
    {49, 608, 2292},	// QCPScatterStyle::isPenDefined
    {49, 721, 2307},	// QCPScatterStyle::mBrush
    {49, 743, 2311},	// QCPScatterStyle::mCustomPath
    {49, 835, 2305},	// QCPScatterStyle::mPen
    {49, 836, 2313},	// QCPScatterStyle::mPenDefined
    {49, 840, 2309},	// QCPScatterStyle::mPixmap
    {49, 890, 2303},	// QCPScatterStyle::mShape
    {49, 891, 2301},	// QCPScatterStyle::mSize
    {49, 1064, 2281},	// QCPScatterStyle::pen
    {49, 1074, 2283},	// QCPScatterStyle::pixmap
    {49, 1327, 2288},	// QCPScatterStyle::setBrush#
    {49, 1367, 2290},	// QCPScatterStyle::setCustomPath#
    {49, 1552, 2308},	// QCPScatterStyle::setMBrush#
    {49, 1596, 2312},	// QCPScatterStyle::setMCustomPath#
    {49, 1782, 2306},	// QCPScatterStyle::setMPen#
    {49, 1784, 2314},	// QCPScatterStyle::setMPenDefined$
    {49, 1792, 2310},	// QCPScatterStyle::setMPixmap#
    {49, 1892, 2304},	// QCPScatterStyle::setMShape$
    {49, 1894, 2302},	// QCPScatterStyle::setMSize$
    {49, 2038, 2287},	// QCPScatterStyle::setPen#
    {49, 2049, 2289},	// QCPScatterStyle::setPixmap#
    {49, 2139, 2286},	// QCPScatterStyle::setShape$
    {49, 2141, 2285},	// QCPScatterStyle::setSize$
    {49, 2260, 2280},	// QCPScatterStyle::shape
    {49, 2265, 2279},	// QCPScatterStyle::size
    {49, 2276, 2319},	// QCPScatterStyle::ssCircle
    {49, 2277, 2317},	// QCPScatterStyle::ssCross
    {49, 2278, 2328},	// QCPScatterStyle::ssCrossCircle
    {49, 2279, 2326},	// QCPScatterStyle::ssCrossSquare
    {49, 2280, 2332},	// QCPScatterStyle::ssCustom
    {49, 2281, 2322},	// QCPScatterStyle::ssDiamond
    {49, 2282, 2320},	// QCPScatterStyle::ssDisc
    {49, 2283, 2316},	// QCPScatterStyle::ssDot
    {49, 2284, 2315},	// QCPScatterStyle::ssNone
    {49, 2285, 2330},	// QCPScatterStyle::ssPeace
    {49, 2286, 2331},	// QCPScatterStyle::ssPixmap
    {49, 2287, 2318},	// QCPScatterStyle::ssPlus
    {49, 2288, 2329},	// QCPScatterStyle::ssPlusCircle
    {49, 2289, 2327},	// QCPScatterStyle::ssPlusSquare
    {49, 2290, 2321},	// QCPScatterStyle::ssSquare
    {49, 2291, 2323},	// QCPScatterStyle::ssStar
    {49, 2292, 2324},	// QCPScatterStyle::ssTriangle
    {49, 2293, 2325},	// QCPScatterStyle::ssTriangleInverted
    {49, 2299, 2300},	// QCPScatterStyle::staticMetaObject
    {49, 2507, 2333},	// QCPScatterStyle::~QCPScatterStyle
    {50, 112, 2341},	// QCPStatisticalBox::QCPStatisticalBox##
    {50, 285, 2369},	// QCPStatisticalBox::clearData
    {50, 362, 2371},	// QCPStatisticalBox::draw#
    {50, 378, 2372},	// QCPStatisticalBox::drawLegendIcon##
    {50, 385, 2376},	// QCPStatisticalBox::drawMedian#
    {50, 389, 2378},	// QCPStatisticalBox::drawOutliers#
    {50, 391, 2384},	// QCPStatisticalBox::drawQuartileBox#
    {50, 392, 2375},	// QCPStatisticalBox::drawQuartileBox##
    {50, 401, 2377},	// QCPStatisticalBox::drawWhiskers#
    {50, 481, 2382},	// QCPStatisticalBox::getKeyRange$
    {50, 482, 2373},	// QCPStatisticalBox::getKeyRange$$
    {50, 536, 2383},	// QCPStatisticalBox::getValueRange$
    {50, 537, 2374},	// QCPStatisticalBox::getValueRange$$
    {50, 622, 2342},	// QCPStatisticalBox::key
    {50, 670, 2344},	// QCPStatisticalBox::lowerQuartile
    {50, 783, 2388},	// QCPStatisticalBox::mKey
    {50, 796, 2392},	// QCPStatisticalBox::mLowerQuartile
    {50, 803, 2398},	// QCPStatisticalBox::mMaximum
    {50, 805, 2394},	// QCPStatisticalBox::mMedian
    {50, 806, 2408},	// QCPStatisticalBox::mMedianPen
    {50, 807, 2390},	// QCPStatisticalBox::mMinimum
    {50, 823, 2410},	// QCPStatisticalBox::mOutlierStyle
    {50, 824, 2386},	// QCPStatisticalBox::mOutliers
    {50, 918, 2396},	// QCPStatisticalBox::mUpperQuartile
    {50, 925, 2406},	// QCPStatisticalBox::mWhiskerBarPen
    {50, 926, 2404},	// QCPStatisticalBox::mWhiskerPen
    {50, 927, 2402},	// QCPStatisticalBox::mWhiskerWidth
    {50, 928, 2400},	// QCPStatisticalBox::mWidth
    {50, 944, 2347},	// QCPStatisticalBox::maximum
    {50, 949, 2345},	// QCPStatisticalBox::median
    {50, 950, 2353},	// QCPStatisticalBox::medianPen
    {50, 961, 2334},	// QCPStatisticalBox::metaObject
    {50, 964, 2343},	// QCPStatisticalBox::minimum
    {50, 1049, 2354},	// QCPStatisticalBox::outlierStyle
    {50, 1050, 2348},	// QCPStatisticalBox::outliers
    {50, 1102, 2340},	// QCPStatisticalBox::qt_metacall$$?
    {50, 1104, 2335},	// QCPStatisticalBox::qt_metacast$
    {50, 1237, 2381},	// QCPStatisticalBox::selectTest#$
    {50, 1238, 2370},	// QCPStatisticalBox::selectTest#$#
    {50, 1372, 2362},	// QCPStatisticalBox::setData$$$$$$
    {50, 1440, 2355},	// QCPStatisticalBox::setKey$
    {50, 1477, 2357},	// QCPStatisticalBox::setLowerQuartile$
    {50, 1677, 2389},	// QCPStatisticalBox::setMKey$
    {50, 1703, 2393},	// QCPStatisticalBox::setMLowerQuartile$
    {50, 1717, 2399},	// QCPStatisticalBox::setMMaximum$
    {50, 1721, 2395},	// QCPStatisticalBox::setMMedian$
    {50, 1723, 2409},	// QCPStatisticalBox::setMMedianPen#
    {50, 1725, 2391},	// QCPStatisticalBox::setMMinimum$
    {50, 1757, 2411},	// QCPStatisticalBox::setMOutlierStyle#
    {50, 1759, 2387},	// QCPStatisticalBox::setMOutliers?
    {50, 1948, 2397},	// QCPStatisticalBox::setMUpperQuartile$
    {50, 1962, 2407},	// QCPStatisticalBox::setMWhiskerBarPen#
    {50, 1964, 2405},	// QCPStatisticalBox::setMWhiskerPen#
    {50, 1966, 2403},	// QCPStatisticalBox::setMWhiskerWidth$
    {50, 1968, 2401},	// QCPStatisticalBox::setMWidth$
    {50, 1978, 2360},	// QCPStatisticalBox::setMaximum$
    {50, 1983, 2358},	// QCPStatisticalBox::setMedian$
    {50, 1985, 2367},	// QCPStatisticalBox::setMedianPen#
    {50, 1987, 2356},	// QCPStatisticalBox::setMinimum$
    {50, 2020, 2368},	// QCPStatisticalBox::setOutlierStyle#
    {50, 2022, 2361},	// QCPStatisticalBox::setOutliers?
    {50, 2220, 2359},	// QCPStatisticalBox::setUpperQuartile$
    {50, 2238, 2366},	// QCPStatisticalBox::setWhiskerBarPen#
    {50, 2240, 2365},	// QCPStatisticalBox::setWhiskerPen#
    {50, 2242, 2364},	// QCPStatisticalBox::setWhiskerWidth$
    {50, 2244, 2363},	// QCPStatisticalBox::setWidth$
    {50, 2299, 2385},	// QCPStatisticalBox::staticMetaObject
    {50, 2385, 2379},	// QCPStatisticalBox::tr$
    {50, 2386, 2336},	// QCPStatisticalBox::tr$$
    {50, 2387, 2338},	// QCPStatisticalBox::tr$$$
    {50, 2389, 2380},	// QCPStatisticalBox::trUtf8$
    {50, 2390, 2337},	// QCPStatisticalBox::trUtf8$$
    {50, 2391, 2339},	// QCPStatisticalBox::trUtf8$$$
    {50, 2427, 2346},	// QCPStatisticalBox::upperQuartile
    {50, 2447, 2352},	// QCPStatisticalBox::whiskerBarPen
    {50, 2448, 2351},	// QCPStatisticalBox::whiskerPen
    {50, 2449, 2350},	// QCPStatisticalBox::whiskerWidth
    {50, 2450, 2349},	// QCPStatisticalBox::width
    {50, 2508, 2412},	// QCPStatisticalBox::~QCPStatisticalBox
    {55, 113, 2540},	// QCustomPlot::QCustomPlot
    {55, 114, 2420},	// QCustomPlot::QCustomPlot#
    {55, 144, 2547},	// QCustomPlot::addGraph
    {55, 145, 2548},	// QCustomPlot::addGraph#
    {55, 146, 2464},	// QCustomPlot::addGraph##
    {55, 148, 2472},	// QCustomPlot::addItem#
    {55, 150, 2550},	// QCustomPlot::addLayer$
    {55, 151, 2551},	// QCustomPlot::addLayer$#
    {55, 152, 2486},	// QCustomPlot::addLayer$#$
    {55, 154, 2454},	// QCustomPlot::addPlottable#
    {55, 158, 2522},	// QCustomPlot::afterReplot
    {55, 178, 2426},	// QCustomPlot::antialiasedElements
    {55, 204, 2428},	// QCustomPlot::autoAddPlottableToLegend
    {55, 217, 2514},	// QCustomPlot::axisClick#$#
    {55, 221, 2515},	// QCustomPlot::axisDoubleClick#$#
    {55, 222, 2553},	// QCustomPlot::axisRect
    {55, 223, 2490},	// QCustomPlot::axisRect$
    {55, 224, 2489},	// QCustomPlot::axisRectCount
    {55, 225, 2491},	// QCustomPlot::axisRects
    {55, 227, 2533},	// QCustomPlot::axisRemoved#
    {55, 229, 2422},	// QCustomPlot::background
    {55, 230, 2423},	// QCustomPlot::backgroundScaled
    {55, 231, 2424},	// QCustomPlot::backgroundScaledMode
    {55, 244, 2521},	// QCustomPlot::beforeReplot
    {55, 286, 2467},	// QCustomPlot::clearGraphs
    {55, 287, 2475},	// QCustomPlot::clearItems
    {55, 288, 2457},	// QCustomPlot::clearPlottables
    {55, 333, 2482},	// QCustomPlot::currentLayer
    {55, 349, 2496},	// QCustomPlot::deselectAll
    {55, 362, 2532},	// QCustomPlot::draw#
    {55, 366, 2537},	// QCustomPlot::drawBackground#
    {55, 556, 2463},	// QCustomPlot::graph
    {55, 557, 2462},	// QCustomPlot::graph$
    {55, 558, 2468},	// QCustomPlot::graphCount
    {55, 567, 2479},	// QCustomPlot::hasItem#
    {55, 571, 2461},	// QCustomPlot::hasPlottable#
    {55, 600, 2429},	// QCustomPlot::interactions
    {55, 609, 2471},	// QCustomPlot::item
    {55, 610, 2470},	// QCustomPlot::item$
    {55, 612, 2549},	// QCustomPlot::itemAt#
    {55, 613, 2478},	// QCustomPlot::itemAt#$
    {55, 615, 2512},	// QCustomPlot::itemClick##
    {55, 616, 2476},	// QCustomPlot::itemCount
    {55, 618, 2513},	// QCustomPlot::itemDoubleClick##
    {55, 638, -29},	// QCustomPlot::layer$
    {55, 641, 2485},	// QCustomPlot::layerCount
    {55, 643, 2578},	// QCustomPlot::layerableAt#$
    {55, 644, 2536},	// QCustomPlot::layerableAt#$#
    {55, 647, 2492},	// QCustomPlot::layoutElementAt#
    {55, 651, 2588},	// QCustomPlot::legend
    {55, 653, 2516},	// QCustomPlot::legendClick###
    {55, 655, 2517},	// QCustomPlot::legendDoubleClick###
    {55, 657, 2534},	// QCustomPlot::legendRemoved#
    {55, 660, 2639},	// QCustomPlot::limAbove
    {55, 661, 2638},	// QCustomPlot::limBelow
    {55, 690, 2604},	// QCustomPlot::mAntialiasedElements
    {55, 698, 2594},	// QCustomPlot::mAutoAddPlottableToLegend
    {55, 709, 2614},	// QCustomPlot::mBackgroundBrush
    {55, 710, 2616},	// QCustomPlot::mBackgroundPixmap
    {55, 711, 2620},	// QCustomPlot::mBackgroundScaled
    {55, 712, 2622},	// QCustomPlot::mBackgroundScaledMode
    {55, 742, 2624},	// QCustomPlot::mCurrentLayer
    {55, 764, 2598},	// QCustomPlot::mGraphs
    {55, 776, 2608},	// QCustomPlot::mInteractions
    {55, 782, 2600},	// QCustomPlot::mItems
    {55, 791, 2602},	// QCustomPlot::mLayers
    {55, 811, 2634},	// QCustomPlot::mMouseEventElement
    {55, 812, 2632},	// QCustomPlot::mMousePressPos
    {55, 813, 2628},	// QCustomPlot::mMultiSelectModifier
    {55, 815, 2612},	// QCustomPlot::mNoAntialiasingOnDrag
    {55, 817, 2606},	// QCustomPlot::mNotAntialiasedElements
    {55, 826, 2630},	// QCustomPlot::mPaintBuffer
    {55, 841, 2592},	// QCustomPlot::mPlotLayout
    {55, 843, 2596},	// QCustomPlot::mPlottables
    {55, 844, 2626},	// QCustomPlot::mPlottingHints
    {55, 860, 2636},	// QCustomPlot::mReplotting
    {55, 868, 2618},	// QCustomPlot::mScaledBackgroundPixmap
    {55, 889, 2610},	// QCustomPlot::mSelectionTolerance
    {55, 923, 2590},	// QCustomPlot::mViewport
    {55, 961, 2413},	// QCustomPlot::metaObject
    {55, 967, 2523},	// QCustomPlot::minimumSizeHint
    {55, 970, 2505},	// QCustomPlot::mouseDoubleClick#
    {55, 972, 2527},	// QCustomPlot::mouseDoubleClickEvent#
    {55, 974, 2507},	// QCustomPlot::mouseMove#
    {55, 976, 2529},	// QCustomPlot::mouseMoveEvent#
    {55, 978, 2506},	// QCustomPlot::mousePress#
    {55, 980, 2528},	// QCustomPlot::mousePressEvent#
    {55, 982, 2508},	// QCustomPlot::mouseRelease#
    {55, 984, 2530},	// QCustomPlot::mouseReleaseEvent#
    {55, 986, 2509},	// QCustomPlot::mouseWheel#
    {55, 993, 2552},	// QCustomPlot::moveLayer##
    {55, 994, 2488},	// QCustomPlot::moveLayer##$
    {55, 999, 2433},	// QCustomPlot::multiSelectModifier
    {55, 1001, 2431},	// QCustomPlot::noAntialiasingOnDrag
    {55, 1009, 2427},	// QCustomPlot::notAntialiasedElements
    {55, 1054, 2525},	// QCustomPlot::paintEvent#
    {55, 1075, 2425},	// QCustomPlot::plotLayout
    {55, 1076, 2453},	// QCustomPlot::plottable
    {55, 1077, 2452},	// QCustomPlot::plottable$
    {55, 1079, 2546},	// QCustomPlot::plottableAt#
    {55, 1080, 2460},	// QCustomPlot::plottableAt#$
    {55, 1082, 2510},	// QCustomPlot::plottableClick##
    {55, 1083, 2458},	// QCustomPlot::plottableCount
    {55, 1085, 2511},	// QCustomPlot::plottableDoubleClick##
    {55, 1087, 2432},	// QCustomPlot::plottingHints
    {55, 1102, 2419},	// QCustomPlot::qt_metacall$$?
    {55, 1104, 2414},	// QCustomPlot::qt_metacast$
    {55, 1152, 2465},	// QCustomPlot::removeGraph#
    {55, 1153, 2466},	// QCustomPlot::removeGraph$
    {55, 1155, 2473},	// QCustomPlot::removeItem#
    {55, 1156, 2474},	// QCustomPlot::removeItem$
    {55, 1158, 2487},	// QCustomPlot::removeLayer#
    {55, 1160, 2455},	// QCustomPlot::removePlottable#
    {55, 1161, 2456},	// QCustomPlot::removePlottable$
    {55, 1162, 2577},	// QCustomPlot::replot
    {55, 1163, 2504},	// QCustomPlot::replot$
    {55, 1166, 2554},	// QCustomPlot::rescaleAxes
    {55, 1167, 2493},	// QCustomPlot::rescaleAxes$
    {55, 1180, 2526},	// QCustomPlot::resizeEvent#
    {55, 1188, 2642},	// QCustomPlot::rpHint
    {55, 1189, 2640},	// QCustomPlot::rpImmediate
    {55, 1190, 2641},	// QCustomPlot::rpQueued
    {55, 1195, 2568},	// QCustomPlot::saveBmp$
    {55, 1196, 2569},	// QCustomPlot::saveBmp$$
    {55, 1197, 2570},	// QCustomPlot::saveBmp$$$
    {55, 1198, 2500},	// QCustomPlot::saveBmp$$$$
    {55, 1200, 2564},	// QCustomPlot::saveJpg$
    {55, 1201, 2565},	// QCustomPlot::saveJpg$$
    {55, 1202, 2566},	// QCustomPlot::saveJpg$$$
    {55, 1203, 2567},	// QCustomPlot::saveJpg$$$$
    {55, 1204, 2499},	// QCustomPlot::saveJpg$$$$$
    {55, 1206, 2555},	// QCustomPlot::savePdf$
    {55, 1207, 2556},	// QCustomPlot::savePdf$$
    {55, 1208, 2557},	// QCustomPlot::savePdf$$$
    {55, 1209, 2558},	// QCustomPlot::savePdf$$$$
    {55, 1210, 2559},	// QCustomPlot::savePdf$$$$$
    {55, 1211, 2497},	// QCustomPlot::savePdf$$$$$$
    {55, 1213, 2560},	// QCustomPlot::savePng$
    {55, 1214, 2561},	// QCustomPlot::savePng$$
    {55, 1215, 2562},	// QCustomPlot::savePng$$$
    {55, 1216, 2563},	// QCustomPlot::savePng$$$$
    {55, 1217, 2498},	// QCustomPlot::savePng$$$$$
    {55, 1219, 2571},	// QCustomPlot::saveRastered$$$$$
    {55, 1220, 2501},	// QCustomPlot::saveRastered$$$$$$
    {55, 1244, 2494},	// QCustomPlot::selectedAxes
    {55, 1250, 2469},	// QCustomPlot::selectedGraphs
    {55, 1252, 2477},	// QCustomPlot::selectedItems
    {55, 1255, 2495},	// QCustomPlot::selectedLegends
    {55, 1258, 2459},	// QCustomPlot::selectedPlottables
    {55, 1267, 2520},	// QCustomPlot::selectionChangedByUser
    {55, 1268, 2430},	// QCustomPlot::selectionTolerance
    {55, 1274, 2542},	// QCustomPlot::setAntialiasedElement$
    {55, 1275, 2441},	// QCustomPlot::setAntialiasedElement$$
    {55, 1277, 2440},	// QCustomPlot::setAntialiasedElements#
    {55, 1291, 2444},	// QCustomPlot::setAutoAddPlottableToLegend$
    {55, 1309, -32},	// QCustomPlot::setBackground#
    {55, 1310, 2541},	// QCustomPlot::setBackground#$
    {55, 1311, 2436},	// QCustomPlot::setBackground#$$
    {55, 1313, 2438},	// QCustomPlot::setBackgroundScaled$
    {55, 1315, 2439},	// QCustomPlot::setBackgroundScaledMode$
    {55, 1364, 2484},	// QCustomPlot::setCurrentLayer#
    {55, 1365, 2483},	// QCustomPlot::setCurrentLayer$
    {55, 1429, 2544},	// QCustomPlot::setInteraction$
    {55, 1430, 2446},	// QCustomPlot::setInteraction$$
    {55, 1432, 2445},	// QCustomPlot::setInteractions#
    {55, 1463, 2589},	// QCustomPlot::setLegend#
    {55, 1489, 2605},	// QCustomPlot::setMAntialiasedElements$
    {55, 1505, 2595},	// QCustomPlot::setMAutoAddPlottableToLegend$
    {55, 1528, 2615},	// QCustomPlot::setMBackgroundBrush#
    {55, 1530, 2617},	// QCustomPlot::setMBackgroundPixmap#
    {55, 1532, 2621},	// QCustomPlot::setMBackgroundScaled$
    {55, 1534, 2623},	// QCustomPlot::setMBackgroundScaledMode$
    {55, 1594, 2625},	// QCustomPlot::setMCurrentLayer#
    {55, 1639, 2599},	// QCustomPlot::setMGraphs?
    {55, 1663, 2609},	// QCustomPlot::setMInteractions$
    {55, 1675, 2601},	// QCustomPlot::setMItems?
    {55, 1693, 2603},	// QCustomPlot::setMLayers?
    {55, 1733, 2635},	// QCustomPlot::setMMouseEventElement?
    {55, 1735, 2633},	// QCustomPlot::setMMousePressPos#
    {55, 1737, 2629},	// QCustomPlot::setMMultiSelectModifier$
    {55, 1741, 2613},	// QCustomPlot::setMNoAntialiasingOnDrag$
    {55, 1745, 2607},	// QCustomPlot::setMNotAntialiasedElements$
    {55, 1764, 2631},	// QCustomPlot::setMPaintBuffer#
    {55, 1794, 2593},	// QCustomPlot::setMPlotLayout#
    {55, 1798, 2597},	// QCustomPlot::setMPlottables?
    {55, 1800, 2627},	// QCustomPlot::setMPlottingHints$
    {55, 1832, 2637},	// QCustomPlot::setMReplotting$
    {55, 1848, 2619},	// QCustomPlot::setMScaledBackgroundPixmap#
    {55, 1890, 2611},	// QCustomPlot::setMSelectionTolerance$
    {55, 1958, 2591},	// QCustomPlot::setMViewport#
    {55, 1999, 2451},	// QCustomPlot::setMultiSelectModifier$
    {55, 2003, 2448},	// QCustomPlot::setNoAntialiasingOnDrag$
    {55, 2005, 2543},	// QCustomPlot::setNotAntialiasedElement$
    {55, 2006, 2443},	// QCustomPlot::setNotAntialiasedElement$$
    {55, 2008, 2442},	// QCustomPlot::setNotAntialiasedElements#
    {55, 2051, 2545},	// QCustomPlot::setPlottingHint$
    {55, 2052, 2450},	// QCustomPlot::setPlottingHint$$
    {55, 2054, 2449},	// QCustomPlot::setPlottingHints#
    {55, 2137, 2447},	// QCustomPlot::setSelectionTolerance$
    {55, 2234, 2434},	// QCustomPlot::setViewport#
    {55, 2248, 2581},	// QCustomPlot::setXAxis#
    {55, 2250, 2585},	// QCustomPlot::setXAxis2#
    {55, 2252, 2583},	// QCustomPlot::setYAxis#
    {55, 2254, 2587},	// QCustomPlot::setYAxis2#
    {55, 2267, 2524},	// QCustomPlot::sizeHint
    {55, 2299, 2579},	// QCustomPlot::staticMetaObject
    {55, 2369, 2518},	// QCustomPlot::titleClick##
    {55, 2371, 2519},	// QCustomPlot::titleDoubleClick##
    {55, 2373, 2575},	// QCustomPlot::toPainter#
    {55, 2374, 2576},	// QCustomPlot::toPainter#$
    {55, 2375, 2503},	// QCustomPlot::toPainter#$$
    {55, 2376, 2572},	// QCustomPlot::toPixmap
    {55, 2377, 2573},	// QCustomPlot::toPixmap$
    {55, 2378, 2574},	// QCustomPlot::toPixmap$$
    {55, 2379, 2502},	// QCustomPlot::toPixmap$$$
    {55, 2385, 2538},	// QCustomPlot::tr$
    {55, 2386, 2415},	// QCustomPlot::tr$$
    {55, 2387, 2417},	// QCustomPlot::tr$$$
    {55, 2389, 2539},	// QCustomPlot::trUtf8$
    {55, 2390, 2416},	// QCustomPlot::trUtf8$$
    {55, 2391, 2418},	// QCustomPlot::trUtf8$$$
    {55, 2412, 2535},	// QCustomPlot::updateLayerIndices
    {55, 2441, 2421},	// QCustomPlot::viewport
    {55, 2446, 2531},	// QCustomPlot::wheelEvent#
    {55, 2459, 2580},	// QCustomPlot::xAxis
    {55, 2460, 2584},	// QCustomPlot::xAxis2
    {55, 2461, 2582},	// QCustomPlot::yAxis
    {55, 2462, 2586},	// QCustomPlot::yAxis2
    {55, 2509, 2643},	// QCustomPlot::~QCustomPlot
    {63, 248, 2653},	// QGlobalSpace::bin#
    {63, 250, 2645},	// QGlobalSpace::bom#
    {63, 275, 2697},	// QGlobalSpace::center#
    {63, 348, 2713},	// QGlobalSpace::dec#
    {63, 412, 2709},	// QGlobalSpace::endl#
    {63, 451, 2647},	// QGlobalSpace::fixed#
    {63, 453, 2680},	// QGlobalSpace::flush#
    {63, 460, 2696},	// QGlobalSpace::forcepoint#
    {63, 462, 2646},	// QGlobalSpace::forcesign#
    {63, 576, 2716},	// QGlobalSpace::hex#
    {63, 650, 2674},	// QGlobalSpace::left#
    {63, 672, 2663},	// QGlobalSpace::lowercasebase#
    {63, 674, 2678},	// QGlobalSpace::lowercasedigits#
    {63, 952, 2694},	// QGlobalSpace::memccpy$$$$
    {63, 954, 2656},	// QGlobalSpace::memcmp$$$
    {63, 956, 2660},	// QGlobalSpace::memcpy$$$
    {63, 958, 2695},	// QGlobalSpace::memmove$$$
    {63, 960, 2685},	// QGlobalSpace::memset$$$
    {63, 1003, 2676},	// QGlobalSpace::noforcepoint#
    {63, 1005, 2658},	// QGlobalSpace::noforcesign#
    {63, 1008, 2648},	// QGlobalSpace::noshowbase#
    {63, 1013, 2705},	// QGlobalSpace::oct#
    {63, 1021, 2679},	// QGlobalSpace::operator*#$
    {63, 1022, 2655},	// QGlobalSpace::operator*$#
    {63, 1026, 2699},	// QGlobalSpace::operator+#$
    {63, 1027, 2714},	// QGlobalSpace::operator+$#
    {63, 1031, 2659},	// QGlobalSpace::operator-#$
    {63, 1035, 2700},	// QGlobalSpace::operator/#$
    {63, 1043, -1},	// QGlobalSpace::operator|$$
    {63, 1178, 2702},	// QGlobalSpace::reset#
    {63, 1183, 2673},	// QGlobalSpace::right#
    {63, 1230, 2669},	// QGlobalSpace::scientific#
    {63, 2263, 2654},	// QGlobalSpace::showbase#
    {63, 2301, 2657},	// QGlobalSpace::strcat$$
    {63, 2303, 2684},	// QGlobalSpace::strcmp$$
    {63, 2305, 2707},	// QGlobalSpace::strcoll$$
    {63, 2307, 2703},	// QGlobalSpace::strcpy$$
    {63, 2309, 2671},	// QGlobalSpace::strcspn$$
    {63, 2311, 2662},	// QGlobalSpace::strdup$
    {63, 2313, 2667},	// QGlobalSpace::strerror$
    {63, 2315, 2650},	// QGlobalSpace::strlen$
    {63, 2317, 2681},	// QGlobalSpace::strncat$$$
    {63, 2319, 2644},	// QGlobalSpace::strncmp$$$
    {63, 2321, 2677},	// QGlobalSpace::strncpy$$$
    {63, 2323, 2689},	// QGlobalSpace::strspn$$
    {63, 2325, 2698},	// QGlobalSpace::strtok$$
    {63, 2327, 2708},	// QGlobalSpace::strtok_r$$?
    {63, 2329, 2717},	// QGlobalSpace::strxfrm$$$
    {63, 2429, 2666},	// QGlobalSpace::uppercasebase#
    {63, 2431, 2652},	// QGlobalSpace::uppercasedigits#
    {63, 2454, 2691},	// QGlobalSpace::ws#
};

}

extern "C" {

SMOKE_IMPORT void init_qtcore_Smoke();
SMOKE_IMPORT void init_qtgui_Smoke();

static bool initialized = false;
Smoke *qcustomplot_Smoke = 0;

// Create the Smoke instance encapsulating all the above.
void init_qcustomplot_Smoke() {
    init_qtcore_Smoke();
    init_qtgui_Smoke();
    if (initialized) return;
    qcustomplot_Smoke = new Smoke(
        "qcustomplot",
        __smokeqcustomplot::classes, 100,
        __smokeqcustomplot::methods, 2759,
        __smokeqcustomplot::methodMaps, 2689,
        __smokeqcustomplot::methodNames, 2509,
        __smokeqcustomplot::types, 425,
        __smokeqcustomplot::inheritanceList,
        __smokeqcustomplot::argumentList,
        __smokeqcustomplot::ambiguousMethodList,
        __smokeqcustomplot::cast );
    initialized = true;
}

void delete_qcustomplot_Smoke() { delete qcustomplot_Smoke; }

}
