q0 = [0,0.693374218246076,0.323279209010822,2.36287849262207,1.03743346468823,2.79486680505606,1.07713719714608].';
dq0 = [1.43439702458653,0.114754525860054,-0.0994226913800137,2.66689445269301,-1.03494098801163,-4.03811062635543,3.03124194921512].';

% P0 = [ repmat(K0_high, 4, 1); repmat(K0_low, 30, 1) ];
P = [1.5150    0.4365];

[~, ~, info, err] = Sim_RABBIT_walking( q0, dq0, P(1), P(2), 0 );
for nsteps = 1 : 15
    if length(info) == 1
            t_hist_tmp = [ info(1).time ];
            y_hist_tmp = [ info(1).state ];
            error('length(info) = 1');
        else
            t_hist_tmp = [ info(1).time; info(2).time ];
            y_hist_tmp = [ info(1).state; info(2).state ];
            q0 = y_hist_tmp(end,1:7).';
            dq0 = y_hist_tmp(end,8:end).';
    end
end
%%
Animate(t_hist_tmp, y_hist_tmp);


function Animate(t_hist, y_hist)
    anim = MyAnimator.MyFiveLinkAnimator( [], ...
        't', t_hist, ...
        'q', y_hist(:,1:7).', ...
        'text_flag', true );
    anim.pov = MyAnimator.AnimatorPointOfView.West;
    anim.Animate(true);
    anim.isLooping = false;
    anim.updateWorldPosition = true;
    anim.endTime = t_hist(end);
    conGUI = MyAnimator.AnimatorControls();
    conGUI.anim = anim;
end