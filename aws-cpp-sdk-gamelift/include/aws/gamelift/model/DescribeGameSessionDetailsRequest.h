﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeGameSessionDetailsRequest : public GameLiftRequest
  {
  public:
    DescribeGameSessionDetailsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify a fleet to retrieve information on all
     * game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline DescribeGameSessionDetailsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline DescribeGameSessionDetailsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to retrieve information on. Game
     * session ID format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline DescribeGameSessionDetailsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline const Aws::String& GetAliasId() const{ return m_aliasId; }

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline void SetAliasId(const Aws::String& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline void SetAliasId(Aws::String&& value) { m_aliasIdHasBeenSet = true; m_aliasId = value; }

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline void SetAliasId(const char* value) { m_aliasIdHasBeenSet = true; m_aliasId.assign(value); }

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithAliasId(const Aws::String& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithAliasId(Aws::String&& value) { SetAliasId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet alias. Specify an alias to retrieve information
     * on all game sessions active on the fleet.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithAliasId(const char* value) { SetAliasId(value); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline const Aws::String& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(const Aws::String& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(Aws::String&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline void SetStatusFilter(const char* value) { m_statusFilterHasBeenSet = true; m_statusFilter.assign(value); }

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionDetailsRequest& WithStatusFilter(const Aws::String& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionDetailsRequest& WithStatusFilter(Aws::String&& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include ACTIVE, <code>TERMINATED</code>, <code>ACTIVATING</code> and
     * <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline DescribeGameSessionDetailsRequest& WithStatusFilter(const char* value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeGameSessionDetailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet;
    Aws::String m_statusFilter;
    bool m_statusFilterHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
