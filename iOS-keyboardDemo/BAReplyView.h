
/*!
 *  @header BAKit.h
 *          BABaseProject
 *
 *  @brief  BAKit
 *
 *  @author 博爱
 *  @copyright    Copyright © 2016年 博爱. All rights reserved.
 *  @version    V1.0
 */

//                            _ooOoo_
//                           o8888888o
//                           88" . "88
//                           (| -_- |)
//                            O\ = /O
//                        ____/`---'\____
//                      .   ' \\| |// `.
//                       / \\||| : |||// \
//                     / _||||| -:- |||||- \
//                       | | \\\ - /// | |
//                     | \_| ''\---/'' | |
//                      \ .-\__ `-` ___/-. /
//                   ___`. .' /--.--\ `. . __
//                ."" '< `.___\_<|>_/___.' >'"".
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                 \ \ `-. \_ __\ /__ _/ .-` / /
//         ======`-.____`-.___\_____/___.-`____.-'======
//                            `=---='
//
//         .............................................
//                  佛祖镇楼                  BUG辟易
//          佛曰:
//                  写字楼里写字间，写字间里程序员；
//                  程序人员写程序，又拿程序换酒钱。
//                  酒醒只在网上坐，酒醉还来网下眠；
//                  酒醉酒醒日复日，网上网下年复年。
//                  但愿老死电脑间，不愿鞠躬老板前；
//                  奔驰宝马贵者趣，公交自行程序员。
//                  别人笑我忒疯癫，我笑自己命太贱；
//                  不见满街漂亮妹，哪个归得程序员？

/*
 
 *********************************************************************************
 *
 * 在使用BAKit的过程中如果出现bug请及时以以下任意一种方式联系我，我会及时修复bug
 *
 * QQ     : 可以添加SDAutoLayout群 497140713 在这里找到我(博爱1616【137361770】)
 * 微博    : 博爱1616
 * Email  : 137361770@qq.com
 * GitHub : https://github.com/boai
 * 博客园  : http://www.cnblogs.com/boai/
 * 博客    : http://boai.github.io
 
 *********************************************************************************
 
 */


#import <UIKit/UIKit.h>

typedef void(^cilckIndexBlock)(NSString *contentStr);

@interface BAReplyView : UIView <UITextFieldDelegate>

{
    NSString     *imageNameStr;
    UIImageView  *userImageView;
    UIButton     *sendButton;
}
@property (nonatomic, strong) UITextField      *replyTextField;
@property (nonatomic, copy  ) cilckIndexBlock   clickIndexBlock;
@property (nonatomic, strong) NSString         *placeHolder;
/*! 键盘是否已弹出，默认：YES */
@property (nonatomic, assign) BOOL              isShowKeyboard;

/*!
 *  初始化回复框
 *
 *  @param frame       frame description
 *  @param imageName   imageName description
 *  @param placeHolder placeHolder description
 *  @param clickIndex  clickIndex description
 *
 *  @return 创建一个回复框，自动处理键盘
 */
- (instancetype)initWithFrame:(CGRect)frame withImage:(NSString *)imageName withPlaceHolder:(NSString *) placeHolder callBackIndex:(cilckIndexBlock)clickIndex;

/*!
 *  注册键盘通知
 */
- (void)registKeyboardNotification;

/*!
 *  移除键盘通知
 */
- (void)removeKeyboardNotification;

@end
