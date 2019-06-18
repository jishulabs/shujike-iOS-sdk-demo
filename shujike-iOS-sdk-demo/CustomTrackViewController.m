//
//  CustomTrackViewController.m
//  shujike-iOS-sdk-demo
//
//  Created by TF_man on 2017/12/8.
//  Copyright © 2017年 Shujike. All rights reserved.
//

#import "CustomTrackViewController.h"
#import "SjkAgent.h"
#import "Masonry.h"

@interface CustomTrackViewController ()

@end

@implementation CustomTrackViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self creatBtn];
}

- (void)creatBtn{
    UIButton * testBtn = [[UIButton alloc]init];
    [testBtn setBackgroundColor:[UIColor redColor]];
    [self.view addSubview:testBtn];
    [testBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self.view);
        make.top.equalTo(self.view);
        make.width.equalTo(@60);
        make.height.equalTo(@40);
    }];
}

- (IBAction)trackEventBtnHandle:(UIButton *)sender {
    
    NSDictionary *eventAttMap = @{@"m_Q1":@"1",
                                  @"m_Q2":@"2",
                                  @"d_Q3":@"3"};
    [SjkAgent postEventevent:@"自定义事件id" dict:eventAttMap];
}

- (IBAction)trackAttributeBtnHandle:(UIButton *)sender {
    
    NSDictionary *attributeMap = @{@"自定义的属性id":@"100",
                                   @"自定义的属性id":@"101",
                                   @"自定义的属性id":@"102"};
    [SjkAgent setAttributeDict:attributeMap];
}

- (IBAction)trackUserInfoBtnHandle:(UIButton *)sender {
    
    //设置用户信息
    UserBean *userBean = [[UserBean alloc]init];
    userBean.userId = @"788";
    userBean.userRegesterChannel = @"微信";
    userBean.userGender = @"男";
    [SjkAgent bindUserInfo:userBean];
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
