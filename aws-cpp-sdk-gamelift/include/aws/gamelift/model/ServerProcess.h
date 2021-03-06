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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>A set of instructions for launching server processes on each instance in a
   * fleet. Each instruction set identifies the location of the server executable,
   * optional launch parameters, and the number of server processes with this
   * configuration to maintain concurrently on the instance. Server process
   * configurations make up a fleet's <code> <a>RuntimeConfiguration</a> </code>.</p>
   */
  class AWS_GAMELIFT_API ServerProcess
  {
  public:
    ServerProcess();
    ServerProcess(const Aws::Utils::Json::JsonValue& jsonValue);
    ServerProcess& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline const Aws::String& GetLaunchPath() const{ return m_launchPath; }

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline void SetLaunchPath(const Aws::String& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline void SetLaunchPath(Aws::String&& value) { m_launchPathHasBeenSet = true; m_launchPath = value; }

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline void SetLaunchPath(const char* value) { m_launchPathHasBeenSet = true; m_launchPath.assign(value); }

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline ServerProcess& WithLaunchPath(const Aws::String& value) { SetLaunchPath(value); return *this;}

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline ServerProcess& WithLaunchPath(Aws::String&& value) { SetLaunchPath(value); return *this;}

    /**
     * <p>Location in the game build of the server executable. All game builds are
     * installed on instances at the root <code>C:\game\...</code>, so an executable
     * file located at <code>MyGame\latest\server.exe</code> has a launch path of
     * "<code>C:\game\MyGame\latest\server.exe</code>". </p>
     */
    inline ServerProcess& WithLaunchPath(const char* value) { SetLaunchPath(value); return *this;}

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline ServerProcess& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline ServerProcess& WithParameters(Aws::String&& value) { SetParameters(value); return *this;}

    /**
     * <p>Optional list of parameters to pass to the server executable on launch.</p>
     */
    inline ServerProcess& WithParameters(const char* value) { SetParameters(value); return *this;}

    /**
     * <p>Number of server processes using this configuration to run concurrently on an
     * instance.</p>
     */
    inline int GetConcurrentExecutions() const{ return m_concurrentExecutions; }

    /**
     * <p>Number of server processes using this configuration to run concurrently on an
     * instance.</p>
     */
    inline void SetConcurrentExecutions(int value) { m_concurrentExecutionsHasBeenSet = true; m_concurrentExecutions = value; }

    /**
     * <p>Number of server processes using this configuration to run concurrently on an
     * instance.</p>
     */
    inline ServerProcess& WithConcurrentExecutions(int value) { SetConcurrentExecutions(value); return *this;}

  private:
    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet;
    Aws::String m_parameters;
    bool m_parametersHasBeenSet;
    int m_concurrentExecutions;
    bool m_concurrentExecutionsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
