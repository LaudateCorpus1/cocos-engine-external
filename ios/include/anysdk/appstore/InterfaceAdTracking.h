/****************************************************************************
Copyright (c) 2012+2013 cocos2d+x.org

http://www.cocos2d+x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#import <Foundation/Foundation.h>

@protocol InterfaceAdTracking<NSObject>

@required
/**
 *
 * @Title: onRegister
 * @Description: Call this method if you want to track register events as happening during a section.
 * @param userInfo    user identifier
 * @return void
 */
- (void) onRegister: (NSString*) userId;

/**
 *
 * @Title: onLogin
 * @Description:Call this method if you want to track login events as happening during a section.
 * @param userInfo    The details of this parameters are already covered by document.
 * @return void
 */
- (void) onLogin: (NSMutableDictionary*) userInfo;

/**
 *
 * @Title: onYap
 * @Description: Call this method if you want to track yap events as happening during a section.
 * @param  productInfo  The details of this parameters are already covered by document.
 * @return void
 */
- (void) onYap: (NSMutableDictionary*) productInfo;

/**
 *
 * @Title: trackEvent
 * @Description: Call this method if you want to track custom events as happening during a section.
 * @param eventId The custom event name.
 * @return void
 */
- (void) trackEvent: (NSString*) eventId;

/**
 *
 * @Title: trackEvent
 * @Description: Call this method if you want to track custom events with parameters as happening during a section.
 * @param eventId The custom event name.
 * @param  paramMap The details of this parameters are already covered by document.
 */
- (void) trackEvent: (NSString*) eventId withParam:(NSMutableDictionary*) paramMap;

/**
 *  whether function is supported
 *
 *  @param functionName the name of function
 *
 *  @return return If the function is supported, return true
 or if the function is  not supported, return false
 */
- (BOOL) isFunctionSupported : (NSString*) functionName;

/**
 *  get the version of SDK
 *
 *  @return the version of SDK
 */
- (NSString*) getSDKVersion;

/**
 *  get the version of plugin
 *
 *  @return the version of plugin
 */
- (NSString*) getPluginVersion;

@optional
/**
 *  init SDK
 *
 *  @param cpInfo the parameters of SDK
 */
- (void) configDeveloperInfo : (NSMutableDictionary*) cpInfo;


@end