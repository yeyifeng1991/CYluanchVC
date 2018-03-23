//
//  XYLaunchPageController.m
//  XYLaunchVC
//
//  Created by YeYiFeng on 2018/3/23.
//  Copyright © 2018年 叶子. All rights reserved.
//

#import "XYLaunchPageController.h"

@interface XYLaunchPageController ()


@end

@implementation XYLaunchPageController
-(instancetype)initWithLuanchImage:(UIImage * )luanchImage withShowTime:(NSInteger)showTime setImageHandler:(XHLuanchAdverImageHandler)imageHandler finishHander:(XHLuanchFinishHandler)finshHandler;
{
    if (self =[super initWithNibName:nil bundle:nil]) {
        
    }
    return self;
}
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor cyanColor];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
