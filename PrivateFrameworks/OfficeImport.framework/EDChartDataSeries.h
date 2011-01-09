/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSArray, NSString, EDChartSeriesFormat;



@interface EDChartDataSeries : NSObject 
{
    NSArray *mValues;
    NSArray *mCategoryLabels;
    NSArray *mBubbleSizes;
    NSMutableDictionary *mPointFormats;
    EDChartSeriesFormat *mDefaultFormat;
    NSString *mTitle;
}


- (void)dealloc;
- (id)init;
- (void)setValues:(id)arg1;
- (id)values;
- (void)setCategoryLabels:(id)arg1;
- (id)categoryLabels;
- (void)setBubbleSizes:(id)arg1;
- (id)bubbleSizes;
- (id)formatForPoint:(NSUInteger)arg1;
- (void)addFormatForPoint:(id)arg1 index:(NSUInteger)arg2;
- (id)defaultFormat;
- (void)setDefaultFormat:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;

@end