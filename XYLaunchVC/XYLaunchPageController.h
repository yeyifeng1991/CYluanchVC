//
//  XYLaunchPageController.h
//  XYLaunchVC
//
//  Created by YeYiFeng on 2018/3/23.
//  Copyright © 2018年 叶子. All rights reserved.
//

#import <UIKit/UIKit.h>
// 声明枚举
typedef NS_ENUM(NSInteger,XYLuanchHandleType) {
    XYLuanchHandleTypeMain,
    XYLuanchHandleTypeSkipBtn,
    XYLuanchHandleTypeShowFinsh,
};
@interface XYLaunchPageController : UIViewController
// 主页面点击的block
typedef void(^XHLuanchFinishHandler)(XYLuanchHandleType callBacktype);

// 广告页面的block
typedef void(^XHLuanchAdverImageHandler)(UIImageView *  imageView);

// 跳过按钮的block
typedef void(^XHLuanchSkipHandler)(UIButton * skipBtn ,NSInteger currentTime);
// 页面初始化方法
-(instancetype)initWithLuanchImage:(UIImage * )luanchImage withShowTime:(NSInteger)showTime setImageHandler:(XHLuanchAdverImageHandler)imageHandler finishHander:(XHLuanchFinishHandler)finshHandler;

// 广告按钮通过block返回
-(void)setSkipBtn:(XHLuanchSkipHandler)setSkipHandler;

// 设置广告停留的时间



@end
