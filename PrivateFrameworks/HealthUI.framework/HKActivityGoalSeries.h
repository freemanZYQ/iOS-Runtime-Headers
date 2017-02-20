/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityGoalSeries : HKGraphSeries {
    HKFillStyle * _fillStyle;
    HKStrokeStyle * _strokeStyle;
}

- (void).cxx_destruct;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 block:(id /* block */)arg5;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 block:(id /* block */)arg5;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { int x1; int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)yAxisDifferenceToPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;

@end