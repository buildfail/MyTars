/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */
#include "HttpDemoImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void HttpDemoImp::initialize()
{
    //initialize servant here:
    //...
}

//////////////////////////////////////////////////////
void HttpDemoImp::destroy()
{
    //destroy servant here:
    //...
}

int HttpDemoImp::doRequest(TarsCurrentPtr current, vector<char> &buffer)
{
    TC_HttpRequest req;
    TC_HttpResponse rsp;

	// parse request header
    vector<char> v = current->getRequestBuffer();
    string sBuf;
    sBuf.assign(&v[0], v.size());
	TLOGDEBUG("[HttpDemo]Receive buffer size: "<< sBuf.length() << ", request: " << sBuf.c_str() <<endl);
	//cout<<"[HttpDemo]Receive buffer size: "<< sBuf.length() << ", request: " << sBuf.c_str() <<endl;
    req.decode(sBuf);

    int ret = doRequest(req, rsp);

    rsp.encode(buffer);

    return ret;
}

int HttpDemoImp::doRequest(const TC_HttpRequest &req, TC_HttpResponse &rsp)
{
	string msg = "Hello Tars!";
    rsp.setContentType("html/text");
    rsp.setResponse(msg.c_str(), msg.size());
    return 0;   
}
