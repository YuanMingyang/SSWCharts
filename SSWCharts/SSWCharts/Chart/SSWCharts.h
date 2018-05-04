//
//  SSWCharts.h
//  SSWCharts
//
//  Created by WangShaoShuai on 2018/5/2.
//  Copyright © 2018年 com.sswang.www. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,SSWChartsType){
    SSWChartsTypePie,
    SSWChartsTypeLine,
    SSWChartsTypeBar
};
@protocol SSWChartsDelegate;
@interface SSWCharts : UIView
-(instancetype)initWithChartType:(SSWChartsType)type;
@property(nonatomic,assign)SSWChartsType        chartType;
@property(nonatomic,strong)NSArray              *percentageArr;//百分比数组
@property(nonatomic)NSArray                     *colorsArr;//颜色组数
@property(nonatomic)NSArray                     *titlesArr;//标题数组

@property(nonatomic)UILabel                     *bubbleLab;//点击时提示泡泡
@property(nonatomic,assign)BOOL                 showEachYValus;//是否显示每个Y值

@property(nonatomic,assign)id<SSWChartsDelegate>delegate;
@end
@protocol SSWChartsDelegate<NSObject>
-(void)SSWChartView:(SSWCharts *)chartView didSelectIndex:(NSInteger)index;
@end
