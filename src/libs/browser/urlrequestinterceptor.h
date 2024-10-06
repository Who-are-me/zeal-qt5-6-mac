/****************************************************************************
**
** Copyright (C) Oleg Shparber, et al.
** Copyright (C) 2019 Kay Gawlik
** Contact: https://go.zealdocs.org/l/contact
**
** This file is part of Zeal.
**
** SPDX-License-Identifier: GPL-3.0-or-later
**
****************************************************************************/

#ifndef ZEAL_BROWSER_URLREQUESTINTERCEPTOR_H
#define ZEAL_BROWSER_URLREQUESTINTERCEPTOR_H

#include <QWebEngineUrlRequestInterceptor>

namespace Zeal {
namespace Browser {

class UrlRequestInterceptor final : public QWebEngineUrlRequestInterceptor
{
    Q_OBJECT
    Q_DISABLE_COPY(UrlRequestInterceptor)
public:
    UrlRequestInterceptor(QObject *parent = nullptr);
    void interceptRequest(QWebEngineUrlRequestInfo &info) override;

private:
    void blockRequest(QWebEngineUrlRequestInfo &info);
};

} // namespace Browser
} // namespace Zeal

#endif // ZEAL_BROWSER_URLREQUESTINTERCEPTOR_H
