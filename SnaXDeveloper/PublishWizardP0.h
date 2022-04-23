// SnaX Game Engine - https://github.com/snaxgameengine/snax
// Licensed under the MIT License <http://opensource.org/licenses/MIT>.
// SPDX-License-Identifier: MIT
// Copyright (c) 2013 - 2022 Frank-Vegar Mortensen <franksvm(at)outlook(dot)com>.
//
// Permission is hereby  granted, free of charge, to any  person obtaining a copy
// of this software and associated  documentation files (the "Software"), to deal
// in the Software  without restriction, including without  limitation the rights
// to  use, copy,  modify, merge,  publish, distribute,  sublicense, and/or  sell
// copies  of  the Software,  and  to  permit persons  to  whom  the Software  is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE  IS PROVIDED "AS  IS", WITHOUT WARRANTY  OF ANY KIND,  EXPRESS OR
// IMPLIED,  INCLUDING BUT  NOT  LIMITED TO  THE  WARRANTIES OF  MERCHANTABILITY,
// FITNESS FOR  A PARTICULAR PURPOSE AND  NONINFRINGEMENT. IN NO EVENT  SHALL THE
// AUTHORS  OR COPYRIGHT  HOLDERS  BE  LIABLE FOR  ANY  CLAIM,  DAMAGES OR  OTHER
// LIABILITY, WHETHER IN AN ACTION OF  CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE  OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include "Common.h"
#include "PublishWizard.h"
#include "ui_PublishWizardP0.h"

namespace m3d
{

class PublishWizardP0 : public PublishWizardPage
{
Q_OBJECT
public:
	PublishWizardP0(QWidget *parent = 0);
	~PublishWizardP0();

	virtual void initializePage() override;

	virtual String getProfile();
	virtual void get(PublishSettings &ps) override;
	virtual bool isComplete() const override;

private slots:
	void onNew();
	void onDelete();
	void onRename();

private:
	Ui::PublishWizardP0 ui;

};

}