modded class MissionServer {
    void MissionServer() {
        GetRPCManager().AddRPC( "AutoRunJog", "SwitchAutoRunJogMode", this, SingleplayerExecutionType.Both );
    }

    void SwitchAutoRunJogMode( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target ) {
        Param4< Man, bool, float, float > data;
        if ( !ctx.Read( data ) ) return;
        if ( PlayerBase.Cast(data.param1).GetIdentity().GetId() == sender.GetId() ) 
        {
            PlayerBase.Cast( data.param1 ).GetInputController().OverrideMovementSpeed( data.param2, data.param3 );
            PlayerBase.Cast( data.param1 ).GetInputController().OverrideMovementAngle( data.param2, data.param4 );
        }
    }
};